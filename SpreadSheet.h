#include "cells.h"
#include <vector>

using namespace std;


class Spreadsheet
{
	vector<vector<Cell*>> cells;  
	
public:
		
	/*
	*konstruktor klasy Spreadsheet
	*@param none
	*@return none
	*/
	Spreadsheet();
	
	/*
	* metoda rozszerzajaca arkusz
	*@param int rows okresla o ile wierszy rozszerzyc
	*@param int columns okresla o ile kolumn rozszerzyc
	*@return none
	*/
	void ExpandSheet(int rows, int columns); 
		
	/*
	*metoda drukujaca zawartosc arkusza na ekranie
	*@param none
	*@return none
	*/
	void PrintSheet(); 
		
	/*
	* metoda ustawiajaca zawartosc danej komorki
	*@param  int row wiersz komorki ktorej zawartosc chcemy ustawic
	*@param int column kolumna komorki ktorej zawartosc chcemy ustawic
	*@patam Cell* cell komorka ktora chcemy ustawic 
	*@return none
	*/
	void SetCellValue(int row, int column, Cell* cell); 
		
	/*
	* metoda zwracajaca sume wybranego zakresu komorek
	*@param int row1 wiersz pierwszej komorki z zakresu ktory ma zostac zsumowany
	*@param int col1 kolumna pierwszej komorki z zakresu ktory ma zostac zsumowany
	*@param int row2 wiersz ostatniej komorki z zakresu ktory ma zostac zsumowany
	*@param int col2 kolumna ostatniej komorki z zakresu ktory ma zostac zsumowany
	*@return float suma komorek
	*/
	float suma(int row1, int col1, int row2, int col2);
		
	/*
	* metoda zapisujaca arkusz do pliku
	*@param string filename nazwa pliku do ktorego ma byc zapisany arkusz
	*@return none
	*/
	void saveToFile(string filename);
		
	/*
	* metoda wczytujaca arkusz z pliku
	*@param string filename nazwa pliku ktory ma zostac wczytany
	*@return none
	*/
	void loadFromFile(string filename);
	
		
};

