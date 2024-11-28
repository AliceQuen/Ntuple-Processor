#!/bin/bash

# This script is used to gentrate .C files to read RagneTree and draw distribution
# Data from myntuple.C should be used in .C files above

############################### Configuration #################################
DrawReadDir='/home/storage0/users/junkaiqin/Ntuple-Processor/DrawRead/TestNewAll_Draw' # Directory where DrawDistribution.C and ReadRange.C is stored
# Force to create DrawReadDir DO NOT INCLUDE last '/'
DataDir='/home/storage0/users/junkaiqin/Ntuple-Processor/Data/TestNewAll/TestNewAll_Data' # Directory of Input Data, DO NOT INCLUDE the last '/'
BkgRescale='0.1' # Property used to rescale bkg,that is sig:bkg in X axis, float type
hist_OUT='HistInfo.out' # Hist info file
###############################################################################
rm -rf ${DrawReadDir}
mkdir -p ${DrawReadDir}
mkdir -p ${DataDir}/other
sed -e 's:DATA_DIR:'"${DataDir}:g" DrawDistribution.C > D_temp.C
sed -i -e '/RESCALE/a'"\t\t\t\tbkgTemp->Scale(${BkgRescale});" D_temp.C
tac $hist_OUT | while read rows
do
		if [[ $rows =~ ---.*--- ]]
                then
			sleep 0.001
                else
                        h_name=$(echo $rows | awk 'BEGIN{FS="/"} {print $1}')
                        h_min=$(echo $rows |awk 'BEGIN{FS="/"} {print $2}')
                        h_max=$(echo $rows | awk 'BEGIN{FS="/"} {print $3}')	
			sed -i -e '/HIST_DEFINE/a\'"\t\tTH1F *h_sig_${h_name} = new TH1F(\"h_sig_${h_name}\", \"h_sig_${h_name}\", 500, ${h_min}, ${h_max});\n\t\tTH1F *h_bkg_${h_name} = new TH1F(\"h_bkg_${h_name}\", \"h_bkg_${h_name}\", 500, ${h_min}, ${h_max});\n" D_temp.C
			sed -i -e '/HIST_TO_VECTOR/a\'"\t\tsig.push_back(h_sig_${h_name});\n\t\tbkg.push_back(h_bkg_${h_name});\n\t\thistName.push_back(${h_name});\n" D_temp.C
		fi
done
cp D_temp.C ${DrawReadDir}/DrawDistribution.C
rm -f D_temp.C
sed -e 's:DATA:'"${DataDir}/*.root:g" ReadRange.C > ${DrawReadDir}/ReadRange.C

