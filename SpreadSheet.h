#include "cells.h"
#include <vector>

using namespace std;

//klasa reprezentuj�ca arkusz
class Spreadsheet
{
	vector<vector<Cell*>> cells; //dane(kom�rki) przechowywane w dwuwymiarowym wektorze 
	
public:
	Spreadsheet();
	
	void ExpandSheet(int rows, int columns); //rozszerzanie arkusza o podana liczbe wierszy/kolumn
	
	void PrintSheet(); //wyswietlenie zawarto�ci arkusza
	
	void SetCellValue(int row, int column, Cell* cell); //ustawia zawarto�� wybranej kom�rki
	
	float suma(int row1, int col1, int row2, int col2);
	
	void saveToFile(string filename);
	
	void loadFromFile(string filename);
	
		
};

