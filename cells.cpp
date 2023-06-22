#include <iostream>
#include <string>
#include "cells.h"

using namespace std;


NumericCell::NumericCell(float value)
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

string NumericCell::getValueAsString()
{
	return to_string(data);
}




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

string StringCell::getValueAsString()
{
	return data;
}
