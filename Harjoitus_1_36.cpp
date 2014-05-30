#include <iostream>
using namespace std;
int main()
{
// JKE: Create an int type variable with some value
	int myInteger = 1000;
// JKE: Create a reference
	int &myReference=myInteger;
// JKE: Assign variable to reference
	myReference=2000;

// JKE: Print out value of reference
	cout << "Value of reference is : "<< myReference;
	getchar();
return 0;
}