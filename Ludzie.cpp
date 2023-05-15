#include <iostream>
#include <string>
#include "Ludzie.h"
#include "funkcje.h"

using namespace std;

//////////////////OSOBA
Osoba::Osoba(string i, string n, string p)
{
	imie=i;
	nazwisko=n;
	pesel=sprawdzPesel(p);
}

void Osoba::setImie(string i)
{
	imie=i;
}

void Osoba::setNazwisko(string n)
{
	nazwisko=n;
}

void Osoba::setPesel(string p)
{
	pesel=sprawdzPesel(p);
}

string Osoba::getImie()
{
	return imie;
}

string Osoba::getNazwisko()
{
	return nazwisko;
}

string Osoba::getPesel()
{
	return pesel;
}

string Osoba::opis()
{
		return imie+" "+nazwisko+" "+pesel;	
}






/////////////STUDENT
Student::Student(string i, string n, string p, string nrA, string t):Osoba(i, n, p)
{
    nrAlbumu=zwracaLiczbeCalk(nrA);
}


void Student::setNrAlbumu(string nrA)
{
	nrAlbumu=zwracaLiczbeCalk(nrA);
}

int Student::getNrAlbumu()
{
	return nrAlbumu;
}

string Student::getId()
{
	return to_string(nrAlbumu);
}

string Student::getType()
{
	return "Student";
}

string Student::opis()
{
	return Osoba::opis()+" "+to_string(nrAlbumu);
}




///////////////PRACOWNIK
Pracownik::Pracownik(string i, string n, string p, string stan, string nrK, string t):Osoba(i, n, p)
{
	stanowisko=stan;
	nrKarty=zwracaLiczbeCalk(nrK);	
}

void Pracownik::setStanowisko(string stan)
{
	stanowisko=stan;
}

void Pracownik::setNrKarty(string nrK)
{
	nrKarty=zwracaLiczbeCalk(nrK);
}

int Pracownik::getNrKarty()
{
	return nrKarty;
}

string Pracownik::getStanowisko()
{
	return stanowisko;
}

string Pracownik::getId()
{
	return to_string(nrKarty);
}

string Pracownik::getType()
{
	return "Pracownik";
}

string Pracownik::opis()
{
	return Osoba::opis()+" "+stanowisko+" "+to_string(nrKarty);
}








