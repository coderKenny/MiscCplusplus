//
// T‰m‰ filu sis‰lt‰‰ main funktion sorsan.
//


#define _VECTOR
#include "Kenny.h"

int main()
{
// JKE: Create an int type array of very large size
	const int KOKO = 10000;
	int taulukko[KOKO];
	int iterator=0;
// JKE: Create a int type variable result
	int result=0;
// JKE: Create a pointer
	int *intPtr=nullptr;
// JKE: Set a pointer to an array
	intPtr=taulukko;

	do
	{
		cout <<"Enter a number (0 terminates )" << endl;
		// JKE: Store input to a pointer which is pointing to array

		cin >> intPtr[iterator];
		result += intPtr[iterator];

		// JKE: Store input to variable result
	} while (intPtr[iterator]!=0);
	
	
	// Print out to console result

	cout <<"\n\nAntamiesi lukujen summa on : "<< result;
	getchar();getchar();
	return 0;
}
