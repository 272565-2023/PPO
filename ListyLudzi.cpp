#include <iostream>
#include <vector>
#include "ListyLudzi.h"

using namespace std;

void Studenci::dodajStudentaDoListy(Student xyz)
{
	listaStudentow.push_back(xyz);
}

void Studenci::wyswietlListeStudentow()
{
	for (int i=0; i<listaStudentow.size(); i++)
	{
	 	listaStudentow[i].wyswietlDaneStudenta(); 
	 	cout<<endl;
	} 
}


void Pracownicy::dodajPracownikaDoListy(Pracownik xyz)
{
	listaPracownikow.push_back(xyz);
}

void Pracownicy::wyswietlListePracownikow()
{
	for (int i=0; i<listaPracownikow.size(); i++)
	{
	 	listaPracownikow[i].wyswietlDanePracownika(); 
	 	cout<<endl;
	} 
}
