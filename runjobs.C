void runjobs_NUMBER()
{
	TChain *chain = new TChain("TREENAME","");
	TString inputFile;
	chain->Add("INPUTPATH/*.root");
	myntuple a(chain);
	a.Loop("OUTPUTDIR/OUTNAME");
        //Delete all things to save memory
	a.~myntuple();
	delete chain;
}
