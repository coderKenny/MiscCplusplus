//
// T‰m‰ filu sis‰lt‰‰ main funktion sorsan.
//


#define _VECTOR
#include "Kenny.h"


int main(void)
{
	IOhandlerClass* handleri = new IOhandlerClass();
	double syote, vastaus;

	cout << "Anna luku : ";
	cin>> syote;

	vastaus=handleri->nelio(syote);

	cout << "\n\nLuvun nelio on : "<< vastaus;

	handleri->LisaaGetCharreja(2);

	delete handleri;

	return 0;
}
