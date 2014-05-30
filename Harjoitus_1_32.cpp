#include <iostream>
using namespace std;
int main()
{
// Task 03: Creation and use of void pointer type pointer variable
// JKE: Create a void pointer variable
	void *voidPtr;
// JKE: Create a int type variable and give it some value
	int i=6;
// JKE: Assign address of variable to void pointer variable
	voidPtr=&i;
// JKE: print out address and value of memory location with pointer variable

	cout << "Luvun osoite on : "<<voidPtr;

	cout << endl;

	int *pInt = static_cast<int*>(voidPtr); // cast from void* to int* so it can be dereferenced

	cout << "Luvun arvo muistipaikassa on : "<<*pInt;

	getchar();

	return 0;
}