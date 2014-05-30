
#include <iostream>
using namespace std;
int main()
{
// Task 02a: print contents of array with pointer
// JKE: Create a int type array with values: 111,222,333,444,555,666,777,888,999

	int taulukko[9]={111,222,333,444,555,666,777,888,999};

	int koko = sizeof(int);

// JKE: Print out value of first item in array by using dereference operator.

	cout << "Taulukon eka alkio on : "<<*taulukko;
// JKE: Print out value of second address (item) in array by using dereference operator.
	cout << "\nTaulukon toka alkio on : "<<*(taulukko+1); // Scaling uses int size
// JKE: Change value of fifth address (item) in array to 123 using dereference pointer.
	*(taulukko+4)=123;
// JKE: Print out values of all items in array by using dereference operator and for -loop.
	cout << "\n\nTaulukon alkiot : ";

	cout << *(taulukko)<< endl;  // Eka mukaan ilman skaalausta
	for(int i = 0 ;i< 9;i++)
	{
		cout << *(taulukko+i)<< endl;
	}

	getchar();
	
	return 0;
}