#include <string>

using namespace std;

class IKomorka
{
public:
	
	/*
	*metoda ustawiaj¹ca zawartoœæ danej w komórce
	*@param string value to co ma sie znalezc w komorce
	*return none
	*/
	virtual void setValue(string value) =0;
	
	/*
	*metoda zwracajaca zawartosc tego co siedzi w komorce
	*@param none 
	*@return string zawartosc komorki
	*/
	virtual string getValueAsString() =0;
};


class Cell: public IKomorka
{	
public:
	
	/*
	*metoda wypisujaca na ekranie zawartosc komorki
	*@param none
	*@return none	
	*/
	virtual void PrintData() =0;	
	
};


class NumericCell: public Cell
{
private:
	float data;
	
public:
	/*
	*konruktor klasy NumericCell
	*@param float zawartosc nowo stworzonej komorki
	*@return none
	*/
	NumericCell(float value=0);
	
	/*
	*odziedziczona metoda ustawiaj¹ca zawartoœæ w komórce
	*@param string value to co ma sie znalezc w komorce
	*return none
	*/
	virtual void setValue(string value);
	
	/*
	*odziczona metoda wypisujaca na ekranie zawartosc komorki
	*@param none
	*@return none	
	*/
	virtual void PrintData();
	
	/*
	*odziedziczona metoda zwracajaca zawartosc tego co siedzi w komorce
	*@param none 
	*@return string zawartosc komorki
	*/
	virtual string getValueAsString();

};



class StringCell: public Cell
{
private:
	string data;
	
public:
	/*
	*konruktor klasy StringCell
	*@param string zawartosc nowo stworzonej komorki
	*@return none
	*/
	StringCell(string value="");
	
	/*
	*odziedziczona metoda ustawiaj¹ca zawartoœæ w komórce
	*@param string value to co ma sie znalezc w komorce
	*return none
	*/
	virtual void setValue(string value);
	
	/*
	*odziczona metoda wypisujaca na ekranie zawartosc komorki
	*@param none
	*@return none	
	*/
	virtual void PrintData();
	
	/*
	*odziedziczona metoda zwracajaca zawartosc tego co siedzi w komorce
	*@param none 
	*@return string zawartosc komorki
	*/
	virtual string getValueAsString();
};
