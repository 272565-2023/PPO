#include <iostream>
#include <vector>
#include <memory>
#include "Ludzie.h"

using namespace std;


class Lista
{
	vector <shared_ptr<Osoba>> listaOsob;
	
	vector<Student> listaStudentow;
	vector<Pracownik> listaPracownikow;
	
	public:	
	void dodajOsobeDoListy(shared_ptr<Osoba> osoba);
	void wyswietlListe();
	void wyswietlStudentow();
	void wyswietlPracownikow();
	
	void zapiszDoPliku(string nazwaPliku);	
	void odczytajZPliku(string nazwaPliku);
		
};

