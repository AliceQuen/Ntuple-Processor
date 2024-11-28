#include "TFile.h"
#include "TCanvas.h"
#include "TROOT.h"

#include "myntuple.C"

#include <vector>
#include <iostream>
#include <string>
#include <dirent.h>
#include <sys/types.h>
#include <boost/regex.hpp>

#define Names std::vector<std::string>

//Find All runjobs_n.C file
Names *FindFile(const char *dirName, const char *pattern)
{
	boost::regex reg = boost::regex(pattern);
        DIR *dir = opendir(dirName);
        if (dir)
        {
                dirent *temp = nullptr;
                temp = readdir(dir);
                Names *result = new Names();
                do
                {
			if (temp->d_type == DT_REG && boost::regex_match(temp->d_name, reg))
                        {
                                result->push_back(std::string(temp->d_name));
                        }
                        temp = readdir(dir);
                } while (temp);
                return result;
        }
        else
        {
                return nullptr;
        }
}
void Sort(Names* input)
{
	unsigned int num = input->size();
	if(num < 1)
	{
		std::cout<<"return"<<std::endl;
		return;
	}
	std::string temp;
	bool exchanged = false;
	do
	{
		exchanged = false;
		for(unsigned int i = 0; i < num - 1; i++)
		{
			if(std::strcmp(input->at(i).c_str(), input->at(i + 1).c_str()) > 0)
			{
				temp = input->at(i);
				input->at(i) = input->at(i + 1);
				input->at(i + 1) = temp;
				exchanged = true;		
			}
		}
	}while(exchanged);
}
void Execute()
{
	Names * name = FindFile("./", "^runjobs_[0-9]*.C");
	unsigned int num = name->size();
	Sort(name);
	std::string cmd;
	unsigned int n = 0;
	for(unsigned int i = 0; i < num; i++)
	{	
		std::cout<<"I am processing "<<name->at(i)<<std::endl;
		std::cout<<"This is "<<i + 1<<" out of "<<num<<std::endl;
		cmd = ".x " + name->at(i);
		std::cout << cmd.c_str() << std::endl;
		gROOT->ProcessLine(cmd.c_str());
	}
}
