#define myntuple_cxx
#include "myntuple.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

using namespace std;
void myntuple::Loop(TString outputname)
{
//   In a ROOT session, you can do:
//      root> .L myntuple.C
//      root> myntuple t
//      root> t.GetEntry(12); // Fill t data members with entry number 12
//      root> t.Show();       // Show values of entry 12
//      root> t.Show(16);     // Read and show values of entry 16
//      root> t.Loop();       // Loop on all entries
//

//     This is the loop skeleton where:
//    jentry is the global entry number in the chain
//    ientry is the entry number in the current Tree
//  Note that the argument to GetEntry must be:
//    jentry for TChain::GetEntry
//    ientry for TTree::GetEntry and TBranch::GetEntry
//
//       To read only selected branches, Insert statements like:
// METHOD1:
//    fChain->SetBranchStatus("*",0);  // disable all branches
//    fChain->SetBranchStatus("branchname",1);  // activate branchname
// METHOD2: replace line
//    fChain->GetEntry(jentry);       //read all branches
//by  b_branchname->GetEntry(ientry); //read only this branch
   if (fChain == 0) return;
    
   // MASS from PDG 2020
   const double PION_MASS = 0.139;        // GeV
   const double MUON_MASS = 0.1056583745; // GeV
   const double JPSI_MASS = 3.096900;     // GeV
   const double PSI2S_MASS = 3.68610;     // GeV
   const double MASSERRSCALE = 1.16;
   const double MASSNUMSIGMA = 3;

   const bool doMC = false;
   // OUT_STREAM
   TFile *myhbk = new TFile(outputname + ".root", "Recreate");
   TString myOutName = outputname + ".txt";
   ofstream myos(myOutName);
   // TFile for Distribution and ofstream for Cut Optimization
   // SIG_BKG_VECTOR
   std::vector<TH1F *> sig = std::vector<TH1F *>();
   std::vector<TH1F *> bkg = std::vector<TH1F *>();
   
   // Mass hist for Psi2S(X3872), over all target in searching
   // HIST_PSI2S
   TH1F *h_Psi2S_mass = new TH1F("h_Psi2S_mass", "h_Psi2S_mass", 500, 3.2, 4.2);

   // Choosen variables to see:(pt, dR ...), sig and bkg two versions
   // HIST_DEFINE
   
   // HIST_TO_VECTOR
   // sig.push_back(...);
   // bkg.push_back(...);

   // MAX_MIN_VARIABLES
   std::vector<double *> vmax = std::vector<double *>;
   std::vector<double *> vmin = std::vector<double *>;
   // double max_...;
   // double min_...;
   // MAX_MIN_TO_VECTOR
   // vmax.push_back(&...);
   // vmin.push_back(&...);
   // RANGE_TREE
   TTree *RangeTree = new TTree("RangeTree", "RangeTree");
   // RangeTree->Branch("max...", &max...);
   // RangeTree->Branch("min...", &min...);
   
   Long64_t nentries = fChain->GetEntriesFast();

   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      if (jentry % 100 == 0)
      {
	cout << "I am running " << jentry << "out of " <<nentries << endl;
      }
      // if (Cut(ientry) < 0) continue;
      for (long unsigned int j = 0; j < X_JPiPi_mass->size(); j++)
      {
	TLorentzVector Xp4;
      	TLorentzVector Psi2Sp4, Jpsi1p4, Jpsi2p4, Pi1p4, Pi2p4;
      	Psi2Sp4.SetXYZM((*X_JPiPi_px)[j], (*X_JPiPi_py)[j], (*X_JPiPi_pz)[j], (*X_JPiPi_mass)[j]);
      	Jpsi1p4.SetXYZM((*X_Jpsi1_px)[j], (*X_Jpsi1py)[j], (*X_Jpsi1pz)[j], (*X_Jpsi1mass)[j]);
      	Jpsi2p4.SetXYZM((*X_Jpsi2_px)[j], (*X_Jpsi2py)[j], (*X_Jpsi2pz)[j], (*X_Jpsi2mass)[j]);
      	Pi1p4.SetXYZM((*X_JPiPi_Pi1_px)[j], (*X_JPiPi_Pi1py)[j], (*X_JPiPi_Pi1pz)[j], PION_MASS);
      	Pi2p4.SetXYZM((*X_JPiPi_Pi2_px)[j], (*X_JPiPi_Pi2py)[j], (*X_JPiPi_Pi2pz)[j], PION_MASS);

      	TLorentzVector raw_mu1P4;
      	float raw_muPx = (*muPx)[(*X_mu1Idx)[j]];
      	float raw_muPy = (*muPy)[(*X_mu1Idx)[j]];
      	float raw_muPz = (*muPz)[(*X_mu1Idx)[j]];
      	raw_mu1P4.SetXYZM(raw_muPx, raw_muPy, raw_muPz, MUON_MASS);
      	TLorentzVector raw_mu2P4;
      	raw_muPx = (*muPx)[(*X_mu2Idx)[j]];
      	raw_muPy = (*muPy)[(*X_mu2Idx)[j]];
      	raw_muPz = (*muPz)[(*X_mu2Idx)[j]];
      	raw_mu2P4.SetXYZM(raw_muPx, raw_muPy, raw_muPz, MUON_MASS);
      	TLorentzVector raw_mu3P4;
      	raw_muPx = (*muPx)[(*X_mu3Idx)[j]];
      	raw_muPy = (*muPy)[(*X_mu3Idx)[j]];
      	raw_muPz = (*muPz)[(*X_mu3Idx)[j]];
      	raw_mu3P4.SetXYZM(raw_muPx, raw_muPy, raw_muPz, MUON_MASS);
      	TLorentzVector raw_mu4P4;
      	raw_muPx = (*muPx)[(*X_mu4Idx)[j]];
      	raw_muPy = (*muPy)[(*X_mu4Idx)[j]];
      	raw_muPz = (*muPz)[(*X_mu4Idx)[j]];
      	raw_mu4P4.SetXYZM(raw_muPx, raw_muPy, raw_muPz, MUON_MASS);
	
      	int myNumPatSoftMuon = (*muIsPatSoftMuon)[(*X_mu1Idx)[j]] + (*muIsPatSoftMuon)[(*X_mu2Idx)[j]] + (*muIsPatSoftMuon)[(*X_mu3Idx)[j]] + (*muIsPatSoftMuon)[(*X_mu4Idx)[j]];
      	int myNumPatLooseMuon = (*muIsPatLooseMuon)[(*X_mu1Idx)[j]] + (*muIsPatLooseMuon)[(*X_mu2Idx)[j]] + (*muIsPatLooseMuon)[(*X_mu3Idx)[j]] + (*muIsPatLooseMuon)[(*X_mu4Idx)[j]];
      	int myNumPatMediumMuon = (*muIsPatMediumMuon)[(*X_mu1Idx)[j]] + (*muIsPatMediumMuon)[(*X_mu2Idx)[j]] + (*muIsPatMediumMuon)[(*X_mu3Idx)[j]] + (*muIsPatMediumMuon)[(*X_mu4Idx)[j]];
      	int myNumPatTightMuon = (*muIsPatTightMuon)[(*X_mu1Idx)[j]] + (*muIsPatTightMuon)[(*X_mu2Idx)[j]] + (*muIsPatTightMuon)[(*X_mu3Idx)[j]] + (*muIsPatTightMuon)[(*X_mu4Idx)[j]];
      if (raw_mu1P4.Pt() > 2.0 && raw_mu2P4.Pt() > 2.0 && raw_mu3P4.Pt() > 2.0 && raw_mu4P4.Pt() > 2.0
	&& ((*X_Jpsi1_VtxProb)[j] >= 0.005 || (*X_Jpsi2_VtxProb)[j] >= 0.005)
	&& fabs(raw_mu1P4.Eta()) < 2.4 && fabs(raw_mu2P4.Eta()) < 2.4 && fabs(raw_mu3P4.Eta()) < 2.4 && fabs(raw_mu4P4.Eta()) < 2.4
	&& (*X_JPiPi_VtxProb)[j] > 0.1 
	&& Pi1p4.Pt() > 0.5 && Pi2p4.Pt() > 0.5
	&& Jpsi1p4.M() < 3.25 && Jpsi1p4.M() > 2.95 && fabs(Jpsi1p4.M() - 3.0969) <= 3 * MASSERRSCALE * (*X_Jpsi1massErr)[j]
	&& Psi2Sp4.DeltaR(Pi1p4) < 0.5 && Psi2Sp4.DeltaR(Pi2p4) < 0.5 && Psi2Sp4.Pt() > 5   
	&& myNumPatLooseMuon == 4 && (*X_VtxProb)[j] >= 0.001 
      )
	{
		double Jpsi_mass = (Jpsi1p4 + Pi1p4 + Pi2p4).M() - Jpsi1p4.M() + 3.0969;
		h_Psi2S_mass->Fill(Jpsi_mass);
// Fill and Process histgrams here
		// PROCESS_DISTRIBUTION
		if (1) // Signal Cut
		{
			// FILL_SIG
		}else (1) // Background Cut
		{
			// FILL_BKG
		}
		// PROCESS_CUTOPT
		if (1& /* cuts */)
		{
		//	myos << "variables" << endl;
		}
	}
      } 
   }
   // Code for filling range tree
   // RANGE_FILL
   std::vector<double> mmax = std::vector<double>(2);
   std::vector<double> mmin = std::vector<double>(2);
   unsigned int nn = vmax.size();

   for(unsigned int i = 0; i < nn; i++)
   {
	sig.at(i)->BufferEmpty();
     	bkg.at(i)->BufferEmpty();
     	mmax.at(0) = sig.at(i)->GetXaxis()->GetXmax();
     	mmax.at(1) = bkg.at(i)->GetXaxis()->GetXmax();
     	mmin.at(0) = sig.at(i)->GetXaxis()->GetXmin();
     	mmin.at(1) = bkg.at(i)->GetXaxis()->GetXmin();
     	*(vmax.at(i)) = FindMax(&mmax);
     	*(vmin.at(i)) = FindMin(&mmin);
   }
   RangeTree->Fill();
   RangeTree->Write();
   // Fill output files, check which should be used
   // FILE_CLOSE
   myhbk->Write();
   myos.close();
}
