//
// T‰m‰ filu sis‰lt‰‰ main funktion sorsan.
//


#define _VECTOR
#include "Kenny.h"


int main(void)
{
	IOhandlerClass* handleri = new IOhandlerClass();

	int taulukko[5]={0};

	for(int i=0;i<5;i++)
	{
		cout<<"Taulukon alkion "<<i<< " arvo on : "<<taulukko[i];
		cout<<endl;
	}

	cout << endl;

	for(int i=0;i<5;i++)
	{
		cout<<"Taulukon alkion "<<i<< " muistipaikka : "<<&taulukko[i];
		cout<<endl;
	}

	handleri->LisaaGetCharreja(2);

	delete handleri;

	return 0;
}
