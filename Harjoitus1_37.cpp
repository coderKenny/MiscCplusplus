#include <iostream>
using namespace std;

struct Talo
{
	void myFunction() 
	{ 
		cout << "Talo and myFunction..." << endl; 
	}
};


int main()
{
// Task 01a: Create variable and use its functions
// JKE: Create a Talo type variable
	Talo taloStrukti;
// JKE: invoke myFunction of variable
	taloStrukti.myFunction();
// Task 01b: Create reference and use its functions
// JKE: Create a Talo type reference to variable
	Talo &taloRefenssi=taloStrukti;
// JKE: invoke myFunction of reference
	taloRefenssi.myFunction();
// Task 01c: Create a pointer variable and use its functions
// JKE: Create a Talo type pointer variable and assign variable’s address to it
	Talo* taloPtr=&taloStrukti;
// JKE: invoke myFunction of pointer variable
	taloPtr->myFunction();
// Task 01d: Create a void pointer variable and use its functions
// JKE: Create a void type pointer variable and assign variable’s address to it
	void* voidPointer;
	voidPointer=&taloStrukti;
	Talo* myDynamic=static_cast<Talo*>(voidPointer);
	// int *pInt = static_cast<int*>(voidPtr);
// JKE: invoke myFunction of void pointer variable
	myDynamic->myFunction();

	getchar();

	return 0;
}