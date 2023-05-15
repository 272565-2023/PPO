#include <iostream>
#include "interfejs.h"

using namespace std;

class Osoba 
{
 	string imie, nazwisko;
	string pesel;	
	
	public:
	Osoba(string ="Jan", string ="Kowalski", string ="12345678910");	
		
	void setImie(string i);
	void setNazwisko(string n);
	void setPesel(string p);
	
	string getImie();
	string getNazwisko();
	string getPesel();
	
	virtual string getId() =0;
	virtual string getType() =0;
	virtual string opis();
	
};



class Student :public Osoba
{
	int nrAlbumu;

	
	public:
	Student(string i="Jan", string n="Kowalski", string p="12345678910", string nrA="7899", string t="student");
	
	void setNrAlbumu(string nrA);
	
	int getNrAlbumu();
	
	virtual string getId();
	virtual string getType();
	
	virtual string opis();

};



class Pracownik :public Osoba
{
	string stanowisko;
	int nrKarty;
	
	public:
	Pracownik(string i="Jan", string n="Kowalski", string p="012345678910", string stan="Brak", string nrK="98", string t="pracownik");
	
	void setStanowisko(string stan);
	void setNrKarty(string nrK);
	
	string getStanowisko();
	int getNrKarty();
	
	virtual string getId();
	virtual string getType();
	
	virtual string opis();

};


