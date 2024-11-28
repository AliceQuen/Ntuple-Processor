// This is script for loading hists in condorOutput
// and connect them

#include "TH1F.h"
#include "TFile.h"
#include "TCanvas.h"
#include "TList.h"
#include <vector>
#include <iostream>
#include <string>
#include <dirent.h>
#include <sys/types.h>
#define Names std::vector<std::string>
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
			if (temp->d_type == DT_REG)
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
int DrawDistribution()
{
	std::string dir = "DATA_DIR";
	Names *names = FindFile(dir.c_str());
	if (names)
	{
		unsigned int num = names->size();
		std::string hist = dir + "/other/Hist.root"
		TFile *out = new TFile(hist.c_str(), "RECREATE");

		std::vector<TH1F *> sig = std::vector<TH1F *>();
		std::vector<TH1F *> bkg = std::vector<TH1F *>();
		std::vector<std::string> histName = std::vector<string>();

		// mass hist for Psi2S(X3872), over all target in searching
		TH1F *h_Psi2S_mass = new TH1F("h_Psi2S_mass", "h_Psi2S_mass", 500, 3.2, 4.2);
		// HIST_DEFINE
		// choose what value of mu pi pt dR cut,draw hist to see:
		// HIST_TO_VECTOR
		unsigned int num1 = sig->siez();
		for (unsigned int i = 0; i < num; i++)
		{
			TFile *in = new TFile((dir + "/" + names->at(i)).c_str(), "READ");
			std::string temp;
			// mass hist for Psi2S(X3872), over all target
			h_Psi2S_mass->Add(dynamic_cast<TH1 *>(in->Get("h_Psi2S_mass")));
			for (unsigned int j = 0; j < num1; j++)
			{	
				temp = "h_sig_" + histName.at(j);
				sig.at(j)->Add(dynamic_cast<TH1 *>(in->Get(temp.c_str())));
				temp = "h_bkg_" + histName.at(j);
				bkg.at(j)->Add(dynamic_cast<TH1 *>(in->Get(temp.c_str())));
			}	
			in->Close();
			delete in;
			std::cout << "I am doing " << i << " th file out of " << num << " files!" << std::endl;
		}

		unsigned int num1 = sig.size();
		//10, 25, 50, 100
		//50, 20, 10, 5
		unsigned int rebin[4] = {10, 25, 50, 100};
		TCanvas *c1 = new TCanvas("C1", "C1");

		TH1F *sigTemp;
		TH1F *bkgTemp;
		std::string sigName = "sigTemp_";
		std::string bkgName = "bkgTemp_";
		std::string resultName;
		double bkgMax = 0;
		double bkgMin = 0;
		double sigMax = 0;
		double sigMin = 0;
		double rangeMax = 0;
		double rangeMin = 0;
		for (unsigned int i = 0; i < 4; i++)
		{
			for (unsigned int j = 0; j < num1; j++)
			{
				c1->cd();
				sigName = sigName + std::to_string(j);
				bkgName = bkgName + std::to_string(j);
				sigTemp = (TH1F *)(sig.at(j)->Clone(sigName.c_str()));
				bkgTemp = (TH1F *)(bkg.at(j)->Clone(bkgName.c_str()));
				sigName = "sigTemp_";
				bkgName = "bkgTemp_";
				sigTemp->Rebin(rebin[i]);
				bkgTemp->Rebin(rebin[i]);
				// Rescale bkg accroding to bkg:sig
				// RESCALE 

				sigTemp->Add(sigTemp, bkgTemp, 1, -1);
	
				sigTemp->Scale(1 / sigTemp->Integral());
				bkgTemp->Scale(1 / bkgTemp->Integral());
	
				bkgMax = bkgTemp->GetMaximum();
				bkgMin = bkgTemp->GetMinimum();
				sigMax = sigTemp->GetMaximum();
				sigMin = sigTemp->GetMinimum();
	
				if (sigMax >= bkgMax)
				{
					rangeMax = sigMax;
				}
				else
				{
					rangeMax = bkgMax;
				}
	
				if (sigMin <= bkgMin)
				{
					rangeMin = sigMin;
				}
				else
				{
					rangeMin = bkgMin;
				}
	
				sigTemp->SetLineColor(kRed);
				bkgTemp->SetLineColor(kBlue);
				sigTemp->GetYaxis()->SetRangeUser(rangeMin, rangeMax + 0.005);
				bkgTemp->GetYaxis()->SetRangeUser(rangeMin, rangeMax + 0.005);
				sigTemp->Draw("Hist");
				bkgTemp->Draw("Same Hist");
				c1->Update();
				resultName = dir + "/ohter/" + histName.at(j) + "_" + std::to_string(500 / rebin[i]) + ".png";
				c1->SaveAs(resultName.c_str());
			}
		}
		c1->Close();
		out->Write();
	}
	return 0;
}
