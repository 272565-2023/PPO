#include <iostream>
#include "SpreadSheet.h"

using namespace std;

int main()
{
    Spreadsheet sheet;

    // Ustawienie kilku wartoœci w arkuszu
    sheet.SetCellValue(0, 0, new StringCell("Hello"));
    sheet.SetCellValue(0, 1, new NumericCell(42.5));
    sheet.SetCellValue(1, 0, new StringCell("World"));
    sheet.SetCellValue(1, 1, new NumericCell(100));

    // Rozszerzenie arkusza o 2 wiersze i 3 kolumny
    sheet.ExpandSheet(2, 3);

    // Wyœwietlenie zawartoœci arkusza
    sheet.PrintSheet();

	return 0;
}
