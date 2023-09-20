#pragma once
#include <iostream>
#include <string>
using namespace std;
class Var
{
private:
	int integer;
	float flo;
	string str;
public:
	Var();
	Var(int);
	Var(float);
	Var(string);
	Var(const char* str); 
	int get_integer()const;
	float get_float()const;
	string get_string()const;
	void set_integer(int a);
	void set_float(float a);
	void set_string(string a);
	void print()const;
	Var& operator = (const char* str);
	char& operator[](int index);

};