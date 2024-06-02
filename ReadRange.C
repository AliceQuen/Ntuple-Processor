void ReadRange()
{
	TFile *file = new TFile("Range.root","RECREATE");
	TChain *chain = new TChain("RangeTree","");
	TString inputFile;
	chain->Add("DATA_DIR");
	chain->Write();
	file ->Write();
}
