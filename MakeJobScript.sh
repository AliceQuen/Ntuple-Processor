#!/bin/bash

# This script is used to generate Job scripts for Executing from data dirs

############################ Configuration ###############################
taskName='testTask1' # Taks Name
DataDir='/home/storage0/users/junkaiqin/jpsiX3872_1/' # Ntuple source dir
TreeDir='mkcands/X_data' # Tree Directory in .root files used, please check it in root
JobScriptDir='/home/storage0/users/junkaiqin/Ntuple-Processor/JobScriptDir' # Directory to store Job Scripts, force to remove and re-create a JobScriptDir/taskName_Script Dir as JobScriptDir, DO NOT INCLUDE last '/'
OutPutDir='/home/storage0/users/junkaiqin/Ntuple-Processor/Data/Data1' # Output directory, force to remove and re-create it
Discription=' First 2023 Data Test' # Discription of job, saved as .md file in OutPutDir and in JobScriptDir
# Attention! To finish Configuration, the output file name format should be checked below
########################################################################## 

JobScriptDir="${JobScriptDir}/${taskName}_Script"
rm -rf $JobScriptDir
mkdir -p $JobScriptDir
cp Execute.C $JobScriptDir
echo -e "Configuration\n${taskName}\n${DataDir}\n${TreeDir}\n${JobScriptDir}\n${OutPutDir}" > ${JobScriptDir}/${taskName}_README.md
rm -rf $OutPutDir
mkdir -p $OutPutDir
echo -e "${OutPutDiscription}" > $OutPutDir/README.md
find $DataDir -type d -links 2 > temp.out
n=0
cat temp.out | while read rows
do
	n=$(expr $n + 1)
# name format should be checked, maybe auto naming in future??
	name1=$(echo $rows  | awk 'BEGIN{FS="/"} {print $10}') 
	name2=$(echo $name1 | awk 'BEGIN{FS="_"} {print $2}')
	name3=$(echo $name1 | awk 'BEGIN{FS="_"} {print $3}')
	name4=$(echo $rows  | awk 'BEGIN{FS="/"} {print $12}')
	name=${name3}_${name2}_${name4}.root
	sed -e 's:NUMBER:'"${n}"':g' -e 's:TREENAME:'"${TreeDir}"':g' -e 's:INPUTPATH:'"${rows}"':g' -e 's:OUTPUTDIR:'"${OutPutDir}"':g' -e 's:OUTNAME:'"${name}"':g' runjobs.C > "${JobScriptDir}/runjobs_${n}.C" 
done
rm -f temp.out
