//
// Tämä filu sisältää main funktion sorsan.
//


#define _VECTOR
#include "Kenny.h"


// Prototyyppi -->
void changeNumbers (int*, int*);

int main()
{
	int intValue1=3;
	int intValue2=5;

	changeNumbers(&intValue1,&intValue2);
	
	cout<<"IntValue1 : "<<intValue1;
	cout<<"\nIntValue2 : "<<intValue2;

	getchar();

	return 0;
}

void changeNumbers (int *ptrA, int *ptrB)
{
	*ptrA+=111;
	*ptrB-=111;
}