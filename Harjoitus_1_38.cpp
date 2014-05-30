#include <iostream>
using namespace std;

void myFunction(int aaa)
{
	cout << "aaa value is: " << aaa << endl;
	aaa++;
}

int main()
{
// JKE: Create a variable and give it a value 123
	int variable = 123;
// JKE: Call function myFunction with variable as argument
	myFunction(variable);
// JKE: Print out variable value
	cout << "Variable value is : "<<variable<<endl<<endl;
// JKE: Call function myFunction with variable as argument
	myFunction(variable);
// JKE: Print out variable value
	cout << "Again variable value is : "<<variable;

	getchar();
return 0;
}