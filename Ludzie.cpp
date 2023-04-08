#include <iostream>
#include <string>
#include "Ludzie.h"
#include "funkcje.h"

using namespace std;

void Osoba::stworzOsobe()
{
	cout<< "Podaj imie: "; cin>> imie;
	cout<< "Podaj nazwisko: "; cin>> nazwisko;
	pesel = wprowadzPesel();
}

void Osoba::wyswietlDaneOsoby()
{
	cout<< "Imie: "<< imie<< " ";
	cout<< "Nazwisko: " << nazwisko<< " ";
	cout<< "Pesel: " << pesel<< " ";
}

void Student::stworzStudenta()
{
	Osoba::stworzOsobe();
	cout<< "Podaj numer albumu: "; nrAlbumu=zwracaLiczbeCalk();
}

void Student::wyswietlDaneStudenta()
{
	Osoba::wyswietlDaneOsoby();
	cout<< "Numer albumu: "<< nrAlbumu;
}

void Pracownik::stworzPracownika()
{
	Osoba::stworzOsobe();
	cout<< "Podaj stanowisko: "; cin>> stanowisko;
	cout<< "Podaj numer karty pracowniczej: "; nrKarty=zwracaLiczbeCalk();
}

void Pracownik::wyswietlDanePracownika()
{
	Osoba::wyswietlDaneOsoby();
	cout<< "Stanowisko: "<< stanowisko<< " ";
	cout<< "Numer karty: "<< nrKarty;
}






