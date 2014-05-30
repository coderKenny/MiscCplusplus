//
// T‰m‰ filu sis‰lt‰‰ main funktion sorsan.
//


#define _VECTOR
#include "Kenny.h"


int main(void)
{
	IOhandlerClass* handleri = new IOhandlerClass();

	int intMuuttuja = 123;

	int *pVariable1;
	int *pVariable2;

	pVariable1=&intMuuttuja;

	pVariable2=pVariable1;

	cout << "Int muuttujan arvo on : "<<intMuuttuja;

	cout << "\nPointterimuuttujan1 arvo on : "<<*pVariable1;
	cout << "\nPointterimuuttujan2 arvo on : "<<*pVariable2;

	cout <<"\n\nPointterimuuttujan1 muistipaikka : "<<pVariable1;
	cout <<"\nPointterimuuttujan2 muistipaikka : "<<pVariable2;
	cout <<"\nInt muuttujan muistipaikka : "<<&intMuuttuja;

	handleri->LisaaGetCharreja(2);

	delete handleri;

	return 0;
}
