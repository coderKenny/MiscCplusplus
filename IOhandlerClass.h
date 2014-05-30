//
// Apuluokan hederitiedosto.
//

#pragma once

#define _VECTOR

#include "Kenny.h"

using std::vector;
using std::string;


class IOhandlerClass
{
public:
	// Funktioiden prototyypit -->
	IOhandlerClass();
	~IOhandlerClass();

	int LueMerkkeja();

	void Luuppaa(int kierroksia);
	void Luuppaa(int kierroksia,bool valitsin);
	void LisaaGetCharreja(int maara);
	void LoopForever();
	int LueMerkki();
	void TestaaTarkkuus();
	void LaskeLaskutoimitus();
	void RokotusFunktio();
	void PolynomiFunktio();

	void LaskeJaTulostaSumma(vector<int> vektori);
	void LaskeJaTulostaKeskiarvo(vector<int> vektori);
	void SorttaaVektori(vector<int> *vektori);
	void TulostaVektori(vector<int> vektori);
	void TulostaVektorinSuurinJaPieninArvo(vector<int> vektori);

	void LueVektori(vector<int> *vektori);
	void TulostaJakauma(vector<int> *vektori);
	string LueString(string* stringi);
	void KatenoiStringJaVertaa(string* osa1, string* osa2, string* kokonaisuus);

	int LaskeJaTulostaStringinKoko(string merkkijono);

	void LuejaLaskeLaskutoimitus(string* merkkijono);

	int LaskeJaTulostaStringinKoko(string merkkijono, bool valitsin);

	int count_PlusChars(string s);

	int count_MinusChars(string s);

	void TulostaArraystaNimet(void);

	void SummaaMatriisit(int matriisi[3][3],int matriisi2[3][3]);
	void MiinustaMatriisit(int matriisi[3][3],int matriisi2[3][3]);
	void KerroMatriisit(int matriisi[3][3],int matriisi2[3][3]);

	void ArvoLuku(int* luku);

	int GetRandomNumber(int nLow, int nHigh);

	void KysyLukuja(int* luku);

	void ArvoVarsinaisetNumerot(int* varsinaisetNumerot);

	int OikeitaVastauksia(int* arvotutLuvut,int* veikkausRivi);

	void ArvoLisaNumerot(int* lisaNumerot);

	int OikeitaVastauksia(int* arvotutLuvut,int* veikkausRivi, bool valitsin);

	void TulostaArraystaNimet2(void);

	double nelio(double Xinput);

	void sort(Person * list, int NumberOfPersons);

	int compare (Person *a, Person *b);

	void swap (Person *a, Person *b);

};
