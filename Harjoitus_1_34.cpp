#include <iostream>
using namespace std;
int main()
{
// Task 05: Basic constant pointer variable
// JKE: Create an int type variable with some value
	int integer =100;
// JKE: Create a int type constant pointer variable with keyword “const” and assign variable’s address to pointer variable
	const int* intPtr=&integer;

// JKE: Print out pointer variable and its dereferenced value

	cout << "Pointterin muistiosoite : "<<intPtr;
	cout << "\nArvo muistiosoitteesta : "<<*intPtr;

	getchar();
return 0;
}