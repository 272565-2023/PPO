#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "SpreadSheet.h"

using namespace std;

Spreadsheet::Spreadsheet()
{
	cells.push_back(vector<Cell*>{new StringCell("")});
}

void  Spreadsheet::ExpandSheet(int rows, int columns)
{
	int currentRows = cells.size();
	int currentColumns = cells[0].size();
	
	//rozszerzanie o wiersze
	for (int i=0; i<rows; i++)
	{
		cells.push_back(vector<Cell*>(currentColumns, new StringCell(" ")));
	}
	
	//roszerzanie o kolumny
	for (int i=0; i<cells.size(); i++)
	{
		for (int j=0; j<columns; i++)
		{
			cells[i].push_back(new StringCell(" "));
		}
	}
}

void Spreadsheet::PrintSheet()
{
	for(int i=0; i<cells.size(); i++)
	{
		for(int j=0; j<cells[0].size(); j++)
		{
			cells[i][j]->PrintData;
			cout<< "\t";
		}
		cout<<endl;
	}
}

void Spreadsheet::SetCellValue(int row, int column, Cell* cell)
{
	
	cells[row][column]=cell;
}

float Spreadsheet::suma(int row1, int col1, int row2, int col2)
{
	float sum;
	for (int i = row1; i <= row2; i++)
    {
        for (int j = col1; j <= col2; j++)
        {
            if (row1 < cells.size() && col1 < cells[row1].size())
            {
                sum += stof(cells[i][j]->getValueAsString());
            }
        }
    }
    return sum;
}



void saveToFile(string filename)
{
	ofstream file;
	file.open(filename);
	
	if(file.good())
	{
		for (int i=0; i<cells.size(); i++)
		{
			for (int j = 0; j < cells[i].size(); j++)
	            {
	                file << cells[i][j]->getValueAsString();
	            }
	 	}
	}
	else
	{
		cout<<"BLAD";
	}
	
	file.close();
}


void loadFromFile(string filename)
{
	ifstream file(filename);
    if (!file) {
        cout << "Blad podczas otwierania pliku do odczytu." << endl;
        return;
    }

    string line;
    while (getline(file, line)) {
        stringstream ss(line);
        string cellType;
        getline(ss, cellType, '|');

        if (cellType == "string") {
            string data;
            getline(ss, data);
            cells.push_back()(new StringCell(data));
        } else if (cellType == "numeric") {
            float data;
            ss >> data;
            cells.push_back()(new NumericCell(data));
        }
    }

    file.close();
}



