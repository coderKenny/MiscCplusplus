
#include <iostream>
using namespace std;
int main()
{
// JKE: Task 04a: Single dynamically allocated variable
// JKE: Create dynamically a int type variable
	int* dynaaminenInteger = new int[1];
// JKE: assign variable value 123
	dynaaminenInteger[0]=123;
// JKE: print out value of variable
	cout<<"Luvun arvo on : "<< *dynaaminenInteger; // Osoittaa ekaan alkioon varatussa alueessa
// JKE: Destroy variable
	delete dynaaminenInteger;
// JKE: Set variable as a null pointer
	dynaaminenInteger=nullptr;
// JKE: Task 04b: Dynamically allocated array
// JKE: Create dynamically a int type array.
	int* numerot = new int[5];
// JKE: assign array values 111,22,33,444,555
	numerot[0]=111;
	numerot[1]=22;
	numerot[2]=33;
	numerot[3]=444;
	numerot[4]=555;
// JKE: print out values of array

	cout << "\nArrayn numbat ovat :\n"<<endl;

	for(int i=0;i<5;i++)
	{
		cout << *(numerot+i)<< endl;
	}
// JKE: Destroy array
	delete[] numerot;
// JKE: Set array as a null pointer
	numerot=nullptr;

	getchar();

	return 0;
}