#include <iostream>
#include <string>
#include "cells.h"

//metody klasy NumericCell

NumericCell::NumericCell(double value)
{
	data=value;
}

void NumericCell::setValue(string value)
{
	data=stod(value);
}

void NumericCell::PrintData()
{
	cout<<data;
}


//metody klasy StringCell

StringCell::StringCell(string value)
{
	data=value;
}

void StringCell::setValue(string value)
{
	data=value;
}

void StringCell::PrintData()
{
	cout<<data;
}
