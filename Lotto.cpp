//
// Lottopelin main funktio + apufunktio(t)
//


#define _VECTOR
#include "Kenny.h"

void kysyLottoRivi(int* pInt);
int readAValidNumber(void);

int main(void)
{
	IOhandlerClass* handleri = new IOhandlerClass();
	int* varsinaisetNumerot = new int[7];
	int* lisaNumerot = new int[2];
	int* veikatutNumerot = new int[7];
	string nimi;
	int oikeita,oikeitaVara;

	// Alustus -->
	veikatutNumerot[0] = 0;
	veikatutNumerot[1] = 0;
	veikatutNumerot[2] = 0;
	veikatutNumerot[3] = 0;
	veikatutNumerot[4] = 0;
	veikatutNumerot[5] = 0;
	veikatutNumerot[6] = 0;

	cout << "Tama on lottopeli\n\n";
		
	cout<<"\nMika on nimesi : ";

	getline(cin,nimi);

	cout<<"\nAnna 7 veikkaamaasi numeroa "<<nimi<<" \n";

	kysyLottoRivi(veikatutNumerot);


	handleri->ArvoVarsinaisetNumerot(varsinaisetNumerot);
	handleri->ArvoLisaNumerot(lisaNumerot);

	oikeita=handleri->OikeitaVastauksia(varsinaisetNumerot,veikatutNumerot);
	oikeitaVara=handleri->OikeitaVastauksia(lisaNumerot,varsinaisetNumerot,true);

	for(int i=0;i<7;i++)
		cout << "\nVeikattu rivi : "<<veikatutNumerot[i];

	cout << endl;

	cout << "\nOikeita varsinaisia numeroita : "<<oikeita<<endl;
	cout << "\nOikeita lisanumeroita : "<<oikeitaVara<<endl;
	
	handleri->LisaaGetCharreja(2);
	
	delete handleri;

	delete[] varsinaisetNumerot;
	delete[] lisaNumerot;
	delete[] veikatutNumerot;

	return 0;
}

void kysyLottoRivi(int* pInt) // Kysyy käyttäjältä numerot ja varmistelee syötteen oikeellisuutta (feilaa jos alkaa merkillä). Ominaisuus : 2a -> lukee kakkosen ekaan merkkiin -> korjattu uudella funktiolla
{
	int luku=0,i=0;
	bool duplikaatti=false;
	bool state=false;

	for(i=0;i<7;i++)
	{
		cout<<"\nAnna veikkaamasi luku"<<i+1<<" : ";

		while(luku<1 || luku >39)
		{
			//if (cin >> luku) // Onko syöte tosiaan integer ? 'state' muuttuja on true virheen sattuessa
			if(luku=readAValidNumber()) // Uusi lisäys !!!
			{
				//cin>>luku;
				state = cin.fail();  // cin failstate for debugging

				if(luku<1 || luku >39)
				{
					cout<<"\nHuono syote !\n";
					cout<<"\nAnna uusi luku : ";
				}
			}
	
			else // Vika flagi nousee virheen merkiksi
			{			
				cin.clear(); // Kuittaa error flagin
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // "Korjaa" syöte

				cout<<"\nHuono syote !\n";
				cout<<"\nAnna uusi luku : ";
			}
		}

		for(int j=0;j<7;j++) // Duplikaatin tarkistus
		{
			if(pInt[j]== luku)
			{
				cout<<"\nNumero on annettu jo !\n";
				duplikaatti=true;
				i--;  // "Annetaan" saman cin:n lukea uusi numba
				luku=0;
				break; 
			}

			else
				duplikaatti=false;
		}

		if(!duplikaatti)
		{
			pInt[i]=luku;
			luku=0;
		}
	}	
}




// http://stackoverflow.com/questions/18767800/c-fix-for-checking-if-input-is-an-integer

int readAValidNumber(void) // Modattu yllä opastetusta
{
    bool ok = false;
    int dblMarkOne;
    //std::cout << "Enter a number" << std::endl;
    while (!ok)
    { 
        cin >> dblMarkOne;

        if(!cin.fail() && (cin.peek()==EOF || cin.peek()=='\n')) // Jos cin ei nosta flagia ja loppu häämöttää niin ei ole luvun perässä kirjaimia enää streamissä
        {
            ok = true;
        }
        else
        {
            cin.clear();
            cin.ignore(256,'\n');
            cout << "NOK" << std::endl;
			cout<<"Huono syote !\n\n";
			cout <<"Anna uusi luku : ";
        }
    }

	if(dblMarkOne>0 && dblMarkOne<40)
		cout<<"OK\n";
	else
		cout<<"NOK";

	return dblMarkOne;
}