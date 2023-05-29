#include <iostream>
#include "SpreadSheet.h"


using namespace std;

Spreadsheet::Spreadsheet()
{
	cells.push_back(vector<Cell*>{new StringCell("")});
}

void  Spreadsheet::ExpandSheet(int rows, int columns)
{
	int currentRows = cells.size;
	int currentColumns = cells[0].size;
	
	//rozszerzanie o wiersze
	for (int i=0; i<rows; i++)
	{
		cells.push_back(vector<Cell*>(currentColumns, new StringCell(" ")));
	}
	
	//roszerzanie o kolumny
	for (int i=0; i<cells.size; i++)
	{
		for (int j=0; j<columns; i++)
		{
			cells[i].push_back(new StringCell(" "));
		}
	}
}

void Spreadsheet::PrintSheet()
{
	for(int i=0; i<cells.size; i++)
	{
		for(int j=0; j<cells[0].size; j++)
		{
			cells[i][j]->PrintData;
			cout<< "\t";
		}
		cout<<endl;
	}
}

void Spreadsheet::SetCellValue(int row, int column, Cell* cell)
{
	delete cells[row][column];
	cells[row][column]=cell;
}
