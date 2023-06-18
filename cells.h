#include <string>

using namespace std;

//klasa bazowa która reprezentuje komórke
class Cell
{	
public:
	virtual void setValue(string value) =0;
	
	virtual void PrintData() =0;	
	
	virtual string getValueAsString() =0;
};

//klasa pochodna komórki dla danych liczbowych
class NumericCell: public Cell
{
private:
	float data;
	
public:
	NumericCell(double value=0);
	
	virtual void setValue(string value);
	virtual void PrintData();
	virtual string getValueAsString();

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
	virtual string getValueAsString();
};
