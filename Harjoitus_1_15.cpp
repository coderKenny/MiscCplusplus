//
// T‰m‰ filu sis‰lt‰‰ main funktion sorsan.
//


#define _VECTOR 
#include "Kenny.h"

// Toteutus integer vektorilla

int main(void)
{
	IOhandlerClass* handleri = new IOhandlerClass();
	vector<int> vektori;

	handleri->LueVektori(&vektori);
	handleri->LaskeJaTulostaKeskiarvo(vektori);
	handleri->TulostaJakauma(&vektori);

	handleri->LisaaGetCharreja(2);

	delete handleri;

	return 0;
}
