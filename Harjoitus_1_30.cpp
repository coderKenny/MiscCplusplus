//
// T‰m‰ filu sis‰lt‰‰ main funktion sorsan.
//


#define _VECTOR
#include "Kenny.h"

int main()
{
// Task 1a: Basic use of a pointer
// JKE: Create a int type variable with some value
	int integer=100;
// JKE: Create a int type pointer variable
	int *intPtr;
// JKE: Assign variableís address to pointer variable
	intPtr=&integer;
// JKE: Print out variableís value and its address
	cout << "Muuttujan arvo : "<<integer;
	cout << "\nMuuttujan muistipaikka : "<<&integer;

	cout << endl<<endl;
// JKE: Print out pointer variableís value (address) and value stored in memory location (with dereference operator)
	cout << "Pointterin osoite : "<<intPtr;
	cout << "\nOsoitteessa oleva arvo : "<<*intPtr;

// Task 1b: Null pointer
// JKE: Create a int type pointer variable and make it a null pointer
	int *nullPointer=nullptr;
// JKE: Test that pointer variable is null by checking it with if command by printing out ìThis is a null pointerî when it is a null variable.
	if(nullPointer==nullptr)
		cout << "\n\nThis is a null pointer";

	getchar();
return 0;
}