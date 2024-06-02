#include "TFile.h"
#include "TCanvas.h"
#include "TROOT.h"

#include "myntuple.C"

#include <vector>
#include <iostream>
#include <string>
#include <dirent.h>
#include <sys/types.h>

#define Names std::vector<std::string>

//Find All runjobs_n.C file
inline bool StringConstrain(const char *input)
{
	bool result = true;
	const char * runjobs = "runjobs_";
	for(unsigned int i = 0; i < 8; i++)
	{
		if(*(input + i) != *(runjobs + i))
		{
			result = false;
		}
	}
	unsigned int end = 0;
	for(unsigned int i = 8; true; i++)
	{
		if(*(input + i) == 0)
		{
			end = i - 2;
			if(*(input + i - 1) != 'C' || *(input + i - 2) != '.')
			{
				result = false;	
			}
			break;
		}	
	}
	const char *numbers = "0123456789";
	bool in = false;
	for(unsigned int i = 8; i < end; i++)
	{
		for(unsigned int j = 0; j < 10; j++)
		{
			if(*(input + i) == *(numbers + j))
			{	
				in = true;
				break;
			}
		}
		if(!in)
		{
			result = false;
			break;	
		}else
		{
			in = false;
		}		
	}
	return result;
}
Names *FindFile(const char *dirName)
{
        DIR *dir = opendir(dirName);
        if (dir)
        {
                dirent *temp = nullptr;
                temp = readdir(dir);
                Names *result = new Names();
                do
                {
                        if (temp->d_type == DT_REG && StringConstrain(temp->d_name))
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
	Names * name = FindFile("./");
	unsigned int num = name->size();
	Sort(name);
	std::string cmd;
	for(unsigned int i = 0; i < 1; i++)
	{	
		std::cout<<"I am processing "<<name->at(i)<<std::endl;
		std::cout<<"This is "<<i + 1<<" out of "<<num<<std::endl;
		cmd = ".x " + name->at(i);
		std::cout<<cmd.c_str()<<std::endl;
		gROOT->ProcessLine(cmd.c_str());
	}
}
