#!/bin/bash

# This script is used to gentrate myntuple.C

############################### Configuration #################################
myntuple_H='myntuple.h' # myntuple.h templete file 
myntuple_C='myntuple.C' # myntuple.C templete file
Mode='2' # Job Mode 0:generate a Hist info templete file 1:auto hist range 2:fixed hist range 3:cut optimization
hist_OUT='HistInfo.out' # Hist info file
JobScriptDir='/home/storage0/users/junkaiqin/Ntuple-Processor/JobScriptDir/TestNewAll_Script' # Directory to store Job Script, where runjobs.C files exists
# Such a Dir should be created by MakeJobScript.sh. DO NOT INCLUDE last / in JobScriptDir 
###############################################################################

if [[ ! -d ${JobScriptDir} && $Mode -ne 0 ]]
then
    	echo "Fatal: Parameter JobScriptDir is missed!!"
	Mode=-1
fi
if [ $Mode -eq 0 ]
then
	echo -e "--- Distription in first line ---\n--- Mode in MakeMyntuple.sh ---\nHistName/min/max" > HistInfo.out	
	echo "HistInfo.out is created"
fi
if [[ $Mode -eq 1 || $Mode -eq 2 || $Mode -eq 3 ]]
then
	cp $myntuple_H $JobScriptDir/myntuple.h
	sed -e '1i\/*Once complete the modification, write file and quit vim*/' -e '1i\/*Maybe you still want to modify it*/' -e '1i\/*This is myntuple.C generated automatically*/' $myntuple_C > C_temp.C
fi
if [ $Mode -eq 1 ]
then
	sed -i -e '/OUT_STREAM/{n;n;s:^://:g;n;s:^://:g}' C_temp.C		
	tac $hist_OUT | while read rows
	do
		if [[ $rows =~ ---.*--- ]]
		then 
			sleep 0.001
		else
			h_name=$(echo $rows | awk 'BEGIN{FS="/"} {print $1}')
			h_min=$(echo $rows |awk 'BEGIN{FS="/"} {print $2}')
			h_max=$(echo $rows | awk 'BEGIN{FS="/"} {print $3}')
			sed -i -e '/HIST_DEFINE/{n;s:^:'"   TH1F *h_sig_${h_name} = new TH1F(\"h_sig_${h_name}\", \"h_sig_${h_name}\", 500, 0, 0);\n   TH1F *h_bkg_${h_name} = new TH1F(\"h_bkg_${h_name}\", \"h_bkg_${h_name}\", 500, 0, 0);\n:g}" C_temp.C
			sed -i -e '/HIST_TO_VECTOR/{n;n;n;s:^:'"   sig.push_back(h_sig_${h_name});\n   bkg.push_back(h_bkg_${h_name});\n:g}" C_temp.C
			sed -i -e '/MAX_MIN_VARIABLES/{n;n;n;n;n;s:^:'"   double max_${h_name};\n   double min_${h_name};\n:g}" C_temp.C
			sed -i -e '/MAX_MIN_TO_VECTOR/{n;n;n;s:^:'"   vmax.push_back(max_${h_name});\n   vmin.push_back(min_${h_name});\n:g}" C_temp.C
			sed -i -e '/RANGE_TREE/{n;n;n;n;s:^:'"   RangeTree->Branch(\"$max_${h_name}\", &max_${h_name});\n   RangeTree->Branch(\"$min_${h_name}\", &min_${h_name});\n:g}" C_temp.C
			sed -i -e '/FILL_SIG/{n;s:^:'"\t\t\th_sig_${h_name}->Fill();\n:g}" C_temp.C

			sed -i -e '/FILL_BKG/{n;s:^:'"\t\t\th_bkg_${h_name}->Fill();\n:g}" C_temp.C
		fi
	done	
	sed -i -e '/PROCESS_CUTOPT/{n;s:^://:g;n;s:^://:g;n;n;s:^://:g}' C_temp.C 
	sed -i -e '/FILE_CLOSE/{n;n;s:^://:g}' C_temp.C
	vim C_temp.C
	cp C_temp.C $JobScriptDir/myntuple.C
fi
if [ $Mode -eq 2 ]
then
	sed -i -e '/OUT_STREAM/{n;n;s:^://:g;n;s:^://:g}' C_temp.C		
	sed -i -e '/SIG_BKG_VECTOR/{n;s:^://:g;n;s:^://:g}' C_temp.C
	sed -i -e '/MAX_MIN_VARIABLES/{n;s:^://:g;n;s:^://:g}' C_temp.C
	sed -i -e '/RANGE_TREE/{n;s:^://:g}' C_temp.C
	tac $hist_OUT | while read rows
	do
		if [[ $rows =~ ---.*--- ]]
		then 
			sleep 0.001
		else
			h_name=$(echo $rows | awk 'BEGIN{FS="/"} {print $1}')
			h_min=$(echo $rows |awk 'BEGIN{FS="/"} {print $2}')
			h_max=$(echo $rows | awk 'BEGIN{FS="/"} {print $3}')
			sed -i -e '/HIST_DEFINE/{n;s:^:'"   TH1F *h_sig_${h_name} = new TH1F(\"h_sig_${h_name}\", \"h_sig_${h_name}\", 500, ${h_min}, ${h_max});\n   TH1F *h_bkg_${h_name} = new TH1F(\"h_bkg_${h_name}\", \"h_bkg_${h_name}\", 500, ${h_min}, ${h_max});\n:g}" C_temp.C
			sed -i -e '/FILL_SIG/{n;s:^:'"\t\t\th_sig_${h_name}->Fill();\n:g}" C_temp.C
			sed -i -e '/FILL_BKG/{n;s:^:'"\t\t\th_bkg_${h_name}->Fill();\n:g}" C_temp.C
		fi
	done 
	sed -i -e '/PROCESS_CUTOPT/{n;s:^://:g;n;s:^://:g;n;n;s:^://:g}' C_temp.C 
	sed -i -e '/RANGE_FILL/{n;s:^:/*:g}' C_temp.C 
	sed -i -e '/RANGE_FILL/{n;n;n;n;n;n;n;n;n;n;n;n;n;n;n;n;n;s:$:*/:g}' C_temp.C 
	sed -i -e '/FILE_CLOSE/{n;n;s:^://:g}' C_temp.C
	vim C_temp.C
	cp C_temp.C $JobScriptDir/myntuple.C
fi
if [ $Mode -eq 3 ]
then
	sed -i -e '/OUT_STREAM/{n;s:^://:g}' C_temp.C		
	sed -i -e '/HIST_PSI2S/{n;s:^://:g}' C_temp.C		
	sed -i -e '/SIG_BKG_VECTOR/{n;s:^://:g;n;s:^://:g}' C_temp.C
	sed -i -e '/MAX_MIN_VARIABLES/{n;s:^://:g;n;s:^://:g}' C_temp.C
	sed -i -e '/RANGE_TREE/{n;s:^://:g}' C_temp.C
	sed -i -e '/PROCESS_CUTOPT/{n;n;n;n;'"s:^:\t\t\tmyos << \n:g}" C_temp.C
	tac $hist_OUT | while read rows
	do
		if [[ $rows =~ ---.*--- ]]
		then 
			sleep 0.001
		else
			h_name=$(echo $rows | awk 'BEGIN{FS="/"} {print $1}')
			h_min=$(echo $rows |awk 'BEGIN{FS="/"} {print $2}')
			h_max=$(echo $rows | awk 'BEGIN{FS="/"} {print $3}')
			sed -i -e '/PROCESS_CUTOPT/{n;n;n;n;s:$:'"${h_name} << :g}" C_temp.C		
		fi
	done 
	sed -i -e '/PROCESS_CUTOPT/{n;n;n;n;'"s:$:<< endl;:g}" C_temp.C
	sed -i -e '/PROCESS_DISTRIBUTION/{n;s:^:/*:g;n;n;n;n;n;n;s:$:*/:g}' C_temp.C 
	sed -i -e '/RANGE_FILL/{n;s:^:/*:g}' C_temp.C 
	sed -i -e '/RANGE_FILL/{n;n;n;n;n;n;n;n;n;n;n;n;n;n;n;n;n;s:$:*/:g}' C_temp.C 
	sed -i -e '/FILE_CLOSE/{n;s:^://:g}' C_temp.C
	vim C_temp.C
	cp C_temp.C $JobScriptDir/myntuple.C
fi
rm -f C_temp.C
