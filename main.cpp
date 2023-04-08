#include <iostream>
#include <cstdlib>
#include "ListyLudzi.h"
#include "funkcje.h"

using namespace std;

int main()
{	
	bool czyKontynuowac=1;
	
	Studenci wszyscyStudenci;
	Pracownicy wszyscyPracownicy;
	
	do 
	{
		cout << "MENU" <<endl <<"Wybierz opcje" <<endl;
		cout << "1.Dodaj studentow" <<endl
		<<"2.Wyswietl studentow" <<endl
		<<"3.Dodaj pracownikow" <<endl
		<<"4.Wyswietl pracownikow" <<endl
		<<"5.Wyjscie" <<endl
		<<"6.Wyczysc konsole" <<endl;
		int opcja;
		opcja=zwracaLiczbeCalk();
		
		switch (opcja)
		{
			case 1:
			{
				cout<< "Ile studentow chcesz dodac?";
				int ile;
				ile=zwracaLiczbeCalk();
				
				for(int i=0; i<ile; i++)
				{
					Student xyz;
					xyz.stworzStudenta();
					wszyscyStudenci.dodajStudentaDoListy(xyz);
					cout<<endl;
				}
				break;
			}
				
			case 2:
			{
				wszyscyStudenci.wyswietlListeStudentow();
				break;
			}
			
			case 3:
			{
				cout<< "Ile pracownikow chcesz dodac?";
				int ile;
				ile=zwracaLiczbeCalk();
				
				for(int i=0; i<ile; i++)
				{
					Pracownik xyz;
					xyz.stworzPracownika();
					wszyscyPracownicy.dodajPracownikaDoListy(xyz);
					cout<<endl;
				}
				break;
			}
			case 4:
			{
				wszyscyPracownicy.wyswietlListePracownikow();
				break;
			}
			case 5:
			{
				cout<<"DO WIDZENIA";
				czyKontynuowac = 0;
				break;
			}
			
			case 6:
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
