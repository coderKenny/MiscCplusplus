//
// Tämä filu sisältää main funktion sorsan.
//


#define _VECTOR
#include "Kenny.h"


int main(void)
{
	IOhandlerClass* handleri = new IOhandlerClass();

	handleri->TulostaArraystaNimet2();
	handleri->LisaaGetCharreja(2);
	delete handleri;

	return 0;
}
