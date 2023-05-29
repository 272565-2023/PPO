#include <string>

using namespace std;

//klasa bazowa kt�ra reprezentuje kom�rke
class Cell
{	
public:
	virtual void setValue(string value) =0;
	
	virtual void PrintData() =0;	
};


//klasa pochodna kom�rki dla danych liczbowych
class NumericCell: public Cell
{
private:
	double data;
	
public:
	NumericCell(double value=0);
	
	virtual void setValue(string value);
	virtual void PrintData();
};


//klasa pochodna kom�rki dla danych tekstowych
class StringCell: public Cell
{
private:
	string data;
	
public:
	StringCell(string value="");
	
	virtual void setValue(string value);
	virtual void PrintData();
};
