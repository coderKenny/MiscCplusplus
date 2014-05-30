//
// Tämä filu sisältää main funktion sorsan.
//


#define _VECTOR
#include "Kenny.h"

// Protos -->
int getMaximum (int, int);
int (*myPointer)(int, int);

int main()
{
	int integer1=5,integer2=20,result;

	myPointer=&getMaximum;

	result = myPointer(integer1,integer2);

	cout << "Tulos on : "<<result;

	getchar();
}

int getMaximum (int A, int B)
{ 
	return (A > B) ? A : B; 
}