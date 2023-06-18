#include "cells.h"
#include <vector>

using namespace std;

//klasa reprezentuj¹ca arkusz
class Spreadsheet
{
	vector<vector<Cell*>> cells; //dane(komórki) przechowywane w dwuwymiarowym wektorze 
	
public:
	Spreadsheet();
	
	void ExpandSheet(int rows, int columns); //rozszerzanie arkusza o podana liczbe wierszy/kolumn
	
	void PrintSheet(); //wyswietlenie zawartoœci arkusza
	
	void SetCellValue(int row, int column, Cell* cell); //ustawia zawartoœæ wybranej komórki
	
	float suma(int row1, int col1, int row2, int col2);
	
	void saveToFile(string filename);
	
	void loadFromFile(string filename);
	
		
};

