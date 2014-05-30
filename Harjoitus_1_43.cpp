//
// T‰m‰ filu sis‰lt‰‰ main funktion sorsan.
//


#define _VECTOR
#include "Kenny.h"


int main(void)
{
	IOhandlerClass* handleri = new IOhandlerClass();

	// vector<Person> vektori;

	Person *henkiloita = new Person[5]; 

	Person Seppo;
	Seppo.name="Seppo";
	Seppo.phone=123;

	Person Kentsu;
	Kentsu.name="Pekka";
	Kentsu.phone=456;

	Person Maija;
	Maija.name="Maija";
	Maija.phone=789;

	Person Liisa;
	Liisa.name="Liisa";
	Liisa.phone=765;

	Person Ville;
	Ville.name="Ville";
	Ville.phone=264;

	//vektori.push_back(Seppo);
	//vektori.push_back(Kentsu);
	//vektori.push_back(Maija);
	//vektori.push_back(Liisa);
	//vektori.push_back(Ville);

	henkiloita[0]=Seppo;
	henkiloita[1]=Kentsu;
	henkiloita[2]=Maija;
	henkiloita[3]=Liisa;
	henkiloita[4]=Ville;

	cout<<"Sorttaamaton lista : \n\n";

	for(int i=0;i<5;i++)
	{
		cout << henkiloita[i].name <<+"  puh : "<<henkiloita[i].phone<<endl;
	}

	cout<< endl<<endl;

	handleri->sort(henkiloita,5);

	cout<<"Sortattu lista : \n\n";

	for(int i=0;i<5;i++)
	{
		cout << henkiloita[i].name <<+"  puh : "<<henkiloita[i].phone<<endl;
	}

	handleri->LisaaGetCharreja(1);

	delete[] henkiloita;
	
	delete handleri;

	return 0;
}
