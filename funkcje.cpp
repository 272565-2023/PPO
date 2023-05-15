#include <iostream>
#include <string>
#include "funkcje.h"

using namespace std;

string wprowadzPesel() //funckja sprawdza czy pesel jest poprawny
{
	string peselProbny;
	bool czyPeselJestPoprawny;
	
	cout<<"Podaj pesel: ";
	cin>> peselProbny;
	
	while(peselProbny.length()!=11)
	{
		cout<<"Wprowadzony pesel jest zlej dlugosci (pesel sklada sie z 11 cyfr)" <<endl;
		cout<<"Wprowadz pesel ponownie: "; cin>> peselProbny;
	}
	
	do
	{
		for (int i=0; i<peselProbny.length(); i++)
		{
			if(!isdigit(peselProbny[i]))
			{
				czyPeselJestPoprawny=0;
				break;
			}
			else
			{
				czyPeselJestPoprawny=1;
			}
		}
		
		if(!czyPeselJestPoprawny)
		{
			cout<<"Wprowadzaono bledny pesel, pesel sklada sie z 11 CYFR" <<endl;
			cout<<"Wprowadz pesel ponownie: "; cin>> peselProbny;
		}
	} while(!czyPeselJestPoprawny);
	
	return peselProbny;
}


string sprawdzPesel(string peselProbny) //funckja sprawdza czy pesel jest poprawny
{
	
	bool czyPeselJestPoprawny;
	
	while(peselProbny.length()!=11)
	{
		cout<<"Wprowadzony pesel jest zlej dlugosci (pesel sklada sie z 11 cyfr)" <<endl;
		cout<<"Wprowadz pesel ponownie: "; cin>> peselProbny;
	}
	
	do
	{
		for (int i=0; i<peselProbny.length(); i++)
		{
			if(!isdigit(peselProbny[i]))
			{
				czyPeselJestPoprawny=0;
				break;
			}
			else
			{
				czyPeselJestPoprawny=1;
			}
		}
		
		if(!czyPeselJestPoprawny)
		{
			cout<<"Wprowadzaono bledny pesel, pesel sklada sie z 11 CYFR" <<endl;
			cout<<"Wprowadz pesel ponownie: "; cin>> peselProbny;
		}
	} while(!czyPeselJestPoprawny);
	
	return peselProbny;
}


int podajLiczbeCalk () //funckja sprawdza czy uzytkownik wprowadzil int'a
{
	string napisTest;
	int zwracanaLiczba;
	bool czyJestLiczba;
	
	cin>>napisTest;
	
	do
	{
		for(int i=0; i<napisTest.length(); i++)
		{
			if(!isdigit(napisTest[i]))
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
			zwracanaLiczba=stoi(napisTest);
		}
		else
		{
			cout<< "Wprowadzono nieprawidlowa wartosc! Wprowadz ponownie (masz podac liczbe calkowita):";
			cin>> napisTest;
		}
	} while (!czyJestLiczba);
	
	return zwracanaLiczba;
}

int zwracaLiczbeCalk (string napisTest)
{
	int zwracanaLiczba;
	bool czyJestLiczba;
	
	do
	{
		for(int i=0; i<napisTest.length(); i++)
		{
			if(!isdigit(napisTest[i]))
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
			zwracanaLiczba=stoi(napisTest);
		}
		else
		{
			cout<< "Wprowadzono nieprawidlowa wartosc! Wprowadz ponownie (masz podac liczbe calkowita):";
			cin>> napisTest;
		}
	} while (!czyJestLiczba);
	
	return zwracanaLiczba;
}

