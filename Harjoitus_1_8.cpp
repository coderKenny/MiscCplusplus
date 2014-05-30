//
// Tämä filu sisältää main funktion sorsan.
//


#define _VECTOR 
#include "Kenny.h"


void main(void)
{
	IOhandlerClass* handleri = new IOhandlerClass();

	handleri->LoopForever();

	delete handleri;
}