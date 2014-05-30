//
// Tämä filu sisältää main funktion sorsan.
//


#define _VECTOR
#include "Kenny.h"


int main(void)
{
	IOhandlerClass* handleri = new IOhandlerClass();
	string nimi;

	nimi = handleri->LueString(&nimi);

	handleri->LaskeJaTulostaStringinKoko(nimi);
	handleri->LisaaGetCharreja(1);

	delete handleri;

	return 0;
}
