//
// Tämä filu sisältää main funktion sorsan.
//


#define _VECTOR
#include "Kenny.h"


int main(void)
{
	IOhandlerClass* handleri = new IOhandlerClass();
	string lasku;


	int matriisi[3][3] =
	{
		{11,12,13},
		{21,22,23},
		{31,32,33}
	};

	int matriisi2[3][3] =
	{
		{111,112,113},
		{221,222,223},
		{331,332,333}
	};

	handleri->SummaaMatriisit(matriisi,matriisi2);
	handleri->MiinustaMatriisit(matriisi,matriisi2);
	handleri->KerroMatriisit(matriisi,matriisi2);

	handleri->LisaaGetCharreja(1);
	delete handleri;

	return 0;
}
