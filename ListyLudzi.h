#include <iostream>
#include <vector>
#include "Ludzie.h"

using namespace std;

class Studenci
{
	vector<Student> listaStudentow;
	
	public:
	void dodajStudentaDoListy(Student xyz);
	void wyswietlListeStudentow();
};

class Pracownicy
{
	vector<Pracownik> listaPracownikow;
	
	public:
	void dodajPracownikaDoListy(Pracownik xyz);
	void wyswietlListePracownikow();
	
};

