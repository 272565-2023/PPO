#include <iostream>

using namespace std;

class Osoba
{
 	string imie, nazwisko;
	string pesel;	
	
	public:
	void stworzOsobe();
	void wyswietlDaneOsoby();
	
};

class Student :public Osoba
{
	int nrAlbumu;
	
	public:
	void stworzStudenta();
	void wyswietlDaneStudenta();
};

class Pracownik :public Osoba
{
	string stanowisko;
	int nrKarty;
	
	public:
	void stworzPracownika();
	void wyswietlDanePracownika();
};

class Osoby
{
	vector<Osoba> lista Osob;
};

class Studenci
{
	vector<Student> listaStudentow;

};

class Pracownicy
{
	vector<Pracownicy> listaPracownikow;
	
};


/*	private:
	Student *listaStudentow= new Student[4];
	
	public:
	void dodaj(int indeks);
	
	void drukuj(int rozmiar);*/
