#include <iostream>
#include <string>
#include "ui.h"

using namespace std;


void Student::dodaj(int indeks) //dodaje studenta do listy
{
	string idTest;
	cout<<"Podaj id studenta: ";
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
			id=stoi(idTest);
		}
		else
		{
			cout<< "Wprowadzono nieprawidlowa wartosc! Podaj id studenta ponownie:";
			cin>> idTest;
		}
	} while (!czyJestLiczba); //mechanizm kontroli czy uzytkownik wprowadza liczbe
	
	
	cout<< "Podaj imie studenta: ";
	cin>> imie;
	
	
	cout<< "Podaj nazwisko studenta: ";
	cin>> nazwisko;
}

void Student::drukuj(int size) //wyswietla liste studentow
{
	cout<<"Wyswietlanie listy studentow \n";
	for(int i=0; i<size; i++)
	{
		cout<< "Student "<< id<< " "<< imie<< " "<< nazwisko;
		cout<<endl;
	}
} 
