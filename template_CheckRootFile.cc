int CheckRootFile()
{
	TTree *events = NULL;

	TFile *f = TFile::Open("$file");

	if (!f)
	{
		printf(">> CheckRootFile > $file is corrupted\n");
		return 1;
	}

	events = (TTree *) f->Get("Events");
	if (!events)
	{
		printf(">> CheckRootFile > $file is doesn't contain Events tree.\n");
		return 2;
	}

	unsigned int entries = events->GetEntries();
	
	if (entries == 0)
	{
		printf(">> CheckRootFile > $file is OK, but empty\n");
		return 10;
	} else {
		printf(">> CheckRootFile > $file is OK and not empty\n");
		return 0;
	}
	
	return 123;
}
