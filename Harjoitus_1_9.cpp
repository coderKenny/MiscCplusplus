//
// T‰m‰ filu sis‰lt‰‰ main funktion sorsan.
//


#define _VECTOR 
#include "Kenny.h"


void main(void)
{
	std::vector<int> vektori(4,0); // Vektorissa 4 nollaa;
	
	IOhandlerClass* handleri = new IOhandlerClass();

	for (int i = 0; i < vektori.size(); i++)
		vektori[i] = handleri->LueMerkki();

	handleri->LaskeJaTulostaSumma(vektori); // Kopio
	handleri->LaskeJaTulostaKeskiarvo(vektori);
	handleri->SorttaaVektori(&vektori);  // Vektorin v‰litys pointterilla jotta sorttaus j‰‰ muistiin
	handleri->TulostaVektori(vektori);
	handleri->TulostaVektorinSuurinJaPieninArvo(vektori);

	handleri->LisaaGetCharreja(2);

	delete handleri; // Tuhoa olio muistista ettei synny muistivuotoa
}