//
// T�m� filu sis�lt�� main funktion sorsan.
//


#define _VECTOR
#include "Kenny.h"


int main(void)
{
	IOhandlerClass* handleri = new IOhandlerClass();

	handleri->TulostaArraystaNimet();
	handleri->LisaaGetCharreja(2);
	delete handleri;

	return 0;
}
