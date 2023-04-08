#include <iostream>

using namespace std;

class Osoba
{
 	string imie, nazwisko;
	string pesel;	
	
	public:
	void stworzOsobe();
	void wyswietlDaneOsoby();
	
};

class Student :public Osoba
{
	int nrAlbumu;
	
	public:
	void stworzStudenta();
	void wyswietlDaneStudenta();
};

class Pracownik :public Osoba
{
	string stanowisko;
	int nrKarty;
	
	public:
	void stworzPracownika();
	void wyswietlDanePracownika();
};


