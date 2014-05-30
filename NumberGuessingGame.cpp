//
// Number quessing pelin main funktio.
//


#define _VECTOR
#include "Kenny.h"


int main(void)
{
	IOhandlerClass* handleri = new IOhandlerClass();

	int* luku = new int(sizeof(int));


	cout<<"This is a number quessing game\n";
	cout<<"You must guess the right number between 1 and 10\n\n";

	*luku=0;

	handleri->ArvoLuku(luku);
	handleri->KysyLukuja(luku);

	handleri->LisaaGetCharreja(2);

	delete handleri;

	delete luku;

	return 0;
}