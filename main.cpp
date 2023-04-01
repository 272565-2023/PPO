#include "ui.h"
#include <iostream>

using namespace std;

int main()
{
	int liczbaStudentow;
	cout<<"Oto program przechowujacy liste studentow"<< endl;
	cout<<"Podaj ilu studentow chcesz dodac do listy:  ";
	cin>> liczbaStudentow;
	
	
	Student *listaStudentow= new Student[liczbaStudentow];
	
	
	for(int i=0; i<liczbaStudentow; i++)
	{
		listaStudentow->dodaj(i);
		cout<< endl;
	}
	
	listaStudentow->drukuj(liczbaStudentow);
	

	return 0;
}

//dodaj przechowywanie imion i nazwisk oprócz numeru indeksu uzywajac struktur
