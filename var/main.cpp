#include <iostream>
#include <string>
#include "Var.h"

using namespace std;
Var operator +(Var& a, Var& b); //prototypes
Var operator +(Var& a, int b);
Var operator +(int a, Var& b);
Var operator +(Var&a,float b);
Var operator +(float a, Var& b);
Var operator +(Var& a, string b);
Var operator +(string a, Var& b);
Var operator -(Var& a, Var& b); //prototypes
Var operator -(Var& a, int b);á
Var operator -(int a, Var& b);
Var operator -(Var&a,float b);
Var operator -(float a, Var& b);
Var operator -(Var& a, string b);
Var operator -(string a, Var& b);
int main()
{
	Var a = "70";
	float fl = 10.5;
	string str = "hello";
	Var b = 60;
	Var c = a+b;
	c.print();
	Var d = b + a;
	d.print();
	Var e = 10 + a;
	e.print();
	Var f = a + 10;
	f.print();
	Var g = a +fl;
	g.print();
	Var h = fl + a;
	h.print();
	Var k = a + str;
	k.print();
	Var l = str + a;
	l.print();
	Var m = a;
	m.print();
	m = b;
	m.print();
}
Var operator +(Var& a, Var& b)
{
	Var c;
	if (a.get_float() != 0)
	{
		if (b.get_float() != 0)
			c.set_float(a.get_float() + b.get_float());
		else if (b.get_integer() != 0)
			c.set_float(a.get_float() + b.get_integer());
		else if (!(b.get_string().empty()))
			c.set_float(a.get_float() + stof(b.get_string()));
	}
	else if (a.get_integer() != 0)
	{
		if (b.get_integer() != 0)
			c.set_integer(a.get_integer() + b.get_integer());
		else if (b.get_integer() != 0)
			c.set_integer(a.get_integer() + (int)b.get_integer());
		else if (!(b.get_string().empty()))
			c.set_integer(a.get_integer() + stoi(b.get_string()));
	}
	else if (!(a.get_string().empty()))
	{
		if (b.get_integer() != 0)
			c.set_string(a.get_string() + to_string(b.get_integer()));
		else if (b.get_float() != 0)
			c.set_string(a.get_string() + to_string(b.get_float()));
		else if (!(b.get_string().empty()))
			c.set_string(a.get_string() + b.get_string());
	}
	return c;
}
Var operator +(Var& a, int b)
{
	Var c;
	if (a.get_integer() != 0)
		c.set_integer(a.get_integer() + b);
	else if (a.get_float() != 0)
		c.set_integer(a.get_float() + b);
	else if (!(a.get_string().empty()))
		c.set_string(a.get_string() + to_string(b));
	return c;
}
Var operator +(int a, Var& b)
{
	Var c;
	if (b.get_integer() != 0)
		c.set_integer(a + b.get_integer());
	else if (b.get_float() != 0)
		c.set_integer(a + (int)b.get_float());
	else if (!(b.get_string().empty()))
		c.set_integer(a + stoi(b.get_string()));
	return c;
}
Var operator +(Var& a, float b)
{
	Var c;
	if (a.get_float() != 0)
		c.set_float(a.get_float() + b);
	else if (a.get_integer() != 0)
		c.set_integer(a.get_integer() + (int)b);
	else if (!(a.get_string().empty()))
		c.set_string(a.get_string() + to_string(b));
	return c;
}
Var operator +(float a, Var& b)
{
	Var c;
	if (b.get_float() != 0)
		c.set_float(a + b.get_float());
	else if (b.get_integer() != 0)
		c.set_float(a + b.get_integer());
	else if(!(b.get_string().empty()))
		c.set_float(a+stof(b.get_string()));
	return c;
}
Var operator +(Var& a, string b)
{
	Var c;
	if (a.get_float() != 0)
		c.set_float(a.get_float() + stof(b));
	else if (a.get_integer() != 0)
		c.set_integer(a.get_integer() + stoi(b));
	else if (!(a.get_string().empty()))
		c.set_string(a.get_string() + b);
	return c;
}
Var operator +(string a, Var& b)
{
	Var c;
	if (b.get_integer() != 0)
		c.set_string(a + to_string(b.get_integer()));
	else if (b.get_float() != 0)
		c.set_string(a + to_string(b.get_float()));
	else if (!(b.get_string().empty()))
		c.set_string(a + b.get_string());
	return c;
}
Var operator -(Var& a, Var& b)
{

}
Var operator -(Var& a, int b);
Var operator -(int a, Var& b);
Var operator -(Var& a, float b);
Var operator -(float a, Var& b);
Var operator -(Var& a, string b);
Var operator -(string a, Var& b);