//
// Tämä filu sisältää main funktion sorsan.
//


#define _VECTOR 
#include "Kenny.h"


int main(void)
{
	IOhandlerClass* handleri = new IOhandlerClass();

	handleri->LaskeLaskutoimitus();
	handleri->LisaaGetCharreja(2);

	delete handleri;
	
	return 0;
}