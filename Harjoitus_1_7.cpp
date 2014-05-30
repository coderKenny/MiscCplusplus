//
// Tämä filu sisältää main funktion sorsan.
//


#define _VECTOR 
#include "Kenny.h"


void main(void)
{
	IOhandlerClass* handleri = new IOhandlerClass();

	handleri->Luuppaa(12,true);
	handleri->LisaaGetCharreja(1);

	delete handleri;
}