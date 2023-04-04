#include <iostream>
#include <string>
#include "ui.h"

using namespace std;

void Osoba::stworzOsobe()
{
	cout<< "Podaj imie: "; cin>> imie;
	cout<< "Podaj nazwisko: "; cin>> nazwisko;
	cout<< "Podaj pesel: "; cin>> pesel;
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
	cout<< "Podaj numer albumu: "; cin>> nrAlbumu;
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
	cout<< "Podaj numer karty pracowniczej: "; cin>> nrKarty;
}

void Pracownik::wyswietlDanePracownika()
{
	Osoba::wyswietlDaneOsoby();
	cout<< "Stanowisko: "<< stanowisko<< " ";
	cout<< "Numer karty: "<< nrKarty;
}





/*
void Studenci::dodaj(int indeks) //dodaje studentów do listy
{
	string idTest;
	cout<<"Podaj nr albumu studenta: ";
	cin>> idTest;
	
	bool czyJestLiczba;
	do
	{
		for(int i=0; i<idTest.length(); i++)
		{
			if(!isdigit(idTest[i]))
			{
				czyJestLiczba = 0;
				break;
			}
			else
			{
				czyJestLiczba = 1;
			}
		}
		if(czyJestLiczba)
		{
			nrAlbumu=stoi(idTest);
		}
		else
		{
			cout<< "Wprowadzono nieprawidlowa wartosc! Podaj nr albumu studenta ponownie:";
			cin>> idTest;
		}
	} while (!czyJestLiczba); //mechanizm kontroli czy uzytkownik wprowadza liczbe
	
	
	cout<< "Podaj imie studenta: ";
	cin>> imie;
	
	
	cout<< "Podaj nazwisko studenta: ";
	cin>> nazwisko;
	
	cout<<"Podaj pesel studenta";
	cin>> pesel;
}

void Studenci::drukuj(int rozmiar) //wyswietla liste studentow
{
	cout<<"Wyswietlanie listy studentow \n";
	for(int i=0; i<rozmiar; i++)
	{
		cout<< "Student "<< nrAlbumu<< " "<< imie<< " "<< nazwisko << " "<< pesel;
		cout<<endl;
	}
} 
*/


 
/* //mechanizm kontroli czy uzytkownik wprowadza liczbe
string idTest;
	cout<<"Podaj nr albumu studenta: ";
	cin>> idTest;
	
	bool czyJestLiczba;
	do
	{
		for(int i=0; i<idTest.length(); i++)
		{
			if(!isdigit(idTest[i]))
			{
				czyJestLiczba = 0;
				break;
			}
			else
			{
				czyJestLiczba = 1;
			}
		}
		if(czyJestLiczba)
		{
			nrAlbumu=stoi(idTest);
		}
		else
		{
			cout<< "Wprowadzono nieprawidlowa wartosc! Podaj nr albumu studenta ponownie:";
			cin>> idTest;
		}
	} while (!czyJestLiczba); //mechanizm kontroli czy uzytkownik wprowadza liczbe
 */
