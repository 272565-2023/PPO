#include <iostream>
#include "ui.h"

using namespace std;


void dodaj(Student *tab, int indeks)
{
	cout<< "Podaj indeks studenta: ";
	cin>> tab[indeks].id;
	
	cout<< "Podaj imie studenta: ";
	cin>> tab[indeks].imie;
	
	cout<< "Podaj nazwisko studenta: ";
	cin>> tab[indeks].nazwisko;
}

void drukuj(Student *tab, int size)
{
	for(int i=0; i<size; i++)
	{
		cout<< "Student "<< tab[i].id<< " "<< tab[i].imie<< " "<< tab[i].nazwisko;
		cout<<endl;
	}
} 
