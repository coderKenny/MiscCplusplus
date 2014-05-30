//
// T‰m‰ filu sis‰lt‰‰ main funktion sorsan.
//


#define _VECTOR
#include "Kenny.h"


int main(void)
{
	const int KOKO =5;

	IOhandlerClass* handleri = new IOhandlerClass();

	float taulukko[KOKO]={5,4,3,2,1};

	float *pFloat;

	pFloat=taulukko;

	for(int i=0;i<KOKO;i++)
	{
		cout << "\nTaulukon alkioiden arvot : "<<pFloat[i];
	}

	cout << endl;

	for(int i=0;i<KOKO;i++)
	{
		cout << "\nTaulukon alkioiden muistipaikat : "<<&pFloat[i];
	}

	handleri->LisaaGetCharreja(1);

	delete handleri;

	return 0;
}
