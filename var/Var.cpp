#include "Var.h"
#include <string>
#include <iostream>
using namespace std;
Var::Var()
{
	integer = 0;
	flo = 0;
	str = "";
}
Var::Var(int a)
{
	integer = a;
	flo = 0;
	str = "";
}
Var::Var(float a)
{
	flo = a;
	integer = 0;
	str = "";
}
Var::Var(string a)
{
	str = a;
	integer = flo = 0;
}
Var::Var(const char* str)
{
	flo = integer = 0;
	this->str = str;
}
int Var:: get_integer()const
{
	return integer;
}
float Var::get_float()const
{
	return flo;
}
string Var:: get_string()const
{
	return str;
}
void Var::set_integer(int a)
{
	integer = a;
	str = "";
	flo = 0;
}
void Var::set_float(float a)
{
	flo = a;
	str = "";
	integer = 0;
}
void Var::set_string(string a)
{
	str = a;
	flo = integer = 0;
}
void Var::print()const
{
	if (integer != 0)
	{
		cout << integer << endl;
		return;
	}
	else if (flo != 0)
	{
		cout << flo << endl;
		return;
	}
	else if (!(str.empty()))
	{
		cout << str << endl;
		return;
	}
	else
		cout << "No data inside" << endl;
	return;
}
Var& Var:: operator = (const char* str)
{
	flo = integer = 0;
	this->str = str;
	return *this;
}
