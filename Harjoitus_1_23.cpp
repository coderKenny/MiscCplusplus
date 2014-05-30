//
// T‰m‰ filu sis‰lt‰‰ main funktion sorsan.
//


#define _VECTOR
#include "Kenny.h"


int main(void)
{
	IOhandlerClass* handleri = new IOhandlerClass();

	int intMuuttuja1 = 123;
	int intMuuttuja2 = 456;

	int *pVariable1;

	pVariable1=&intMuuttuja1;

	cout <<"Pointterimuuttujan1 muistipaikka : "<<pVariable1;

	cout << "\nInt muuttujan arvo on : "<<*pVariable1;

	pVariable1=&intMuuttuja2;

	cout <<"\n\nPointterimuuttujan1 muistipaikka : "<<pVariable1;

	cout << "\nInt muuttujan arvo on : "<<*pVariable1;

	handleri->LisaaGetCharreja(2);

	delete handleri;

	return 0;
}
