
#include <iostream>
using namespace std;

void myFunction(int &aaa)
{
cout << "aaa value is: " << aaa << endl;
aaa++;
}

int main()
{
// JKE: Create a int type variable and give it a value 123
	int integer = 123;
// JKE: Call function myFunction with variable as argument
	myFunction(integer);
// JKE: Print out variable value
	cout << "Variable value is : "<<integer<<endl<<endl;
// JKE: Call function myFunction with variable as argument
	myFunction(integer);
// JKE: Print out variable value
	cout << "Again variable value is : "<<integer;
	getchar();
return 0;
}