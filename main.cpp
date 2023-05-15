#include <iostream>
#include <cstdlib>
#include "ListyLudzi.h"
#include "funkcje.h"

using namespace std;

int main()
{	
	bool czyKontynuowac=1;
	
	Lista listaPWR;
	
	do 
	{
		cout << "MENU" <<endl <<"Wybierz opcje" <<endl;
		cout << "1.Dodaj studentow" <<endl
		<<"2.Wyswietl studentow" <<endl
		<<"3.Dodaj pracownikow" <<endl
		<<"4.Wyswietl pracownikow" <<endl
		<<"5.Wyswietl liste wszystkich osob" <<endl
		<<"6.Zapisz liste do pliku" <<endl
		<<"7.Odczytaj liste z pliku" <<endl
		<<"8.Wyjscie" <<endl
		<<"9.Wyczysc konsole" <<endl;
		int opcja;
		opcja=podajLiczbeCalk();
		
		switch (opcja)
		{
			case 1:
			{
				cout<< "Ile studentow chcesz dodac?";
				int ile;
				ile=podajLiczbeCalk();
				
				for(int i=0; i<ile; i++)
				{	
					string im, na, pe, nrA;
					cout<<"Podaj imie: "; cin>>im;
					cout<<"Podaj nazwisko: "; cin>>na;
					cout<<"Podaj pesel: "; cin>>pe;
					cout<<"Podaj nrA: "; cin>>nrA;
					auto xyz=make_shared<Student>(im, na, pe, nrA);
					listaPWR.dodajOsobeDoListy(xyz);
					cout<<endl;
				}
				break;
			}
				
			case 2:
			{
				listaPWR.wyswietlStudentow();
				break;
			}
			
			case 3:
			{
				cout<< "Ile pracownikow chcesz dodac?";
				int ile;
				ile=podajLiczbeCalk();
				
				for(int i=0; i<ile; i++)
				{
					string im, na, pe, stan, nrK;
					cout<<"Podaj imie: "; cin>>im;
					cout<<"Podaj nazwisko: "; cin>>na;
					cout<<"Podaj pesel: "; cin>>pe;
					cout<<"Podaj stanowisko: "; cin>>stan;
					cout<<"Podaj nrK: "; cin>>nrK;
					auto xyz=make_shared<Pracownik>(im, na, pe, stan, nrK);
					listaPWR.dodajOsobeDoListy(xyz);
					cout<<endl;
				}
				break;
			}
			
			case 4:
			{
				listaPWR.wyswietlPracownikow();
				break;
			}
			
			case 5:
			{
				listaPWR.wyswietlListe();
				break;
			}
			
			case 6:
			{
				string nazwaPliku;
				cout<<"Podaj nazwe pliku: "; cin>>nazwaPliku;
				listaPWR.zapiszDoPliku(nazwaPliku);
				break;
			}
			
			case 7:
			{
				string nazwaPliku;
				cout<<"Podaj nazwe pliku: "; cin>>nazwaPliku;
				listaPWR.odczytajZPliku(nazwaPliku);
				break;
			}
			
			case 8:
			{
				cout<<"DO WIDZENIA";
				czyKontynuowac = 0;
				break;
			}
			
			case 9:
			{
				system("cls");
				break;
			}	
			
			default:
			{
				cout<<"Wybrales nieprawidlowa opcje";
				break;
			}
		}
		cout <<endl <<"------------------------" <<endl;
		
		
	} while(czyKontynuowac);
	
	return 0;
}
