//
// Tämä filu sisältää main funktion sorsan.
//


#define _VECTOR
#include "Kenny.h"


// Prototyyppi -->
int targetFunction (int*);

int main()
{
	int intArray[5]={1,2,3,4,5};
	int result;

	result=targetFunction(intArray);
	

	cout<<"\n\nTaulukon alkioiden summa on " << result;

	getchar();

	return 0;
}

int targetFunction (int *ptr)
{
	int result=0;

	for(int i=0;i<5;i++)
	{
		cout<<"Taulukon alkion "<<i<<" arvo on : "<<ptr[i];
		cout << endl;
		result+=ptr[i];
	}

	return result;
}