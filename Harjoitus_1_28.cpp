//
// T‰m‰ filu sis‰lt‰‰ main funktion sorsan.
//


#define _VECTOR
#include "Kenny.h"

void showArray(int *[ ]);

int main()
{
	const int KOKO = 5;
	int taulukko[KOKO]={2,4,6,8,10};

	int *intPointer[5];


	for(int i=0;i<KOKO;i++)
	{
		intPointer[i]=&taulukko[i];
	}

	showArray(intPointer);

	getchar();getchar();
	return 0;
}

void showArray(int *myArray[ ])
{
	for(int i=0;i<5;i++)
	{
		cout<<"Taulukon alkion "<<i<<" arvo on : "<<*myArray[i];
		cout << endl;
	}
}