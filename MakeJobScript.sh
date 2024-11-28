#!/bin/bash

# This script is used to generate Job scripts for Executing from data dirs

############################ Configuration ###############################
taskName='TestNewAll' # Taks Name
DataDir='/home/storage0/users/junkaiqin/JXntuple/JpsiX3872/' # Ntuple source dir
TreeDir='mkcands/X_data' # Tree Directory in .root files used, please check it in root
JobScriptDir='/home/storage0/users/junkaiqin/Ntuple-Processor/JobScriptDir' # Directory to store Job Scripts, force to remove and re-create a JobScriptDir/taskName_Script Dir as JobScriptDir, DO NOT INCLUDE last '/'
OutPutDir='/home/storage0/users/junkaiqin/Ntuple-Processor/Output' # Directory to store Data, force to remove and re-create a OutPutDir/taskName_Output Dir as JobScript, DO NOT INCLUDE lase '/'
Discription=' A new Run2,3 data test' # Discription of job, saved as .md file in OutPutDir and in JobScriptDir
# Attention! To finish Configuration, the output file name format should be checked below
########################################################################## 

JobScriptDir="${JobScriptDir}/${taskName}_Script"
rm -rf $JobScriptDir
mkdir -p $JobScriptDir
cp Execute.C $JobScriptDir
echo -e "Configuration\n${taskName}\n${DataDir}\n${TreeDir}\n${JobScriptDir}\n${OutPutDir}" > ${JobScriptDir}/README.md
OutPutDir="${OutPutDir}/${taskName}_Output"
rm -rf $OutPutDir
mkdir -p "${OutPutDir}/other"
echo -e "${OutPutDiscription}" > $OutPutDir/other/README.md
find $DataDir -type d -links 2 > temp.out
n=0
cat temp.out | while read rows
do
	n=$(expr $n + 1)
# name format should be checked, maybe auto naming in future??
	name1=$(echo $rows  | awk 'BEGIN{FS="/"} {print $9}') 
	name2=$(echo $name1 | awk 'BEGIN{FS="_"} {print $1}')
	name3=$(echo $name1 | awk 'BEGIN{FS="_"} {print $2}')
	name4=$(echo $rows  | awk 'BEGIN{FS="/"} {print $11}')
	if [[ ${name3} == '' ]]
	then	
		name=${name2}_${name4}
	else
		name=${name2}_${name3}_${name4}
	fi
	sed -e 's:NUMBER:'"${n}"':g' -e 's:TREENAME:'"${TreeDir}"':g' -e 's:INPUTPATH:'"${rows}"':g' -e 's:OUTPUTDIR:'"${OutPutDir}"':g' -e 's:OUTNAME:'"${name}"':g' runjobs.C > "${JobScriptDir}/runjobs_${n}.C" 
done
rm -f temp.out
