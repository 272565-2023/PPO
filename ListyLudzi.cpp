#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include "ListyLudzi.h"

using namespace std;

void Lista::dodajOsobeDoListy(shared_ptr<Osoba> osoba)
{
	listaOsob.push_back(osoba);
}

void Lista::wyswietlListe()
{
	for (int i=0; i<listaOsob.size(); i++)
	{
		cout<< listaOsob[i]->opis()<< endl;
	}
}

void Lista::wyswietlStudentow()
{
	for (int i=0; i<listaOsob.size(); i++)
	{
		if(listaOsob[i]->getType()=="Student")
		cout<< listaOsob[i]->opis();
	}
}

void Lista::wyswietlPracownikow()
{
	for (int i=0; i<listaOsob.size(); i++)
	{
		if(listaOsob[i]->getType()=="Pracownik")
		cout<< listaOsob[i]->opis();
	}
}

void Lista::zapiszDoPliku(string nazwaPliku)
{
	ofstream plik(nazwaPliku);
	
	if(plik.is_open())
	{
		for(int i=0; i<listaOsob.size(); i++)
		{
			plik<< listaOsob[i]->opis()<< endl;
		}
		plik.close();
		cout<<"Zapisano liste do pliku";
	}
	else
	{
		cout<<"Blad przy otwieraniu pliku";
	}
}


void Lista::odczytajZPliku(string nazwaPliku) 
{
        ifstream plik(nazwaPliku);
        string linia;

        while (getline(plik, linia)) 
		{
            stringstream ss(linia);
            string typ;
            ss >> typ;
            if (typ == "Student") {
                string im, na, pe, nrA;
                ss >> im >> na >> pe >> nrA;
                auto student = make_shared<Student>(im, na, pe, nrA);
                dodajOsobeDoListy(student);
            }
            else if (typ == "Pracownik") {
                string im, na, pe, stan, nrK;
                ss >> im >> na >> pe >> stan >> nrK;
                auto pracownik = make_shared<Pracownik>(im, na, pe, stan, nrK);
                dodajOsobeDoListy(pracownik);
            }
        }

}



