//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed May 22 02:54:05 2024 by ROOT version 6.26/11
// from TTree X_data/X(3872) Data
// found on file: mymultilep_1.root
//////////////////////////////////////////////////////////

#ifndef myntuple_h
#define myntuple_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"

class myntuple {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   vector<unsigned int> *TrigRes;
   vector<string>  *TrigNames;
   vector<string>  *MatchTriggerNames;
   vector<unsigned int> *L1TrigRes;
   UInt_t          evtNum;
   UInt_t          runNum;
   UInt_t          lumiNum;
   UInt_t          nGoodPrimVtx;
   Float16_t       priVtxX;
   Float16_t       priVtxY;
   Float16_t       priVtxZ;
   Float16_t       priVtxXE;
   Float16_t       priVtxYE;
   Float16_t       priVtxZE;
   Float16_t       priVtxChiNorm;
   Float16_t       priVtxChi;
   Float16_t       priVtxCL;
   vector<float>   *PriVtxXCorrX;
   vector<float>   *PriVtxXCorrY;
   vector<float>   *PriVtxXCorrZ;
   vector<double>  *PriVtxXCorrEX;
   vector<double>  *PriVtxXCorrEY;
   vector<double>  *PriVtxXCorrEZ;
   vector<float>   *PriVtxXCorrC2;
   vector<float>   *PriVtxXCorrCL;
   UInt_t          nMu;
   vector<float>   *muPx;
   vector<float>   *muPy;
   vector<float>   *muPz;
   vector<float>   *muD0;
   vector<float>   *muD0E;
   vector<float>   *muDz;
   vector<float>   *muChi2;
   vector<float>   *muGlChi2;
   vector<float>   *mufHits;
   vector<bool>    *muFirstBarrel;
   vector<bool>    *muFirstEndCap;
   vector<float>   *muDzVtx;
   vector<float>   *muDxyVtx;
   vector<int>     *muNDF;
   vector<int>     *muGlNDF;
   vector<int>     *muPhits;
   vector<int>     *muShits;
   vector<int>     *muGlMuHits;
   vector<int>     *muType;
   vector<int>     *muQual;
   vector<int>     *muTrack;
   vector<float>   *muCharge;
   vector<float>   *muIsoratio;
   vector<int>     *munMatchedSeg;
   vector<int>     *muIsGoodSoftMuonNewIlseMod;
   vector<int>     *muIsGoodSoftMuonNewIlse;
   vector<int>     *muIsGoodLooseMuonNew;
   vector<int>     *muIsGoodLooseMuon;
   vector<int>     *muIsGoodTightMuon;
   vector<int>     *muIsPatLooseMuon;
   vector<int>     *muIsPatTightMuon;
   vector<int>     *muIsPatSoftMuon;
   vector<int>     *muIsPatMediumMuon;
   vector<int>     *muIsJpsiTrigMatch;
   vector<int>     *muIsUpsTrigMatch;
   vector<float>   *muMVAMuonID;
   vector<float>   *musegmentCompatibility;
   vector<float>   *mupulldXdZ_pos_noArb;
   vector<float>   *mupulldYdZ_pos_noArb;
   vector<float>   *mupulldXdZ_pos_ArbDef;
   vector<float>   *mupulldYdZ_pos_ArbDef;
   vector<float>   *mupulldXdZ_pos_ArbST;
   vector<float>   *mupulldYdZ_pos_ArbST;
   vector<float>   *mupulldXdZ_pos_noArb_any;
   vector<float>   *mupulldYdZ_pos_noArb_any;
   vector<int>     *muUpsVrtxMatch;
   vector<int>     *muL3TriggerMatch;
   vector<float>   *X_mu1Idx;
   vector<float>   *X_mu2Idx;
   vector<float>   *X_mu3Idx;
   vector<float>   *X_mu4Idx;
   vector<float>   *X_mass;
   vector<float>   *X_VtxProb;
   vector<float>   *X_Chi2;
   vector<float>   *X_ndof;
   vector<float>   *X_px;
   vector<float>   *X_py;
   vector<float>   *X_pz;
   vector<float>   *X_massErr;
   vector<float>   *X_JPiPi_mass;
   vector<float>   *X_JPiPi_VtxProb;
   vector<float>   *X_JPiPi_Chi2;
   vector<float>   *X_JPiPi_ndof;
   vector<float>   *X_JPiPi_px;
   vector<float>   *X_JPiPi_py;
   vector<float>   *X_JPiPi_pz;
   vector<float>   *X_JPiPi_massErr;
   vector<float>   *X_Jpsi1_mass;
   vector<float>   *X_Jpsi1_VtxProb;
   vector<float>   *X_Jpsi1_Chi2;
   vector<float>   *X_Jpsi1_ndof;
   vector<float>   *X_Jpsi1_px;
   vector<float>   *X_Jpsi1_py;
   vector<float>   *X_Jpsi1_pz;
   vector<float>   *X_Jpsi1_massErr;
   vector<float>   *X_Jpsi2_mass;
   vector<float>   *X_Jpsi2_VtxProb;
   vector<float>   *X_Jpsi2_Chi2;
   vector<float>   *X_Jpsi2_ndof;
   vector<float>   *X_Jpsi2_px;
   vector<float>   *X_Jpsi2_py;
   vector<float>   *X_Jpsi2_pz;
   vector<float>   *X_Jpsi2_massErr;
   vector<float>   *X_JPiPi_Pi1Idx;
   vector<float>   *X_JPiPi_Pi2Idx;
   vector<float>   *X_JPiPi_Pi1px;
   vector<float>   *X_JPiPi_Pi1py;
   vector<float>   *X_JPiPi_Pi1pz;
   vector<float>   *X_JPiPi_Pi2px;
   vector<float>   *X_JPiPi_Pi2py;
   vector<float>   *X_JPiPi_Pi2pz;
   vector<float>   *cs_X_Jpsi1_mass;
   vector<float>   *cs_X_Jpsi1_VtxProb;
   vector<float>   *cs_X_Jpsi1_Chi2;
   vector<float>   *cs_X_Jpsi1_ndof;
   vector<float>   *cs_X_Jpsi1_px;
   vector<float>   *cs_X_Jpsi1_py;
   vector<float>   *cs_X_Jpsi1_pz;
   vector<float>   *cs_X_Jpsi1_massErr;
   vector<float>   *cs_X_Jpsi2_mass;
   vector<float>   *cs_X_Jpsi2_VtxProb;
   vector<float>   *cs_X_Jpsi2_Chi2;
   vector<float>   *cs_X_Jpsi2_ndof;
   vector<float>   *cs_X_Jpsi2_px;
   vector<float>   *cs_X_Jpsi2_py;
   vector<float>   *cs_X_Jpsi2_pz;
   vector<float>   *cs_X_Jpsi2_massErr;
   vector<float>   *cs_X_JPiPi_mass;
   vector<float>   *cs_X_JPiPi_VtxProb;
   vector<float>   *cs_X_JPiPi_Chi2;
   vector<float>   *cs_X_JPiPi_ndof;
   vector<float>   *cs_X_JPiPi_px ;
   vector<float>   *cs_X_JPiPi_py;
   vector<float>   *cs_X_JPiPi_pz;
   vector<float>   *cs_X_JPiPi_massErr;
   vector<float>   *cs_X_mass_Psi2S;
   vector<float>   *cs_X_VtxProb_Psi2S;
   vector<float>   *cs_X_Chi2_Psi2S;
   vector<float>   *cs_X_ndof_Psi2S;
   vector<float>   *cs_X_px_Psi2S;
   vector<float>   *cs_X_py_Psi2S;
   vector<float>   *cs_X_pz_Psi2S;
   vector<float>   *cs_X_massErr_Psi2S;
   vector<float>   *cs_X_JPiPi_mass_Psi2S;
   vector<float>   *cs_X_JPiPi_VtxProb_Psi2S;
   vector<float>   *cs_X_JPiPi_Chi2_Psi2S;
   vector<float>   *cs_X_JPiPi_ndof_Psi2S;
   vector<float>   *cs_X_JPiPi_px_Psi2S;
   vector<float>   *cs_X_JPiPi_py_Psi2S;
   vector<float>   *cs_X_JPiPi_pz_Psi2S;
   vector<float>   *cs_X_JPiPi_massErr_Psi2S;
   vector<float>   *cs_X_mass_X3872;
   vector<float>   *cs_X_VtxProb_X3872;
   vector<float>   *cs_X_Chi2_X3872;
   vector<float>   *cs_X_ndof_X3872;
   vector<float>   *cs_X_px_X3872;
   vector<float>   *cs_X_py_X3872;
   vector<float>   *cs_X_pz_X3872;
   vector<float>   *cs_X_massErr_X3872;
   vector<float>   *cs_X_JPiPi_mass_X3872;
   vector<float>   *cs_X_JPiPi_VtxProb_X3872;
   vector<float>   *cs_X_JPiPi_Chi2_X3872;
   vector<float>   *cs_X_JPiPi_ndof_X3872;
   vector<float>   *cs_X_JPiPi_px_X3872;
   vector<float>   *cs_X_JPiPi_py_X3872;
   vector<float>   *cs_X_JPiPi_pz_X3872;
   vector<float>   *cs_X_JPiPi_massErr_X3872;

   // List of branches
   TBranch        *b_TrigRes;   //!
   TBranch        *b_TrigNames;   //!
   TBranch        *b_MatchTriggerNames;   //!
   TBranch        *b_L1TrigRes;   //!
   TBranch        *b_evtNum;   //!
   TBranch        *b_runNum;   //!
   TBranch        *b_lumiNum;   //!
   TBranch        *b_nGoodPrimVtx;   //!
   TBranch        *b_f;   //!
   TBranch        *b_f;   //!
   TBranch        *b_f;   //!
   TBranch        *b_f;   //!
   TBranch        *b_f;   //!
   TBranch        *b_f;   //!
   TBranch        *b_f;   //!
   TBranch        *b_f;   //!
   TBranch        *b_f;   //!
   TBranch        *b_PriVtxXCorrX;   //!
   TBranch        *b_PriVtxXCorrY;   //!
   TBranch        *b_PriVtxXCorrZ;   //!
   TBranch        *b_PriVtxXCorrEX;   //!
   TBranch        *b_PriVtxXCorrEY;   //!
   TBranch        *b_PriVtxXCorrEZ;   //!
   TBranch        *b_PriVtxXCorrC2;   //!
   TBranch        *b_PriVtxXCorrCL;   //!
   TBranch        *b_nMu;   //!
   TBranch        *b_muPx;   //!
   TBranch        *b_muPy;   //!
   TBranch        *b_muPz;   //!
   TBranch        *b_muD0;   //!
   TBranch        *b_muD0E;   //!
   TBranch        *b_muDz;   //!
   TBranch        *b_muChi2;   //!
   TBranch        *b_muGlChi2;   //!
   TBranch        *b_mufHits;   //!
   TBranch        *b_muFirstBarrel;   //!
   TBranch        *b_muFirstEndCap;   //!
   TBranch        *b_muDzVtx;   //!
   TBranch        *b_muDxyVtx;   //!
   TBranch        *b_muNDF;   //!
   TBranch        *b_muGlNDF;   //!
   TBranch        *b_muPhits;   //!
   TBranch        *b_muShits;   //!
   TBranch        *b_muGlMuHits;   //!
   TBranch        *b_muType;   //!
   TBranch        *b_muQual;   //!
   TBranch        *b_muTrack;   //!
   TBranch        *b_muCharge;   //!
   TBranch        *b_muIsoratio;   //!
   TBranch        *b_munMatchedSeg;   //!
   TBranch        *b_muIsGoodSoftMuonNewIlseMod;   //!
   TBranch        *b_muIsGoodSoftMuonNewIlse;   //!
   TBranch        *b_muIsGoodLooseMuonNew;   //!
   TBranch        *b_muIsGoodLooseMuon;   //!
   TBranch        *b_muIsGoodTightMuon;   //!
   TBranch        *b_muIsPatLooseMuon;   //!
   TBranch        *b_muIsPatTightMuon;   //!
   TBranch        *b_muIsPatSoftMuon;   //!
   TBranch        *b_muIsPatMediumMuon;   //!
   TBranch        *b_muIsJpsiTrigMatch;   //!
   TBranch        *b_muIsUpsTrigMatch;   //!
   TBranch        *b_muMVAMuonID;   //!
   TBranch        *b_musegmentCompatibility;   //!
   TBranch        *b_mupulldXdZ_pos_noArb;   //!
   TBranch        *b_mupulldYdZ_pos_noArb;   //!
   TBranch        *b_mupulldXdZ_pos_ArbDef;   //!
   TBranch        *b_mupulldYdZ_pos_ArbDef;   //!
   TBranch        *b_mupulldXdZ_pos_ArbST;   //!
   TBranch        *b_mupulldYdZ_pos_ArbST;   //!
   TBranch        *b_mupulldXdZ_pos_noArb_any;   //!
   TBranch        *b_mupulldYdZ_pos_noArb_any;   //!
   TBranch        *b_muUpsVrtxMatch;   //!
   TBranch        *b_muL3TriggerMatch;   //!
   TBranch        *b_X_mu1Idx;   //!
   TBranch        *b_X_mu2Idx;   //!
   TBranch        *b_X_mu3Idx;   //!
   TBranch        *b_X_mu4Idx;   //!
   TBranch        *b_X_mass;   //!
   TBranch        *b_X_VtxProb;   //!
   TBranch        *b_X_Chi2;   //!
   TBranch        *b_X_ndof;   //!
   TBranch        *b_X_px;   //!
   TBranch        *b_X_py;   //!
   TBranch        *b_X_pz;   //!
   TBranch        *b_X_massErr;   //!
   TBranch        *b_X_JPiPi_mass;   //!
   TBranch        *b_X_JPiPi_VtxProb;   //!
   TBranch        *b_X_JPiPi_Chi2;   //!
   TBranch        *b_X_JPiPi_ndof;   //!
   TBranch        *b_X_JPiPi_px;   //!
   TBranch        *b_X_JPiPi_py;   //!
   TBranch        *b_X_JPiPi_pz;   //!
   TBranch        *b_X_JPiPi_massErr;   //!
   TBranch        *b_X_Jpsi1_mass;   //!
   TBranch        *b_X_Jpsi1_VtxProb;   //!
   TBranch        *b_X_Jpsi1_Chi2;   //!
   TBranch        *b_X_Jpsi1_ndof;   //!
   TBranch        *b_X_Jpsi1_px;   //!
   TBranch        *b_X_Jpsi1_py;   //!
   TBranch        *b_X_Jpsi1_pz;   //!
   TBranch        *b_X_Jpsi1_massErr;   //!
   TBranch        *b_X_Jpsi2_mass;   //!
   TBranch        *b_X_Jpsi2_VtxProb;   //!
   TBranch        *b_X_Jpsi2_Chi2;   //!
   TBranch        *b_X_Jpsi2_ndof;   //!
   TBranch        *b_X_Jpsi2_px;   //!
   TBranch        *b_X_Jpsi2_py;   //!
   TBranch        *b_X_Jpsi2_pz;   //!
   TBranch        *b_X_Jpsi2_massErr;   //!
   TBranch        *b_X_JPiPi_Pi1Idx;   //!
   TBranch        *b_X_JPiPi_Pi2Idx;   //!
   TBranch        *b_X_JPiPi_Pi1px;   //!
   TBranch        *b_X_JPiPi_Pi1py;   //!
   TBranch        *b_X_JPiPi_Pi1pz;   //!
   TBranch        *b_X_JPiPi_Pi2px;   //!
   TBranch        *b_X_JPiPi_Pi2py;   //!
   TBranch        *b_X_JPiPi_Pi2pz;   //!
   TBranch        *b_cs_X_Jpsi1_mass;   //!
   TBranch        *b_cs_X_Jpsi1_VtxProb;   //!
   TBranch        *b_cs_X_Jpsi1_Chi2;   //!
   TBranch        *b_cs_X_Jpsi1_ndof;   //!
   TBranch        *b_cs_X_Jpsi1_px;   //!
   TBranch        *b_cs_X_Jpsi1_py;   //!
   TBranch        *b_cs_X_Jpsi1_pz;   //!
   TBranch        *b_cs_X_Jpsi1_massErr;   //!
   TBranch        *b_cs_X_Jpsi2_mass;   //!
   TBranch        *b_cs_X_Jpsi2_VtxProb;   //!
   TBranch        *b_cs_X_Jpsi2_Chi2;   //!
   TBranch        *b_cs_X_Jpsi2_ndof;   //!
   TBranch        *b_cs_X_Jpsi2_px;   //!
   TBranch        *b_cs_X_Jpsi2_py;   //!
   TBranch        *b_cs_X_Jpsi2_pz;   //!
   TBranch        *b_cs_X_Jpsi2_massErr;   //!
   TBranch        *b_cs_X_JPiPi_mass;   //!
   TBranch        *b_cs_X_JPiPi_VtxProb;   //!
   TBranch        *b_cs_X_JPiPi_Chi2;   //!
   TBranch        *b_cs_X_JPiPi_ndof;   //!
   TBranch        *b_cs_X_JPiPi_px ;   //!
   TBranch        *b_cs_X_JPiPi_py;   //!
   TBranch        *b_cs_X_JPiPi_pz;   //!
   TBranch        *b_cs_X_JPiPi_massErr;   //!
   TBranch        *b_cs_X_mass_Psi2S;   //!
   TBranch        *b_cs_X_VtxProb_Psi2S;   //!
   TBranch        *b_cs_X_Chi2_Psi2S;   //!
   TBranch        *b_cs_X_ndof_Psi2S;   //!
   TBranch        *b_cs_X_px_Psi2S;   //!
   TBranch        *b_cs_X_py_Psi2S;   //!
   TBranch        *b_cs_X_pz_Psi2S;   //!
   TBranch        *b_cs_X_massErr_Psi2S;   //!
   TBranch        *b_cs_X_JPiPi_mass_Psi2S;   //!
   TBranch        *b_cs_X_JPiPi_VtxProb_Psi2S;   //!
   TBranch        *b_cs_X_JPiPi_Chi2_Psi2S;   //!
   TBranch        *b_cs_X_JPiPi_ndof_Psi2S;   //!
   TBranch        *b_cs_X_JPiPi_px_Psi2S;   //!
   TBranch        *b_cs_X_JPiPi_py_Psi2S;   //!
   TBranch        *b_cs_X_JPiPi_pz_Psi2S;   //!
   TBranch        *b_cs_X_JPiPi_massErr_Psi2S;   //!
   TBranch        *b_cs_X_mass_X3872;   //!
   TBranch        *b_cs_X_VtxProb_X3872;   //!
   TBranch        *b_cs_X_Chi2_X3872;   //!
   TBranch        *b_cs_X_ndof_X3872;   //!
   TBranch        *b_cs_X_px_X3872;   //!
   TBranch        *b_cs_X_py_X3872;   //!
   TBranch        *b_cs_X_pz_X3872;   //!
   TBranch        *b_cs_X_massErr_X3872;   //!
   TBranch        *b_cs_X_JPiPi_mass_X3872;   //!
   TBranch        *b_cs_X_JPiPi_VtxProb_X3872;   //!
   TBranch        *b_cs_X_JPiPi_Chi2_X3872;   //!
   TBranch        *b_cs_X_JPiPi_ndof_X3872;   //!
   TBranch        *b_cs_X_JPiPi_px_X3872;   //!
   TBranch        *b_cs_X_JPiPi_py_X3872;   //!
   TBranch        *b_cs_X_JPiPi_pz_X3872;   //!
   TBranch        *b_cs_X_JPiPi_massErr_X3872;   //!

   myntuple(TTree *tree=0);
   virtual ~myntuple();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop(TString outputname);
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef myntuple_cxx
myntuple::myntuple(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("mymultilep_1.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("mymultilep_1.root");
      }
      TDirectory * dir = (TDirectory*)f->Get("mymultilep_1.root:/mkcands");
      dir->GetObject("X_data",tree);

   }
   Init(tree);
}

myntuple::~myntuple()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t myntuple::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t myntuple::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void myntuple::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   TrigRes = 0;
   TrigNames = 0;
   MatchTriggerNames = 0;
   L1TrigRes = 0;
   PriVtxXCorrX = 0;
   PriVtxXCorrY = 0;
   PriVtxXCorrZ = 0;
   PriVtxXCorrEX = 0;
   PriVtxXCorrEY = 0;
   PriVtxXCorrEZ = 0;
   PriVtxXCorrC2 = 0;
   PriVtxXCorrCL = 0;
   muPx = 0;
   muPy = 0;
   muPz = 0;
   muD0 = 0;
   muD0E = 0;
   muDz = 0;
   muChi2 = 0;
   muGlChi2 = 0;
   mufHits = 0;
   muFirstBarrel = 0;
   muFirstEndCap = 0;
   muDzVtx = 0;
   muDxyVtx = 0;
   muNDF = 0;
   muGlNDF = 0;
   muPhits = 0;
   muShits = 0;
   muGlMuHits = 0;
   muType = 0;
   muQual = 0;
   muTrack = 0;
   muCharge = 0;
   muIsoratio = 0;
   munMatchedSeg = 0;
   muIsGoodSoftMuonNewIlseMod = 0;
   muIsGoodSoftMuonNewIlse = 0;
   muIsGoodLooseMuonNew = 0;
   muIsGoodLooseMuon = 0;
   muIsGoodTightMuon = 0;
   muIsPatLooseMuon = 0;
   muIsPatTightMuon = 0;
   muIsPatSoftMuon = 0;
   muIsPatMediumMuon = 0;
   muIsJpsiTrigMatch = 0;
   muIsUpsTrigMatch = 0;
   muMVAMuonID = 0;
   musegmentCompatibility = 0;
   mupulldXdZ_pos_noArb = 0;
   mupulldYdZ_pos_noArb = 0;
   mupulldXdZ_pos_ArbDef = 0;
   mupulldYdZ_pos_ArbDef = 0;
   mupulldXdZ_pos_ArbST = 0;
   mupulldYdZ_pos_ArbST = 0;
   mupulldXdZ_pos_noArb_any = 0;
   mupulldYdZ_pos_noArb_any = 0;
   muUpsVrtxMatch = 0;
   muL3TriggerMatch = 0;
   X_mu1Idx = 0;
   X_mu2Idx = 0;
   X_mu3Idx = 0;
   X_mu4Idx = 0;
   X_mass = 0;
   X_VtxProb = 0;
   X_Chi2 = 0;
   X_ndof = 0;
   X_px = 0;
   X_py = 0;
   X_pz = 0;
   X_massErr = 0;
   X_JPiPi_mass = 0;
   X_JPiPi_VtxProb = 0;
   X_JPiPi_Chi2 = 0;
   X_JPiPi_ndof = 0;
   X_JPiPi_px = 0;
   X_JPiPi_py = 0;
   X_JPiPi_pz = 0;
   X_JPiPi_massErr = 0;
   X_Jpsi1_mass = 0;
   X_Jpsi1_VtxProb = 0;
   X_Jpsi1_Chi2 = 0;
   X_Jpsi1_ndof = 0;
   X_Jpsi1_px = 0;
   X_Jpsi1_py = 0;
   X_Jpsi1_pz = 0;
   X_Jpsi1_massErr = 0;
   X_Jpsi2_mass = 0;
   X_Jpsi2_VtxProb = 0;
   X_Jpsi2_Chi2 = 0;
   X_Jpsi2_ndof = 0;
   X_Jpsi2_px = 0;
   X_Jpsi2_py = 0;
   X_Jpsi2_pz = 0;
   X_Jpsi2_massErr = 0;
   X_JPiPi_Pi1Idx = 0;
   X_JPiPi_Pi2Idx = 0;
   X_JPiPi_Pi1px = 0;
   X_JPiPi_Pi1py = 0;
   X_JPiPi_Pi1pz = 0;
   X_JPiPi_Pi2px = 0;
   X_JPiPi_Pi2py = 0;
   X_JPiPi_Pi2pz = 0;
   cs_X_Jpsi1_mass = 0;
   cs_X_Jpsi1_VtxProb = 0;
   cs_X_Jpsi1_Chi2 = 0;
   cs_X_Jpsi1_ndof = 0;
   cs_X_Jpsi1_px = 0;
   cs_X_Jpsi1_py = 0;
   cs_X_Jpsi1_pz = 0;
   cs_X_Jpsi1_massErr = 0;
   cs_X_Jpsi2_mass = 0;
   cs_X_Jpsi2_VtxProb = 0;
   cs_X_Jpsi2_Chi2 = 0;
   cs_X_Jpsi2_ndof = 0;
   cs_X_Jpsi2_px = 0;
   cs_X_Jpsi2_py = 0;
   cs_X_Jpsi2_pz = 0;
   cs_X_Jpsi2_massErr = 0;
   cs_X_JPiPi_mass = 0;
   cs_X_JPiPi_VtxProb = 0;
   cs_X_JPiPi_Chi2 = 0;
   cs_X_JPiPi_ndof = 0;
   cs_X_JPiPi_px  = 0;
   cs_X_JPiPi_py = 0;
   cs_X_JPiPi_pz = 0;
   cs_X_JPiPi_massErr = 0;
   cs_X_mass_Psi2S = 0;
   cs_X_VtxProb_Psi2S = 0;
   cs_X_Chi2_Psi2S = 0;
   cs_X_ndof_Psi2S = 0;
   cs_X_px_Psi2S = 0;
   cs_X_py_Psi2S = 0;
   cs_X_pz_Psi2S = 0;
   cs_X_massErr_Psi2S = 0;
   cs_X_JPiPi_mass_Psi2S = 0;
   cs_X_JPiPi_VtxProb_Psi2S = 0;
   cs_X_JPiPi_Chi2_Psi2S = 0;
   cs_X_JPiPi_ndof_Psi2S = 0;
   cs_X_JPiPi_px_Psi2S = 0;
   cs_X_JPiPi_py_Psi2S = 0;
   cs_X_JPiPi_pz_Psi2S = 0;
   cs_X_JPiPi_massErr_Psi2S = 0;
   cs_X_mass_X3872 = 0;
   cs_X_VtxProb_X3872 = 0;
   cs_X_Chi2_X3872 = 0;
   cs_X_ndof_X3872 = 0;
   cs_X_px_X3872 = 0;
   cs_X_py_X3872 = 0;
   cs_X_pz_X3872 = 0;
   cs_X_massErr_X3872 = 0;
   cs_X_JPiPi_mass_X3872 = 0;
   cs_X_JPiPi_VtxProb_X3872 = 0;
   cs_X_JPiPi_Chi2_X3872 = 0;
   cs_X_JPiPi_ndof_X3872 = 0;
   cs_X_JPiPi_px_X3872 = 0;
   cs_X_JPiPi_py_X3872 = 0;
   cs_X_JPiPi_pz_X3872 = 0;
   cs_X_JPiPi_massErr_X3872 = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("TrigRes", &TrigRes, &b_TrigRes);
   fChain->SetBranchAddress("TrigNames", &TrigNames, &b_TrigNames);
   fChain->SetBranchAddress("MatchTriggerNames", &MatchTriggerNames, &b_MatchTriggerNames);
   fChain->SetBranchAddress("L1TrigRes", &L1TrigRes, &b_L1TrigRes);
   fChain->SetBranchAddress("evtNum", &evtNum, &b_evtNum);
   fChain->SetBranchAddress("runNum", &runNum, &b_runNum);
   fChain->SetBranchAddress("lumiNum", &lumiNum, &b_lumiNum);
   fChain->SetBranchAddress("nGoodPrimVtx", &nGoodPrimVtx, &b_nGoodPrimVtx);
   fChain->SetBranchAddress("priVtxX", &priVtxX, &b_f);
   fChain->SetBranchAddress("priVtxY", &priVtxY, &b_f);
   fChain->SetBranchAddress("priVtxZ", &priVtxZ, &b_f);
   fChain->SetBranchAddress("priVtxXE", &priVtxXE, &b_f);
   fChain->SetBranchAddress("priVtxYE", &priVtxYE, &b_f);
   fChain->SetBranchAddress("priVtxZE", &priVtxZE, &b_f);
   fChain->SetBranchAddress("priVtxChiNorm", &priVtxChiNorm, &b_f);
   fChain->SetBranchAddress("priVtxChi", &priVtxChi, &b_f);
   fChain->SetBranchAddress("priVtxCL", &priVtxCL, &b_f);
   fChain->SetBranchAddress("PriVtxXCorrX", &PriVtxXCorrX, &b_PriVtxXCorrX);
   fChain->SetBranchAddress("PriVtxXCorrY", &PriVtxXCorrY, &b_PriVtxXCorrY);
   fChain->SetBranchAddress("PriVtxXCorrZ", &PriVtxXCorrZ, &b_PriVtxXCorrZ);
   fChain->SetBranchAddress("PriVtxXCorrEX", &PriVtxXCorrEX, &b_PriVtxXCorrEX);
   fChain->SetBranchAddress("PriVtxXCorrEY", &PriVtxXCorrEY, &b_PriVtxXCorrEY);
   fChain->SetBranchAddress("PriVtxXCorrEZ", &PriVtxXCorrEZ, &b_PriVtxXCorrEZ);
   fChain->SetBranchAddress("PriVtxXCorrC2", &PriVtxXCorrC2, &b_PriVtxXCorrC2);
   fChain->SetBranchAddress("PriVtxXCorrCL", &PriVtxXCorrCL, &b_PriVtxXCorrCL);
   fChain->SetBranchAddress("nMu", &nMu, &b_nMu);
   fChain->SetBranchAddress("muPx", &muPx, &b_muPx);
   fChain->SetBranchAddress("muPy", &muPy, &b_muPy);
   fChain->SetBranchAddress("muPz", &muPz, &b_muPz);
   fChain->SetBranchAddress("muD0", &muD0, &b_muD0);
   fChain->SetBranchAddress("muD0E", &muD0E, &b_muD0E);
   fChain->SetBranchAddress("muDz", &muDz, &b_muDz);
   fChain->SetBranchAddress("muChi2", &muChi2, &b_muChi2);
   fChain->SetBranchAddress("muGlChi2", &muGlChi2, &b_muGlChi2);
   fChain->SetBranchAddress("mufHits", &mufHits, &b_mufHits);
   fChain->SetBranchAddress("muFirstBarrel", &muFirstBarrel, &b_muFirstBarrel);
   fChain->SetBranchAddress("muFirstEndCap", &muFirstEndCap, &b_muFirstEndCap);
   fChain->SetBranchAddress("muDzVtx", &muDzVtx, &b_muDzVtx);
   fChain->SetBranchAddress("muDxyVtx", &muDxyVtx, &b_muDxyVtx);
   fChain->SetBranchAddress("muNDF", &muNDF, &b_muNDF);
   fChain->SetBranchAddress("muGlNDF", &muGlNDF, &b_muGlNDF);
   fChain->SetBranchAddress("muPhits", &muPhits, &b_muPhits);
   fChain->SetBranchAddress("muShits", &muShits, &b_muShits);
   fChain->SetBranchAddress("muGlMuHits", &muGlMuHits, &b_muGlMuHits);
   fChain->SetBranchAddress("muType", &muType, &b_muType);
   fChain->SetBranchAddress("muQual", &muQual, &b_muQual);
   fChain->SetBranchAddress("muTrack", &muTrack, &b_muTrack);
   fChain->SetBranchAddress("muCharge", &muCharge, &b_muCharge);
   fChain->SetBranchAddress("muIsoratio", &muIsoratio, &b_muIsoratio);
   fChain->SetBranchAddress("munMatchedSeg", &munMatchedSeg, &b_munMatchedSeg);
   fChain->SetBranchAddress("muIsGoodSoftMuonNewIlseMod", &muIsGoodSoftMuonNewIlseMod, &b_muIsGoodSoftMuonNewIlseMod);
   fChain->SetBranchAddress("muIsGoodSoftMuonNewIlse", &muIsGoodSoftMuonNewIlse, &b_muIsGoodSoftMuonNewIlse);
   fChain->SetBranchAddress("muIsGoodLooseMuonNew", &muIsGoodLooseMuonNew, &b_muIsGoodLooseMuonNew);
   fChain->SetBranchAddress("muIsGoodLooseMuon", &muIsGoodLooseMuon, &b_muIsGoodLooseMuon);
   fChain->SetBranchAddress("muIsGoodTightMuon", &muIsGoodTightMuon, &b_muIsGoodTightMuon);
   fChain->SetBranchAddress("muIsPatLooseMuon", &muIsPatLooseMuon, &b_muIsPatLooseMuon);
   fChain->SetBranchAddress("muIsPatTightMuon", &muIsPatTightMuon, &b_muIsPatTightMuon);
   fChain->SetBranchAddress("muIsPatSoftMuon", &muIsPatSoftMuon, &b_muIsPatSoftMuon);
   fChain->SetBranchAddress("muIsPatMediumMuon", &muIsPatMediumMuon, &b_muIsPatMediumMuon);
   fChain->SetBranchAddress("muIsJpsiTrigMatch", &muIsJpsiTrigMatch, &b_muIsJpsiTrigMatch);
   fChain->SetBranchAddress("muIsUpsTrigMatch", &muIsUpsTrigMatch, &b_muIsUpsTrigMatch);
   fChain->SetBranchAddress("muMVAMuonID", &muMVAMuonID, &b_muMVAMuonID);
   fChain->SetBranchAddress("musegmentCompatibility", &musegmentCompatibility, &b_musegmentCompatibility);
   fChain->SetBranchAddress("mupulldXdZ_pos_noArb", &mupulldXdZ_pos_noArb, &b_mupulldXdZ_pos_noArb);
   fChain->SetBranchAddress("mupulldYdZ_pos_noArb", &mupulldYdZ_pos_noArb, &b_mupulldYdZ_pos_noArb);
   fChain->SetBranchAddress("mupulldXdZ_pos_ArbDef", &mupulldXdZ_pos_ArbDef, &b_mupulldXdZ_pos_ArbDef);
   fChain->SetBranchAddress("mupulldYdZ_pos_ArbDef", &mupulldYdZ_pos_ArbDef, &b_mupulldYdZ_pos_ArbDef);
   fChain->SetBranchAddress("mupulldXdZ_pos_ArbST", &mupulldXdZ_pos_ArbST, &b_mupulldXdZ_pos_ArbST);
   fChain->SetBranchAddress("mupulldYdZ_pos_ArbST", &mupulldYdZ_pos_ArbST, &b_mupulldYdZ_pos_ArbST);
   fChain->SetBranchAddress("mupulldXdZ_pos_noArb_any", &mupulldXdZ_pos_noArb_any, &b_mupulldXdZ_pos_noArb_any);
   fChain->SetBranchAddress("mupulldYdZ_pos_noArb_any", &mupulldYdZ_pos_noArb_any, &b_mupulldYdZ_pos_noArb_any);
   fChain->SetBranchAddress("muUpsVrtxMatch", &muUpsVrtxMatch, &b_muUpsVrtxMatch);
   fChain->SetBranchAddress("muL3TriggerMatch", &muL3TriggerMatch, &b_muL3TriggerMatch);
   fChain->SetBranchAddress("X_mu1Idx", &X_mu1Idx, &b_X_mu1Idx);
   fChain->SetBranchAddress("X_mu2Idx", &X_mu2Idx, &b_X_mu2Idx);
   fChain->SetBranchAddress("X_mu3Idx", &X_mu3Idx, &b_X_mu3Idx);
   fChain->SetBranchAddress("X_mu4Idx", &X_mu4Idx, &b_X_mu4Idx);
   fChain->SetBranchAddress("X_mass", &X_mass, &b_X_mass);
   fChain->SetBranchAddress("X_VtxProb", &X_VtxProb, &b_X_VtxProb);
   fChain->SetBranchAddress("X_Chi2", &X_Chi2, &b_X_Chi2);
   fChain->SetBranchAddress("X_ndof", &X_ndof, &b_X_ndof);
   fChain->SetBranchAddress("X_px", &X_px, &b_X_px);
   fChain->SetBranchAddress("X_py", &X_py, &b_X_py);
   fChain->SetBranchAddress("X_pz", &X_pz, &b_X_pz);
   fChain->SetBranchAddress("X_massErr", &X_massErr, &b_X_massErr);
   fChain->SetBranchAddress("X_JPiPi_mass", &X_JPiPi_mass, &b_X_JPiPi_mass);
   fChain->SetBranchAddress("X_JPiPi_VtxProb", &X_JPiPi_VtxProb, &b_X_JPiPi_VtxProb);
   fChain->SetBranchAddress("X_JPiPi_Chi2", &X_JPiPi_Chi2, &b_X_JPiPi_Chi2);
   fChain->SetBranchAddress("X_JPiPi_ndof", &X_JPiPi_ndof, &b_X_JPiPi_ndof);
   fChain->SetBranchAddress("X_JPiPi_px", &X_JPiPi_px, &b_X_JPiPi_px);
   fChain->SetBranchAddress("X_JPiPi_py", &X_JPiPi_py, &b_X_JPiPi_py);
   fChain->SetBranchAddress("X_JPiPi_pz", &X_JPiPi_pz, &b_X_JPiPi_pz);
   fChain->SetBranchAddress("X_JPiPi_massErr", &X_JPiPi_massErr, &b_X_JPiPi_massErr);
   fChain->SetBranchAddress("X_Jpsi1_mass", &X_Jpsi1_mass, &b_X_Jpsi1_mass);
   fChain->SetBranchAddress("X_Jpsi1_VtxProb", &X_Jpsi1_VtxProb, &b_X_Jpsi1_VtxProb);
   fChain->SetBranchAddress("X_Jpsi1_Chi2", &X_Jpsi1_Chi2, &b_X_Jpsi1_Chi2);
   fChain->SetBranchAddress("X_Jpsi1_ndof", &X_Jpsi1_ndof, &b_X_Jpsi1_ndof);
   fChain->SetBranchAddress("X_Jpsi1_px", &X_Jpsi1_px, &b_X_Jpsi1_px);
   fChain->SetBranchAddress("X_Jpsi1_py", &X_Jpsi1_py, &b_X_Jpsi1_py);
   fChain->SetBranchAddress("X_Jpsi1_pz", &X_Jpsi1_pz, &b_X_Jpsi1_pz);
   fChain->SetBranchAddress("X_Jpsi1_massErr", &X_Jpsi1_massErr, &b_X_Jpsi1_massErr);
   fChain->SetBranchAddress("X_Jpsi2_mass", &X_Jpsi2_mass, &b_X_Jpsi2_mass);
   fChain->SetBranchAddress("X_Jpsi2_VtxProb", &X_Jpsi2_VtxProb, &b_X_Jpsi2_VtxProb);
   fChain->SetBranchAddress("X_Jpsi2_Chi2", &X_Jpsi2_Chi2, &b_X_Jpsi2_Chi2);
   fChain->SetBranchAddress("X_Jpsi2_ndof", &X_Jpsi2_ndof, &b_X_Jpsi2_ndof);
   fChain->SetBranchAddress("X_Jpsi2_px", &X_Jpsi2_px, &b_X_Jpsi2_px);
   fChain->SetBranchAddress("X_Jpsi2_py", &X_Jpsi2_py, &b_X_Jpsi2_py);
   fChain->SetBranchAddress("X_Jpsi2_pz", &X_Jpsi2_pz, &b_X_Jpsi2_pz);
   fChain->SetBranchAddress("X_Jpsi2_massErr", &X_Jpsi2_massErr, &b_X_Jpsi2_massErr);
   fChain->SetBranchAddress("X_JPiPi_Pi1Idx", &X_JPiPi_Pi1Idx, &b_X_JPiPi_Pi1Idx);
   fChain->SetBranchAddress("X_JPiPi_Pi2Idx", &X_JPiPi_Pi2Idx, &b_X_JPiPi_Pi2Idx);
   fChain->SetBranchAddress("X_JPiPi_Pi1px", &X_JPiPi_Pi1px, &b_X_JPiPi_Pi1px);
   fChain->SetBranchAddress("X_JPiPi_Pi1py", &X_JPiPi_Pi1py, &b_X_JPiPi_Pi1py);
   fChain->SetBranchAddress("X_JPiPi_Pi1pz", &X_JPiPi_Pi1pz, &b_X_JPiPi_Pi1pz);
   fChain->SetBranchAddress("X_JPiPi_Pi2px", &X_JPiPi_Pi2px, &b_X_JPiPi_Pi2px);
   fChain->SetBranchAddress("X_JPiPi_Pi2py", &X_JPiPi_Pi2py, &b_X_JPiPi_Pi2py);
   fChain->SetBranchAddress("X_JPiPi_Pi2pz", &X_JPiPi_Pi2pz, &b_X_JPiPi_Pi2pz);
   fChain->SetBranchAddress("cs_X_Jpsi1_mass", &cs_X_Jpsi1_mass, &b_cs_X_Jpsi1_mass);
   fChain->SetBranchAddress("cs_X_Jpsi1_VtxProb", &cs_X_Jpsi1_VtxProb, &b_cs_X_Jpsi1_VtxProb);
   fChain->SetBranchAddress("cs_X_Jpsi1_Chi2", &cs_X_Jpsi1_Chi2, &b_cs_X_Jpsi1_Chi2);
   fChain->SetBranchAddress("cs_X_Jpsi1_ndof", &cs_X_Jpsi1_ndof, &b_cs_X_Jpsi1_ndof);
   fChain->SetBranchAddress("cs_X_Jpsi1_px", &cs_X_Jpsi1_px, &b_cs_X_Jpsi1_px);
   fChain->SetBranchAddress("cs_X_Jpsi1_py", &cs_X_Jpsi1_py, &b_cs_X_Jpsi1_py);
   fChain->SetBranchAddress("cs_X_Jpsi1_pz", &cs_X_Jpsi1_pz, &b_cs_X_Jpsi1_pz);
   fChain->SetBranchAddress("cs_X_Jpsi1_massErr", &cs_X_Jpsi1_massErr, &b_cs_X_Jpsi1_massErr);
   fChain->SetBranchAddress("cs_X_Jpsi2_mass", &cs_X_Jpsi2_mass, &b_cs_X_Jpsi2_mass);
   fChain->SetBranchAddress("cs_X_Jpsi2_VtxProb", &cs_X_Jpsi2_VtxProb, &b_cs_X_Jpsi2_VtxProb);
   fChain->SetBranchAddress("cs_X_Jpsi2_Chi2", &cs_X_Jpsi2_Chi2, &b_cs_X_Jpsi2_Chi2);
   fChain->SetBranchAddress("cs_X_Jpsi2_ndof", &cs_X_Jpsi2_ndof, &b_cs_X_Jpsi2_ndof);
   fChain->SetBranchAddress("cs_X_Jpsi2_px", &cs_X_Jpsi2_px, &b_cs_X_Jpsi2_px);
   fChain->SetBranchAddress("cs_X_Jpsi2_py", &cs_X_Jpsi2_py, &b_cs_X_Jpsi2_py);
   fChain->SetBranchAddress("cs_X_Jpsi2_pz", &cs_X_Jpsi2_pz, &b_cs_X_Jpsi2_pz);
   fChain->SetBranchAddress("cs_X_Jpsi2_massErr", &cs_X_Jpsi2_massErr, &b_cs_X_Jpsi2_massErr);
   fChain->SetBranchAddress("cs_X_JPiPi_mass", &cs_X_JPiPi_mass, &b_cs_X_JPiPi_mass);
   fChain->SetBranchAddress("cs_X_JPiPi_VtxProb", &cs_X_JPiPi_VtxProb, &b_cs_X_JPiPi_VtxProb);
   fChain->SetBranchAddress("cs_X_JPiPi_Chi2", &cs_X_JPiPi_Chi2, &b_cs_X_JPiPi_Chi2);
   fChain->SetBranchAddress("cs_X_JPiPi_ndof", &cs_X_JPiPi_ndof, &b_cs_X_JPiPi_ndof);
   fChain->SetBranchAddress("cs_X_JPiPi_px ", &cs_X_JPiPi_px , &b_cs_X_JPiPi_px );
   fChain->SetBranchAddress("cs_X_JPiPi_py", &cs_X_JPiPi_py, &b_cs_X_JPiPi_py);
   fChain->SetBranchAddress("cs_X_JPiPi_pz", &cs_X_JPiPi_pz, &b_cs_X_JPiPi_pz);
   fChain->SetBranchAddress("cs_X_JPiPi_massErr", &cs_X_JPiPi_massErr, &b_cs_X_JPiPi_massErr);
   fChain->SetBranchAddress("cs_X_mass_Psi2S", &cs_X_mass_Psi2S, &b_cs_X_mass_Psi2S);
   fChain->SetBranchAddress("cs_X_VtxProb_Psi2S", &cs_X_VtxProb_Psi2S, &b_cs_X_VtxProb_Psi2S);
   fChain->SetBranchAddress("cs_X_Chi2_Psi2S", &cs_X_Chi2_Psi2S, &b_cs_X_Chi2_Psi2S);
   fChain->SetBranchAddress("cs_X_ndof_Psi2S", &cs_X_ndof_Psi2S, &b_cs_X_ndof_Psi2S);
   fChain->SetBranchAddress("cs_X_px_Psi2S", &cs_X_px_Psi2S, &b_cs_X_px_Psi2S);
   fChain->SetBranchAddress("cs_X_py_Psi2S", &cs_X_py_Psi2S, &b_cs_X_py_Psi2S);
   fChain->SetBranchAddress("cs_X_pz_Psi2S", &cs_X_pz_Psi2S, &b_cs_X_pz_Psi2S);
   fChain->SetBranchAddress("cs_X_massErr_Psi2S", &cs_X_massErr_Psi2S, &b_cs_X_massErr_Psi2S);
   fChain->SetBranchAddress("cs_X_JPiPi_mass_Psi2S", &cs_X_JPiPi_mass_Psi2S, &b_cs_X_JPiPi_mass_Psi2S);
   fChain->SetBranchAddress("cs_X_JPiPi_VtxProb_Psi2S", &cs_X_JPiPi_VtxProb_Psi2S, &b_cs_X_JPiPi_VtxProb_Psi2S);
   fChain->SetBranchAddress("cs_X_JPiPi_Chi2_Psi2S", &cs_X_JPiPi_Chi2_Psi2S, &b_cs_X_JPiPi_Chi2_Psi2S);
   fChain->SetBranchAddress("cs_X_JPiPi_ndof_Psi2S", &cs_X_JPiPi_ndof_Psi2S, &b_cs_X_JPiPi_ndof_Psi2S);
   fChain->SetBranchAddress("cs_X_JPiPi_px_Psi2S", &cs_X_JPiPi_px_Psi2S, &b_cs_X_JPiPi_px_Psi2S);
   fChain->SetBranchAddress("cs_X_JPiPi_py_Psi2S", &cs_X_JPiPi_py_Psi2S, &b_cs_X_JPiPi_py_Psi2S);
   fChain->SetBranchAddress("cs_X_JPiPi_pz_Psi2S", &cs_X_JPiPi_pz_Psi2S, &b_cs_X_JPiPi_pz_Psi2S);
   fChain->SetBranchAddress("cs_X_JPiPi_massErr_Psi2S", &cs_X_JPiPi_massErr_Psi2S, &b_cs_X_JPiPi_massErr_Psi2S);
   fChain->SetBranchAddress("cs_X_mass_X3872", &cs_X_mass_X3872, &b_cs_X_mass_X3872);
   fChain->SetBranchAddress("cs_X_VtxProb_X3872", &cs_X_VtxProb_X3872, &b_cs_X_VtxProb_X3872);
   fChain->SetBranchAddress("cs_X_Chi2_X3872", &cs_X_Chi2_X3872, &b_cs_X_Chi2_X3872);
   fChain->SetBranchAddress("cs_X_ndof_X3872", &cs_X_ndof_X3872, &b_cs_X_ndof_X3872);
   fChain->SetBranchAddress("cs_X_px_X3872", &cs_X_px_X3872, &b_cs_X_px_X3872);
   fChain->SetBranchAddress("cs_X_py_X3872", &cs_X_py_X3872, &b_cs_X_py_X3872);
   fChain->SetBranchAddress("cs_X_pz_X3872", &cs_X_pz_X3872, &b_cs_X_pz_X3872);
   fChain->SetBranchAddress("cs_X_massErr_X3872", &cs_X_massErr_X3872, &b_cs_X_massErr_X3872);
   fChain->SetBranchAddress("cs_X_JPiPi_mass_X3872", &cs_X_JPiPi_mass_X3872, &b_cs_X_JPiPi_mass_X3872);
   fChain->SetBranchAddress("cs_X_JPiPi_VtxProb_X3872", &cs_X_JPiPi_VtxProb_X3872, &b_cs_X_JPiPi_VtxProb_X3872);
   fChain->SetBranchAddress("cs_X_JPiPi_Chi2_X3872", &cs_X_JPiPi_Chi2_X3872, &b_cs_X_JPiPi_Chi2_X3872);
   fChain->SetBranchAddress("cs_X_JPiPi_ndof_X3872", &cs_X_JPiPi_ndof_X3872, &b_cs_X_JPiPi_ndof_X3872);
   fChain->SetBranchAddress("cs_X_JPiPi_px_X3872", &cs_X_JPiPi_px_X3872, &b_cs_X_JPiPi_px_X3872);
   fChain->SetBranchAddress("cs_X_JPiPi_py_X3872", &cs_X_JPiPi_py_X3872, &b_cs_X_JPiPi_py_X3872);
   fChain->SetBranchAddress("cs_X_JPiPi_pz_X3872", &cs_X_JPiPi_pz_X3872, &b_cs_X_JPiPi_pz_X3872);
   fChain->SetBranchAddress("cs_X_JPiPi_massErr_X3872", &cs_X_JPiPi_massErr_X3872, &b_cs_X_JPiPi_massErr_X3872);
   Notify();
}

Bool_t myntuple::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void myntuple::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t myntuple::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef myntuple_cxx
