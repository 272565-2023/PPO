#include "cells.h"
#include <vector>

using namespace std;

//klasa reprezentująca arkusz
class Spreadsheet
{
	vector<vector<Cell*>> cells; //dane(komórki) przechowywane w dwuwymiarowym wektorze 
	
public:
	Spreadsheet();
	
	void ExpandSheet(int rows, int columns); //rozszerzanie arkusza o podana liczbe wierszy/kolumn
	
	void PrintSheet(); //wyswietlenie zawartości arkusza
	
	void SetCellValue(int row, int column, Cell* cell); //ustawia zawartość wybranej komórki
	
	
		
};

