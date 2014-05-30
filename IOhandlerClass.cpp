//
// Tähän luokkaan on koodattu joukko "helpperi" funktioita.
// Kapseloi nämä jotta solutionin mainit olisivat selkeämpiä.
//


#include "IOhandlerClass.h"


IOhandlerClass::IOhandlerClass()
{
}

IOhandlerClass::~IOhandlerClass()
{
} 


int IOhandlerClass::LueMerkki()
{
	int integer = 0;
	cout << "Anna integer : ";
	cin >> integer;
	return integer;
}

int IOhandlerClass::LueMerkkeja()
{
	int input = 32;
	cout << "Anna ASCII koodi valilla 32 - 255 (0 lopettaa) : ";
	cin >> input;


	while (input != 0)
	{
		if (input <= 255 && input >= 32)
		{
			if (input != 0)
				cout << "\nMerkki charrina on : " << (char)input << endl;

			cout << "\nAnna ASCII koodi valilla 32 - 255 (0 lopettaa) : ";
			cin >> input;
		}
		
		else
		{
			cout << "\nSyottovirhe!!\n";
			cout << "\nAnna ASCII koodi valilla 32 - 255 (0 lopettaa) : ";
			cin >> input;
		}
	}

	return 0;
}

void IOhandlerClass::Luuppaa(int iteraatioKierroksia)
{
	for (int i = 0; i < iteraatioKierroksia; i++)
	{
		if (i == 0)
			cout <<i<< "  --> Luku on nolla" << endl;

		else if (i >0 && i <6)
			cout << i << "  -->Pieni luku" << endl;

		else if (i >5 && i <11)
			cout << i << "  -->Suuri luku" << endl;

		else
			cout << i << "  -->Ollaan suossa" << endl;

	}
}

void IOhandlerClass::Luuppaa(int iteraatioKierroksia,bool valitsin)
{	
	cout << "for luupilla\n\n";

	for (int i = 1; i < iteraatioKierroksia-1; i++)
	{
		int temp = i*i;
		cout <<"Luku on : " << i <<" ->  "<< "nelio on : "<<temp<< endl;
	}

	cout << "\n\nwhile luupilla\n\n";

	int i = 1; // Reset iterator

	while (i < 11)
	{
		int temp = i*i;
		cout << "Luku on : " << i << " ->  " << "nelio on : " << temp << endl;
		i++;
	}

	cout << "\n\ndo-while luupilla\n\n";

	i = 1; // Reset iterator
	do
	{
		int temp = i*i;
		cout << "Luku on : " << i << " ->  " << "nelio on : " << temp << endl;
		i++;
	} while (i < 11);
}

void IOhandlerClass::LoopForever()
{
	int valitsin;
	int j = 0,k=0;

	cout << "\nMita looppia haluat kayttaa ? : ";
	cin >> valitsin;

	switch (valitsin)
	{
		case 1:
			for (int i = 0;;i++)
			{
				cout << "Luku on : " << i <<  endl;
			}
			

		case 2:			
			while (true)
			{
				cout << "Luku on : " << j << endl;
				j--;
			}
			
		case 3:
			do
			{
				cout << "Luku on : " << k << endl;
				k +=10;
			} while (1);

		default:
			exit(-1);
	}
}

void IOhandlerClass::LisaaGetCharreja(int maara)
{
	for (int i = 0; i < maara; i++)
		getchar(); // stdio.h		
}

void IOhandlerClass::LaskeJaTulostaSumma(vector<int> vektori)
{
	int summa = 0;

	for (unsigned int i = 0; i < vektori.size();i++)
	{
		summa += vektori[i];
	}

	cout << "\nLukujen summa on : " << summa << endl;	
}

void IOhandlerClass::LaskeJaTulostaKeskiarvo(vector<int> vektori)
{
	int summa = 0;
	double KA;
	for (unsigned int i = 0; i < vektori.size(); i++)
	{
		summa += vektori[i];
	}


	KA = summa / (double)vektori.size(); // int cast to double
	
	cout << "Lukujen KA on : " << KA << endl;
	


}

void IOhandlerClass::SorttaaVektori(vector<int> *vektori)
{
	for (unsigned int i = 0; i < vektori->size(); i++)
	{
		for (unsigned int j = 0; j < vektori->size(); j++)
		{
			if (vektori->at(j) >= vektori->at(i))
			{
				int tempI, tempJ;
				tempI = vektori->at(i);
				tempJ = vektori->at(j);
				vektori->at(i) = vektori->at(j);
				vektori->at(j) = tempI;
			}
		}
	}
}

void IOhandlerClass::TulostaVektori(vector<int> vektori)
{
	for (int i = 0; i < vektori.size();i++)
		cout << "Sortatun vektorin sisalto : " << vektori[i]<< endl;
}

void IOhandlerClass::TulostaVektorinSuurinJaPieninArvo(vector<int> vektori)
{
	cout << "\n\nPienin luku on : " << vektori[0] << endl;
	cout << "Suurin luku on : " << vektori[vektori.size()-1] << endl;
}

void IOhandlerClass::TestaaTarkkuus()
{
	float luku1 = 1;
	float muutos1[15] = { 0.1f, 0.01f, 0.001f, 0.0001f, 0.00001f, 0.000001f, 0.0000001f, 0.00000001f, 0.000000001f, 0.000000001f, 0.0000000001f, 0.00000000001f, 0.000000000001f, 0.0000000000001f, 0.00000000000001f };

	for (int i = 0; i < 15;i++)
		cout << std::setprecision(25)<< "Float summa on : " << luku1 + muutos1[i] << endl;

	cout << endl;

	double luku2 = 1;
	double muutos2[15] = { 0.1, 0.01, 0.001, 0.0001, 0.00001, 0.000001, 0.0000001, 0.00000001, 0.000000001, 0.000000001, 0.0000000001, 0.00000000001, 0.000000000001, 0.0000000000001, 0.00000000000001 };

	for (int i = 0; i < 15; i++)
		cout << std::setprecision(25)<< "Double summa on : " << luku2 + muutos2[i] << endl;

	cout << endl;

	long double luku3 = 1;
	long double muutos3[15] = { 0.1, 0.01, 0.001, 0.0001, 0.00001, 0.000001, 0.0000001, 0.00000001, 0.000000001, 0.000000001, 0.0000000001, 0.00000000001, 0.000000000001, 0.0000000000001, 0.00000000000001 };

	for (int i = 0; i < 15; i++)
		cout << std::setprecision(25) << "Long double summa on : " << luku3 + muutos3[i] << endl;


}

void IOhandlerClass::LaskeLaskutoimitus()
{
	int valitsin;
	double luku;

	double sini, cosini, tangentti, logaritmi;

	cout << "\nAnna luku : ";
	cin >> luku;


	cout << "\nMita laskua haluat kayttaa ? : ";
	cin >> valitsin;

	cout<<endl;

	// If rakenteella -->

	if(valitsin==1)
	{
		sini = sin(luku);
		cout << "Sini on : " << sini << endl;
	}

	else if(valitsin==2)
	{
		cosini = cos(luku);
		cout << "Cosini on : " << cosini << endl;
	}

	if(valitsin==3)
	{
		tangentti = tan(luku);
		cout << "Tangentti on : " << tangentti << endl;
	}

	if(valitsin==4)
	{
		logaritmi = log(luku);
		cout << "Logaritmi on : " << logaritmi << endl;
	}


	cout<<"\n\n";

	// Switch - case rakenteella -->

	switch (valitsin)
	{
	case 1: // Sini
		sini = sin(luku);
		cout << "Sini on : " << sini << endl;
		break;

	case 2: // Cosini
		cosini = cos(luku);
		cout << "Cosini on : " << cosini << endl;
		break;

	case 3: // Tangentti
		tangentti = tan(luku);
		cout << "Tangentti on : " << tangentti << endl;
		break;

	case 4:	// Logaritmi
		logaritmi = log(luku);
		cout << "Logaritmi on : " << logaritmi << endl;
		break;

	default:
		exit(1);
	}
}

void IOhandlerClass::RokotusFunktio()
{
	int kokonaishinta=0;

	std::string elain1, elain2, elain3, elain4;
	int elainString[4] = {0,0,0,0};

	cout << "Valitse 4 rokotettavaa elainta\n";
	cout << "\n1. Kissa (50e)\n2. Leikattu kissa (25e)\n3. Siamilainen kissa (15e)\n";
	cout << "4. Leikattu siamilainen kissa (35e)\n5. Marsu (ilmainen)\n";
	cout << "Muu luku -> Muu elain ei ole mahdollista rokottaa\n";

	for (int i = 0; i < 4; i++)
	{
		while (elainString[i]<1 || elainString[i]>5)
		{
			cout << "\n\nAnna elain " << i + 1 << " : ";
			cin >> elainString[i];

			if (elainString[i]<1 || elainString[i]>5)
				cout << "\nEI VOIDA ROKOTTAA !! \n\n";
		}

		switch (elainString[i])
		{
			case 1: 
				kokonaishinta += 50;
				break;

			case 2: 
				kokonaishinta += 25;
				break;

			case 3: // Tangentti
				kokonaishinta += 15;
				break;

			case 4:	// Logaritmi
				kokonaishinta += 35;
				break;

			case 5:	// Logaritmi
				kokonaishinta += 0;
				break;

			default:
				kokonaishinta += 0;
				break;
		}	
	}

	cout << "\nRokotuksen kokonaishinta : "<< kokonaishinta;
}

void IOhandlerClass::PolynomiFunktio()
{
	int polynomeja = 0; 
	double summa = 0; // pow returns double !
	
	int kerroin[10], kanta[10], potenssi[10];

	cout << "Ohjelma laskee polynomin arvon result = qX^a + wX^b + ... + pX^j\n";
	cout << "Polynomeja on korkeintaan 10";

	cout << "\n\nKuinka monta polynomia : ";
	cin >> polynomeja;

	

	for (int i = 0; i < polynomeja; i++)
	{
		cout << "\nAnna polynomin "<< i+1 << " kerroin : ";
		cin >> kerroin[i];
		cout << "Anna polynomin " << i+1 << " kanta : ";
		cin >> kanta[i];
		cout << "Anna polynomin " << i+1 << " potenssi : ";
		cin >> potenssi[i];

		summa += pow( (kanta[i]*kerroin[i]) ,potenssi[i]);

	}
	cout << "\nPolynomin arvo : " << summa;
}

void IOhandlerClass::LueVektori(vector<int> *vektori)
{
	cout << "Ohjelma kysyy kayttajalta joukon numeroita (valilla 1-10):\n";
	cout << "ja ilmoittaa keskiarvon seka montako kertaa kukin mahdollinen luku kysyttiin\n\n";
	cout << "Anna lukuja, alueen ylitys keskeyttaa lukujen lukemisen : \n\n";

	int input;

	while (cin >> input && (input>0 && input <11))
		vektori->push_back(input);

	if (vektori->size() == 0)
	{
		cout << "\nTyhja syote !!\n";
		vektori->push_back(0); // Avoid empty vector crash later on
	}

	//else
	//	vektori->pop_back(); // Sentineli pois lopusta
		
}

void IOhandlerClass::TulostaJakauma(vector<int> *vektori)
{
	int lukuja = 0;
	for (int i = 0; i < vektori->size(); i++)
	{
		if (vektori->at(i) == 1)
			lukuja++;
	}
	cout << "\n\nLukuja 1 oli " << lukuja << " kappaletta\n";

	lukuja = 0;
	for (int i = 0; i < vektori->size(); i++)
	{
		if (vektori->at(i) == 2)
			lukuja++;
	}	
	cout << "\nLukuja 2 oli " << lukuja << " kappaletta\n";

	lukuja = 0;
	for (int i = 0; i < vektori->size(); i++)
	{
		if (vektori->at(i) == 3)
			lukuja++;
	}
	cout << "\nLukuja 3 oli " << lukuja << " kappaletta\n";

	lukuja = 0;
	for (int i = 0; i < vektori->size(); i++)
	{
		if (vektori->at(i) == 4)
			lukuja++;
	}
	cout << "\nLukuja 4 oli " << lukuja << " kappaletta\n";

	lukuja = 0;
	for (int i = 0; i < vektori->size(); i++)
	{
		if (vektori->at(i) == 5)
			lukuja++;
	}
	cout << "\nLukuja 5 oli " << lukuja << " kappaletta\n";

	lukuja = 0;
	for (int i = 0; i < vektori->size(); i++)
	{
		if (vektori->at(i) == 6)
			lukuja++;
	}
	cout << "\nLukuja 6 oli " << lukuja << " kappaletta\n";

	lukuja = 0;
	for (int i = 0; i < vektori->size(); i++)
	{
		if (vektori->at(i) == 7)
			lukuja++;
	}
	cout << "\nLukuja 7 oli " << lukuja << " kappaletta\n";

	lukuja = 0;
	for (int i = 0; i < vektori->size(); i++)
	{
		if (vektori->at(i) == 8)
			lukuja++;
	}
	cout << "\nLukuja 8 oli " << lukuja << " kappaletta\n";

	lukuja = 0;
	for (int i = 0; i < vektori->size(); i++)
	{
		if (vektori->at(i) == 9)
			lukuja++;
	}
	cout << "\nLukuja 9 oli " << lukuja << " kappaletta\n";

	lukuja = 0;
	for (int i = 0; i < vektori->size(); i++)
	{
		if (vektori->at(i) == 10)
			lukuja++;
	}
	cout << "\nLukuja 10 oli " << lukuja << " kappaletta\n";
}

string IOhandlerClass::LueString(string* stringi)
{
	string etunimi, sukunimi, kokonimi;
	cout << "Anna etunimi : ";
	getline(cin, etunimi);

	cout << "\n\nAnna sukunimi : ";
	getline(cin, sukunimi);


	KatenoiStringJaVertaa(&etunimi, &sukunimi, &kokonimi);

	return kokonimi;
}

void IOhandlerClass::KatenoiStringJaVertaa(string* osa1, string* osa2, string* kokonaisuus)
{
	cout <<"\n\nEtunimen pituus : "<<osa1->size();
	cout <<"\n\nSukunimen pituus : "<<osa2->size();

	*kokonaisuus = *osa1 +" "+ *osa2;

	cout << "\n\n\nKokonainen, yhdistetty nimi : " << *kokonaisuus << endl;

	if (osa1->compare(*osa2) != 0)
		cout <<endl<< *osa1 << " is not " << *osa2 << '\n';
	else
		cout << endl << *osa1 << " is " << *osa2 << '\n';
}

int IOhandlerClass::LaskeJaTulostaStringinKoko(string merkkijono)
{
	int koko;
	koko = merkkijono.length();

	cout << "\n\nNimen pituus : " << koko << endl;

	return koko;
}

int IOhandlerClass::LaskeJaTulostaStringinKoko(string merkkijono,bool valitsin)
{
	int koko;
	koko = merkkijono.length();

	//cout << "\n\nMerkkijonon pituus : " << koko << endl;

	return koko;
}

void IOhandlerClass::LuejaLaskeLaskutoimitus(string* merkkijono)
{
	const double MAXLUKU = 600000;

	int operaatiota =0;

	cout << "\nAnna laskutoimitus (max "<<MAXLUKU<<" ) : ";

	while (!merkkijono->length()) // Pelkkä enter ei kelpaa
		getline(cin, *merkkijono);


	string backUpMerkkijono=*merkkijono; // Alkuperäinen merkkijono talteen

	operaatiota=count_MinusChars(*merkkijono)+count_PlusChars(*merkkijono); // Laske operaatioiden määrä

	int plus,neg;

	plus=count_PlusChars(*merkkijono); // Plussia merkkijonossa
	neg=count_MinusChars(*merkkijono); // Miinuksia merkkijonossa



	//int koko = LaskeJaTulostaStringinKoko(*merkkijono,true);

	double summa=0;


	unsigned aloitusKohta = 0;
	unsigned pos1 = merkkijono->find("-");
	unsigned pos2 = merkkijono->find("+");
	

	if(pos1>(int)MAXLUKU && pos2 >(int)MAXLUKU)  // Vain yksi plus luku syötetty
	{
		cout << "\n\nLaskun tulos : " << summa + std::stod(*merkkijono); // stod on to double
		return;
	}



	if(operaatiota==1 && pos1==0)  // Vain yksi miinus luku syötetty
	{
		cout << "\n\nLaskun tulos : " << (summa + std::stod(*merkkijono));
		return;
	}


	// Kax tai enemmän operaatioita -->
	
	bool eka = true;
	
	*merkkijono=backUpMerkkijono;

	for(int i=0;i<operaatiota;i++) // Operaatioita on -2-2 kaksi !! for luuppaa pari kertaa mutta vertailut ja pos1==pos2 --> toimii
	{
		if(eka && pos1==0) // Eka luku on negatiivinen
		{
			/*	string sluku = merkkijono->substr(aloitusKohta, pos1+1);
 				double dluku = std::stod(sluku);
				summa=dluku;
				*merkkijono=sluku;*/

			*merkkijono=merkkijono->substr(1); // Miinus merkki pois edestä

			

			pos1 = merkkijono->find("-");
			pos2 = merkkijono->find("+");

			if (pos1 < pos2)
			{
				string sluku = merkkijono->substr(0,pos1); // Hae substring tietyllä välillä
 				double dluku = std::stod(sluku);  // ParseDouble
				summa=dluku;		
			}

			else // Turha ??? mutten uskalla poistaa enää kun toimii
			{
				string sluku = merkkijono->substr(0,pos2);
 				double dluku = std::stod(sluku);
				summa=dluku;
			}

			summa*=-1;
			eka=!eka;
		}

		if (pos1 > pos2)  // +
		{
			// + ekana
			
			if(eka) // Ekaluku lähtökohdaksi
			{
				eka = !eka;
				plus++; // Eka "näkymätön" plus merkki
				string sluku = merkkijono->substr(aloitusKohta, pos2);
 				double dluku = std::stod(sluku);
				summa=dluku;
				//*merkkijono=backUpMerkkijono;
			}

			*merkkijono = merkkijono->substr(pos2+1);     // get from "+" to the end

			string sluku = merkkijono->substr(aloitusKohta, pos2);
			double dluku = std::stod(sluku);

			summa+=dluku;
		
		}

		if (pos1 < pos2) // -
		{
			// - ekana	

			if(eka) // Ekaluku lähtökohdaksi
			{
				eka = !eka;

				string sluku = merkkijono->substr(aloitusKohta, pos1);
 				double dluku = std::stod(sluku);
				summa=dluku;

				//*merkkijono=backUpMerkkijono;
			}
		
			*merkkijono = merkkijono->substr(pos1+1);     // get from "-" to the end

			string sluku = merkkijono->substr(aloitusKohta, pos1);
 			double dluku = std::stod(sluku);

			summa-=dluku;

		}

		pos1 = merkkijono->find("-");
		pos2 = merkkijono->find("+");
	}
		cout << "\n\nLaskun tulos : " << summa;

		cout << "\n\nNegatiivisia lukuja : " << neg;
		cout << "\nPositiivisia lukuja : " << plus;

}

int IOhandlerClass::count_PlusChars(string s) 
{
  int count = 0;

  for (int i = 0; i < s.size(); i++)
    if (s[i] == '+') count++;

  return count;
}

int IOhandlerClass::count_MinusChars(string s) 
{
  int count = 0;

  for (int i = 0; i < s.size(); i++)
    if (s[i] == '-') count++;

  return count;
}

void IOhandlerClass::TulostaArraystaNimet(void)
{
	int valinta;
	char array[5][5]=
	{
		{'P','e','k','k','a'},
		{'K','a','l','l','e'},
		{'K','i','r','s','i'},
		{'V','i','l','l','e'},
		{'M','a','i','j','a'}
	};



	//multiArray[3][4] =
	//{
	//	{11,12,13,14},
	//	{21,22,23,24},
	//	{31,32,33,34}
	//};



	cout << "\nValitse tulostettava nimi : ";
	cin >> valinta;

	

	switch(valinta)
	{
		case(1):
			cout << "\nNimi on : ";
			for(int i=0;i<5;i++)
				cout<< array[0][i];

			break;

		case(2):
			cout << "\nNimi on : ";
			for(int i=0;i<5;i++)
				cout<< array[1][i];

			break;
				
		case(3):
			cout << "\nNimi on : ";
			for(int i=0;i<5;i++)
				cout<< array[2][i];

			break;
			
		case(4):
			cout << "\nNimi on : ";
			for(int i=0;i<5;i++)
				cout<< array[3][i];

			break;

		case(5):
			cout << "\nNimi on : ";
			for(int i=0;i<5;i++)
				cout<< array[4][i];

			break;

		default:
			cout << "\nHuono syote !\n";
			break;
	}
}

void IOhandlerClass::SummaaMatriisit(int matriisi[3][3],int matriisi2[3][3])
{
	cout << "Matriisien summa on : \n\n"; 

	for (int i = 0; i < 3; i++)
	{
		//cout << matriisi[i] << endl;

		for (int j = 0; j < 3; j++)
		{
			cout << matriisi[i][j]+matriisi2[i][j] << endl;
		}
	}

	cout<<endl;
}

void IOhandlerClass::MiinustaMatriisit(int matriisi[3][3],int matriisi2[3][3])
{
	cout << "Matriisien erotus on : \n\n"; 

	for (int i = 0; i < 3; i++)
	{
		//cout << matriisi[i] << endl;

		for (int j = 0; j < 3; j++)
		{
			cout << matriisi[i][j]-matriisi2[i][j] << endl;
		}
	}

	cout<<endl;
}

void IOhandlerClass::KerroMatriisit(int matriisi[3][3],int matriisi2[3][3])
{
	cout << "Matriisien tulo on : \n\n"; 

	for (int i = 0; i < 3; i++)
	{
		//cout << matriisi[i] << endl;

		for (int j = 0; j < 3; j++)
		{
			cout << matriisi[i][j]*matriisi2[i][j] << endl;
		}
	}

	cout<<endl;
}

void IOhandlerClass::ArvoLuku(int* luku)
{
	srand( time(0) ); // setting the seed value

	*luku=GetRandomNumber(1,10);
	//for (int i=0; i < 10; i++)
	//cout << *luku << endl;
}

int IOhandlerClass::GetRandomNumber(int nLow, int nHigh)
{
	return (rand() % (nHigh - nLow + 1)) + nLow;
}

void IOhandlerClass::KysyLukuja(int* luku)
{
	int arvattuLuku=0;
	cout << "\nArvaa luku (1..10) : ";

	//cin >> arvattuLuku;

	//// Alphanumerical input
	//// http://stackoverflow.com/questions/13212043/integer-input-validation-how
	//if (cin >> arvattuLuku)
	//{
	//	// It worked (input is now in a good state)
	//}
	//
	//else
	//{
	//	// input is in a bad state.
	//	// So first clear the state.
	//	cin.clear();

	//	// Now you must get rid of the bad input.
	//	// Personally I would just ignore the rest of the line
	//	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	//	// now that you have reset the stream you can go back and try and read again.
	//}


	while(arvattuLuku<1 || arvattuLuku >10)
	{
		
		if (cin >> arvattuLuku)
		{
			if(arvattuLuku<1 || arvattuLuku >10)
			{
				cout<<"\nHuono syote !\n";
				cout<<"\nAnna uusi luku : ";
			}
		}
	
		else
		{
			cin.clear(); // Clear state
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Flush the input

			cout<<"\nHuono syote !\n";
			cout<<"\nAnna uusi luku : ";

		}
	}

	while(arvattuLuku != *luku)
	{
		if(arvattuLuku<*luku)
			cout <<"\n\nLiian pieni luku\n"; 

		else
			cout <<"\n\nLiian suuri luku\n"; 

		if(arvattuLuku+1 == *luku || arvattuLuku-1 == *luku)
			cout <<"\n\nPolttaa jo !";

		cout <<"\n\nVaara luku. Anna uusi : "; 
			
		if (cin >> arvattuLuku)
		{
			// OK !
		}
	
		else
		{
			cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << "\nEi numeerinen syote !\n";
		}

	}
	cout <<"\n\nOikea luku !!!\n"; 
}

void IOhandlerClass::ArvoVarsinaisetNumerot(int* varsinaisetNumerot)
{	
	srand( time(0) ); // setting the seed value

	for(int i=0;i<7;i++)
	{
		varsinaisetNumerot[i]=GetRandomNumber(1,39);

		//cout << "VarsinaisetNumerot : " << varsinaisetNumerot[i]<< endl;	
	}

	cout << endl;

	for(int i=0;i<7;i++) // Poista duplikaatit
	{
		for(int j=0;j<i;j++)
		{
			while(varsinaisetNumerot[i]==varsinaisetNumerot[j])
			{
				varsinaisetNumerot[i]=GetRandomNumber(1,39);
			}
	
		}
	}

	for(int i=0;i<7;i++)
	{
		cout << "Arvotut varsinaisetNumerot : " << varsinaisetNumerot[i]<< endl;	// Tulosta rivi
	}
}

int IOhandlerClass::OikeitaVastauksia(int* arvotutLuvut,int* veikkausRivi)
{
	int oikeita=0;

	for(int i=0;i<7;i++)
	{
		for(int j=0;j<7;j++)
		{
			if(arvotutLuvut[i]==veikkausRivi[j])
				oikeita++;
		}
	}
	return oikeita;
}

int IOhandlerClass::OikeitaVastauksia(int* arvotutLuvut,int* veikkausRivi, bool valitsin)
{
	int oikeita=0;

	for(int i=0;i<2;i++)
	{
		for(int j=0;j<7;j++)
		{
			if(arvotutLuvut[i]==veikkausRivi[j])
				oikeita++;
		}
	}
	return oikeita;
}

void IOhandlerClass::ArvoLisaNumerot(int* lisaNumerot)
{
	//srand( time(0) ); // setting the seed value

	int j=0;

	for(int i=0;i<2;i++)
	{
		lisaNumerot[i]=GetRandomNumber(1,39);	
	}

	while(lisaNumerot[j]==lisaNumerot[j+1])
		lisaNumerot[j]=GetRandomNumber(1,39);

	cout<<"\nLisanumerot : "<<lisaNumerot[0]<<" ja "<<lisaNumerot[1]<<endl; 
}

void IOhandlerClass::TulostaArraystaNimet2(void)
{
	int valinta;

	const int sizeX=5;
	const int sizeY=5;

	char** ary = new char*[sizeX]; // Uusi viiden pointterin taulukko

	for(int i = 0; i < sizeX; ++i)
		ary[i] = new char[sizeY]; // Jokainen pointteri osoittamaan uuden taulukon ekaan alkioon
	
	strcpy(ary[0],"Pekka");
	strcpy(ary[1],"Kalle");
	strcpy(ary[2],"Kirsi");
	strcpy(ary[3],"Ville");
	strcpy(ary[4],"Maija");



	//int valinta;
	//char array[5][5]=
	//{
	//	{'P','e','k','k','a'},
	//	{'K','a','l','l','e'},
	//	{'K','i','r','s','i'},
	//	{'V','i','l','l','e'},
	//	{'M','a','i','j','a'}
	//};




	cout << "\nValitse tulostettava nimi : ";
	cin >> valinta;

	

	switch(valinta)
	{
		case(1):
			cout << "\nNimi on : ";
			for(int i=0;i<5;i++)
				cout<< ary[0][i];

			break;

		case(2):
			cout << "\nNimi on : ";
			for(int i=0;i<5;i++)
				cout<< ary[1][i];

			break;
				
		case(3):
			cout << "\nNimi on : ";
			for(int i=0;i<5;i++)
				cout<< ary[2][i];

			break;
			
		case(4):
			cout << "\nNimi on : ";
			for(int i=0;i<5;i++)
				cout<< ary[3][i];

			break;

		case(5):
			cout << "\nNimi on : ";
			for(int i=0;i<5;i++)
				cout<< ary[4][i];

			break;

		default:
			cout << "\nHuono syote !\n";
			break;
	}

	delete ary;  // Muistin vapautus
}

double IOhandlerClass::nelio(double Xinput)
{
	return Xinput*=Xinput;
}

void IOhandlerClass::sort(Person *list, int NumberOfPersons)
{ // sort list using bubble sort method (page 96):
	int a, b;
	
	for (a=1; a<NumberOfPersons; a++)
	{
		for (b=NumberOfPersons-1; b>=a; b--)
		{
			if (compare(list+b-1, list+b) > 0)
			{
				swap(list+b-1, list+b);
			}
		}
	}
}

int IOhandlerClass::compare (Person *a, Person *b)
{
	string nimi1=a->name;
	string nimi2=b->name;

	int vertailunTulos = a->name.compare(b->name);

	return vertailunTulos;
}

void IOhandlerClass::swap (Person *a, Person *b)
{
	Person *temp=new Person[1];
	*temp=*a;
	*a=*b;
	*b=*temp;
	delete[] temp;
}
