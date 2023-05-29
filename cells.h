#include <string>

using namespace std;

//klasa bazowa która reprezentuje komórke
class Cell
{	
public:
	virtual void setValue(string value) =0;
	
	virtual void PrintData() =0;	
};


//klasa pochodna komórki dla danych liczbowych
class NumericCell: public Cell
{
private:
	double data;
	
public:
	NumericCell(double value=0);
	
	virtual void setValue(string value);
	virtual void PrintData();
};


//klasa pochodna komórki dla danych tekstowych
class StringCell: public Cell
{
private:
	string data;
	
public:
	StringCell(string value="");
	
	virtual void setValue(string value);
	virtual void PrintData();
};
