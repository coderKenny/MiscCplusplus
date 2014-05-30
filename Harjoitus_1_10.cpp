//
// Tämä filu sisältää main funktion sorsan.
//


#define _VECTOR 
#include "Kenny.h"


int main(void)
{
	IOhandlerClass* handleri = new IOhandlerClass();

	handleri->TestaaTarkkuus();
	handleri->LisaaGetCharreja(1);

	delete handleri;

	return 0;
}