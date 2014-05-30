#include <iostream>
using namespace std;

void myFunction(int *aaa)
{
	cout << "aaa value is: " << *aaa << endl;  // *aaa ??? oppimatskussa toisin
	(*aaa)++; // Vaatii sulut
}

void myFunctionWithArray(int *aaa, int length)
{
	for (int i=0; i < length; i++)
	{
		cout << "aaa value is: " << aaa[i] << endl;
		aaa[i]++;
	}
}
int main()
{
// Task 03a: Single Variable
// JKE: Create a int type variable and give it a value 123
	int integer =123;
// JKE: Call function myFunction with variable as argument
	myFunction(&integer);
// JKE: Print out variable value
	cout << "Variable value is : "<<integer<<endl<<endl;
// JKE: Call function myFunction with variable as argument
	myFunction(&integer);
// JKE: Print out variable value
	cout << "Again variable value is : "<<integer;
	cout<< endl<<endl;
// Task 03b: Array
// JKE: Create a int type array and give it a values 111,222,333,444,555
	int intArray[5]={111,222,333,444,555};
// JKE: Call function myFunctionWithArray with array as argument
	myFunctionWithArray(intArray,5);
// JKE: Print out array value

	cout<<endl<<endl;

	for (int i=0; i < 5; i++)
	{
		cout << "aaa value is: " << intArray[i] << endl;
	}

	cout<<endl<<endl;

// JKE: Call function myFunctionWithArray with array as argument
	myFunctionWithArray(intArray,5);
	cout<<endl<<endl;
// JKE: Print out array value

	for (int i=0; i < 5; i++)
	{
		cout << "aaa value is: " << intArray[i] << endl;
	}

	getchar();
	return 0;
}