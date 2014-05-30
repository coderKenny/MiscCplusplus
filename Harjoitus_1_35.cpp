//
// T‰m‰ filu sis‰lt‰‰ main funktion sorsan.
//


#define _VECTOR
#include "Kenny.h"

char* ParseandShowArray(char *myArray);

void main()
{
	char* intPointer = new char[29];


	strcpy(intPointer,"Crazy Fox Sleeps on Highway.");

	intPointer=ParseandShowArray(intPointer);

	cout << "\n\nMerkkijono on " << intPointer;

	delete[] intPointer;


	getchar();	
}

char* ParseandShowArray(char *myArray)
{
	
	string strinki(myArray, 29); // Convertoi string muuttujaksi

	cout << "Merkkijono on " << strinki;
		

	unsigned pos1 = strinki.find("F");
	unsigned pos2 = strinki.find("x");

	strinki.replace(pos1,3,"Cat");  // Replace Fox with Cat
	cout << "\nMerkkijono on " << strinki;

	strcpy(myArray,strinki.c_str()); // "Konvertoi takaisin" alkuper‰iseen char* muuttujaan

	

	return myArray;
}