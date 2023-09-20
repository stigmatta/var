#include <iostream>
#include <string>
#include "Var.h"

using namespace std;
string multiplication(Var& a, Var& b);
string multiplication(Var& a, string b);
string multiplication(string a, Var& b);
string divide(Var& a, Var& b);
string divide(Var& a, string b);
string divide(string a, Var& b);
Var operator +(Var& a, Var& b); //prototypes
Var operator +(Var& a, int b);
Var operator +(int a, Var& b);
Var operator +(Var& a, float b);
Var operator +(float a, Var& b);
Var operator +(Var& a, string b);
Var operator +(string a, Var& b);
Var operator +(Var& a, char b);
Var operator -(Var& a, Var& b);
Var operator -(Var& a, int b);
Var operator -(int a, Var& b);
Var operator -(Var& a, float b);
Var operator -(float a, Var& b);
Var operator -(Var& a, string b);
Var operator - (string a, Var& b);
Var& operator +=(Var& a, Var& b);
Var& operator +=(Var& a, int b);
Var& operator +=(Var& a, float b);
Var& operator +=(Var& a, string b);
Var& operator -=(Var& a, Var& b);
Var& operator -=(Var& a, int b);
Var& operator -=(Var& a, float b);
Var& operator -=(Var& a, string b);
Var operator *(Var& a, Var& b);
Var operator *(Var& a, int b);
Var operator *(int a, Var& b);
Var operator *(Var& a, float b);
Var operator *(float a, Var& b);
Var operator *(Var& a, string b);
Var operator *(string a, Var& b);
Var operator /(Var& a, Var& b);
Var operator /(Var& a, int b);
Var operator /(int a, Var& b);
Var operator /(Var& a, float b);
Var operator /(float a, Var& b);
Var operator/(Var& a, string b);
Var operator/(string a, Var& b);
bool operator>(Var& a, Var& b);
bool operator>(Var& a, int b);
bool operator>(Var& a, float b);
bool operator>(Var& a, string b);
bool operator>(int a,Var&b);
bool operator>(float a,Var&b);
bool operator>(string a,Var&b);
bool operator<(Var& a, Var& b);
bool operator<(Var& a, int b);
bool operator<(Var& a, float b);
bool operator<(Var& a, string b);
bool operator<(int a,Var&b);
bool operator<(float a,Var&b);
bool operator<(string a,Var&b);
bool operator>=(Var& a, Var& b);
bool operator>=(Var& a, int b);
bool operator>=(Var& a, float b);
bool operator>=(Var& a, string b);
bool operator>=(int a, Var& b);
bool operator>=(float a, Var& b);
bool operator>=(string a, Var& b);
bool operator<=(Var& a, Var& b);
bool operator<=(Var& a, int b);
bool operator<=(Var& a, float b);
bool operator<=(Var& a, string b);
bool operator<=(int a, Var& b);
bool operator<=(float a, Var& b);
bool operator<=(string a, Var& b);
bool operator==(Var& a, Var& b);
bool operator==(Var& a, int b);
bool operator==(Var& a, float b);
bool operator==(Var& a, string b);
bool operator==(int a, Var& b);
bool operator==(float a, Var& b);
bool operator==(string a, Var& b);
bool operator!=(Var& a, Var& b);
bool operator!=(Var& a, int b);
bool operator!=(Var& a, float b);
bool operator!=(Var& a, string b);
bool operator!=(int a, Var& b);
bool operator!=(float a, Var& b);
bool operator!=(string a, Var& b);







int main()
{
	Var a = "70.5";
	Var astr = "yandex";
	Var bstr = "lady";
	float fl = 10.5;
	float fl1 = a;
	int test1 = a;
	cout << fl1<< endl;
	cout << test1 << endl;
	char ch = 's';
	string str = "hello";
	Var b = 60;
	Var c = a + b;
	c.print();
	Var d = b + a;
	d.print();
	Var e = 10 + a;
	e.print();
	Var f = a + 10;
	f.print();
	Var g = a + fl;
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
	Var a1 = "60";
	Var n = a - a1;
	n.print();
	Var o = a - 10;
	o.print();
	Var p = a - b;
	p.print();
	p += a;
	p.print();
	Var s = a + ch;
	s.print();
	s = bstr * str;
	s.print();
	s = astr/bstr;
	s.print();
	s = str / astr;
	s.print();
	s = astr / str;
	s.print();
	Var r = astr * bstr;
	r.print();
}
string multiplication(Var& a, Var& b)
{
	Var c;
	for (int i = 0; i < a.get_string().length(); i++)
	{
		for (int j = 0; j < b.get_string().length(); j++)
		{
			if (a[i] == b[j])
			{
				c.set_string(c.get_string() + a[i]);
				continue;
			}

		}
	}
	return c.get_string();
}
string multiplication(Var& a, string b)
{
	Var c;
	for (int i = 0; i < a.get_string().length(); i++)
	{
		for (int j = 0; j < b.length(); j++)
		{
			if (a[i] == b[j])
			{
				c.set_string(c.get_string() + a[i]);
				continue;
			}

		}
	}
	return c.get_string();
}
string multiplication(string a, Var& b)
{
	Var c;
	for (int i = 0; i < a.length(); i++)
	{
		for (int j = 0; j < b.get_string().length(); j++)
		{
			if (a[i] == b[j])
			{
				c.set_string(c.get_string() + a[i]);
				continue;
			}

		}
	}
	return c.get_string();
}
string divide(Var& a, Var& b)
{
	Var c;
	bool flag = 0;
	for (int i = 0; i < a.get_string().length(); i++)
	{
		for (int j = 0; j < b.get_string().length(); j++)
		{
			if (a[i] == b[j])
				flag = 1;
		}
		if(!flag)
			c.set_string(c.get_string() + a[i]);
		flag = 0;
	}
	return c.get_string();
}
string divide(Var& a, string b)
{
	Var c;
	bool flag = 0;
	for (int i = 0; i < a.get_string().length(); i++)
	{
		for (int j = 0; j < b.length(); j++)
		{
			if (a[i] == b[j])
				flag = 1;
		}
		if (!flag)
			c.set_string(c.get_string() + a[i]);
		flag = 0;
	}
	return c.get_string();
}
string divide(string a, Var& b)
{
	Var c;
	bool flag = 0;
	for (int i = 0; i < a.length(); i++)
	{
		for (int j = 0; j < b.get_string().length(); j++)
		{
			if (a[i] == b[j])
				flag = 1;
		}
		if (!flag)
			c.set_string(c.get_string() + a[i]);
		flag = 0;
	}
	return c.get_string();
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
	else if (!(b.get_string().empty()))
		c.set_float(a + stof(b.get_string()));
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
Var operator +(Var& a, char b)
{
	Var c;
	if (a.get_integer() != 0)
		c.set_integer(a.get_integer() + b);
	else if (a.get_float() != 0)
		c.set_float(a.get_float() + b);
	else if (!(a.get_string().empty()))
		c.set_string(a.get_string() + b);
	return c;
}
Var operator - (Var& a, Var& b)
{
	Var c;
	if (a.get_float() != 0)
	{
		if (b.get_float() != 0)
			c.set_float(a.get_float() - b.get_float());
		else if (b.get_integer() != 0)
			c.set_float(a.get_float() - b.get_integer());
		else if (!(b.get_string().empty()))
			c.set_float(a.get_float() - stof(b.get_string()));
	}
	else if (a.get_integer() != 0)
	{
		if (b.get_integer() != 0)
			c.set_integer(a.get_integer() - b.get_integer());
		else if (b.get_integer() != 0)
			c.set_integer(a.get_integer() - (int)b.get_integer());
		else if (!(b.get_string().empty()))
			c.set_integer(a.get_integer() - stoi(b.get_string()));
	}
	else if (!(a.get_string().empty()))
	{
		if (b.get_integer() != 0)
			c.set_string(to_string(stoi(a.get_string()) - (b.get_integer())));
		else if (b.get_float() != 0)
			c.set_string(to_string(stof(a.get_string()) - b.get_float()));
		else if (!(b.get_string().empty()))
			c.set_string(to_string(stoi(a.get_string()) - stoi(b.get_string())));
	}
	return c;
}
Var operator -(Var& a, int b)
{
	Var c;
	if (a.get_integer() != 0)
		c.set_integer(a.get_integer() - b);
	else if (a.get_float() != 0)
		c.set_integer(a.get_float() - b);
	else if (!(a.get_string().empty()))
		c.set_string(to_string(stoi(a.get_string()) - b));
	return c;
}
Var operator -(int a, Var& b)
{
	Var c;
	if (b.get_integer() != 0)
		c.set_integer(a - b.get_integer());
	else if (b.get_float() != 0)
		c.set_integer(a - (int)b.get_float());
	else if (!(b.get_string().empty()))
		c.set_integer(a - stoi(b.get_string()));
	return c;
}
Var operator -(Var& a, float b)
{
	Var c;
	if (a.get_float() != 0)
		c.set_float(a.get_float() - b);
	else if (a.get_integer() != 0)
		c.set_integer(a.get_integer() - (int)b);
	else if (!(a.get_string().empty()))
		c.set_string(to_string(stoi(a.get_string()) - b));
	return c;
}
Var operator -(float a, Var& b)
{
	Var c;
	if (b.get_float() != 0)
		c.set_float(a - b.get_float());
	else if (b.get_integer() != 0)
		c.set_float(a - b.get_integer());
	else if (!(b.get_string().empty()))
		c.set_float(a - stof(b.get_string()));
	return c;
}
Var operator -(Var& a, string b)
{
	Var c;
	if (a.get_float() != 0)
		c.set_float(a.get_float() - stof(b));
	else if (a.get_integer() != 0)
		c.set_integer(a.get_integer() - stoi(b));
	else if (!(a.get_string().empty()))
		c.set_string(to_string(stoi(a.get_string()) - stoi(b)));
	return c;
}
Var operator - (string a, Var& b)
{
	Var c;
	if (b.get_integer() != 0)
		c.set_string(to_string(stoi(a) - b.get_integer()));
	else if (b.get_float() != 0)
		c.set_string(to_string(stof(a) - b.get_float()));
	else if (!(b.get_string().empty()))
		c.set_string(to_string(stoi(a) - stoi(b.get_string())));
	return c;
}
Var& operator +=(Var& a, Var& b)
{
	if (a.get_integer() != 0)
	{
		if (b.get_integer() != 0)
			a.set_integer(a.get_integer() + b.get_integer());
		else if (b.get_float() != 0)
			a.set_integer(a.get_integer() + (int)b.get_float());
		else if (!(b.get_string().empty()))
			a.set_integer(a.get_integer() + stoi(b.get_string()));
	}
	else if (a.get_float() != 0)
	{
		if (b.get_integer() != 0)
			a.set_float(a.get_float() + b.get_integer());
		else if (b.get_float() != 0)
			a.set_float(a.get_float() + b.get_float());
		else if (!(b.get_string().empty()))
			a.set_float(a.get_float() + stof(b.get_string()));
	}
	else if (!(a.get_string().empty()))
	{

		if (b.get_integer() != 0)
			a.set_string(a.get_string() + to_string(b.get_integer()));
		else if (b.get_float() != 0)
			a.set_string(a.get_string() + to_string(b.get_float()));
		else if (!(b.get_string().empty()))
			a.set_string(a.get_string() + b.get_string());
	}
	return a;
}
Var& operator +=(Var& a, int b)
{
	if (a.get_integer() != 0)
		a.set_integer(a.get_integer() + b);
	else if (a.get_float() != 0)
		a.set_integer(a.get_float() + b);
	else if (!(a.get_string().empty()))
		a.set_string(a.get_string() + to_string(b));
	return a;
}
Var& operator +=(Var& a, float b)
{
	if (a.get_float() != 0)
		a.set_float(a.get_float() - b);
	else if (a.get_integer() != 0)
		a.set_integer(a.get_integer() - (int)b);
	else if (!(a.get_string().empty()))
		a.set_string(to_string(stoi(a.get_string()) - b));
	return a;
}
Var& operator +=(Var& a, string b)
{
	if (a.get_float() != 0)
		a.set_float(a.get_float() - stof(b));
	else if (a.get_integer() != 0)
		a.set_integer(a.get_integer() - stoi(b));
	else if (!(a.get_string().empty()))
		a.set_string(to_string(stoi(a.get_string()) - stoi(b)));
	return a;
}
Var& operator -=(Var& a, Var& b)
{
	if (a.get_float() != 0)
	{
		if (b.get_float() != 0)
			a.set_float(a.get_float() - b.get_float());
		else if (b.get_integer() != 0)
			a.set_float(a.get_float() - b.get_integer());
		else if (!(b.get_string().empty()))
			a.set_float(a.get_float() - stof(b.get_string()));
	}
	else if (a.get_integer() != 0)
	{
		if (b.get_integer() != 0)
			a.set_integer(a.get_integer() - b.get_integer());
		else if (b.get_integer() != 0)
			a.set_integer(a.get_integer() - (int)b.get_integer());
		else if (!(b.get_string().empty()))
			a.set_integer(a.get_integer() - stoi(b.get_string()));
	}
	else if (!(a.get_string().empty()))
	{
		if (b.get_integer() != 0)
			a.set_string(to_string(stoi(a.get_string()) - (b.get_integer())));
		else if (b.get_float() != 0)
			a.set_string(to_string(stof(a.get_string()) - b.get_float()));
		else if (!(b.get_string().empty()))
			a.set_string(to_string(stoi(a.get_string()) - stoi(b.get_string())));
	}
	return a;
}
Var& operator -=(Var& a, int b)
{
	if (a.get_integer() != 0)
		a.set_integer(a.get_integer() - b);
	else if (a.get_float() != 0)
		a.set_integer(a.get_float() - b);
	else if (!(a.get_string().empty()))
		a.set_string(to_string(stoi(a.get_string()) - b));
	return a;
}
Var& operator -=(Var& a, float b)
{
	if (a.get_float() != 0)
		a.set_float(a.get_float() - b);
	else if (a.get_integer() != 0)
		a.set_integer(a.get_integer() - (int)b);
	else if (!(a.get_string().empty()))
		a.set_string(to_string(stoi(a.get_string()) - b));
	return a;
}
Var& operator -=(Var& a, string b)
{
	if (a.get_float() != 0)
		a.set_float(a.get_float() - stof(b));
	else if (a.get_integer() != 0)
		a.set_integer(a.get_integer() - stoi(b));
	else if (!(a.get_string().empty()))
		a.set_string(to_string(stoi(a.get_string()) - stoi(b)));
	return a;
}
Var operator *(Var& a, Var& b)
{
	Var c;
	if (a.get_float() != 0)
	{
		if (b.get_float() != 0)
			c.set_float(a.get_float() * b.get_float());
		else if (b.get_integer() != 0)
			c.set_float(a.get_float() * b.get_integer());
		else if (!(b.get_string().empty()))
			c.set_float(a.get_float() * stof(b.get_string()));
	}
	else if (a.get_integer() != 0)
	{
		if (b.get_integer() != 0)
			c.set_integer(a.get_integer() * b.get_integer());
		else if (b.get_integer() != 0)
			c.set_integer(a.get_integer() * (int)b.get_integer());
		else if (!(b.get_string().empty()))
			c.set_integer(a.get_integer() * stoi(b.get_string()));
	}
	else if (!(a.get_string().empty()))
	{
		if (b.get_integer() != 0)
			c.set_string(to_string(stoi(a.get_string()) * b.get_integer()));
		else if (b.get_float() != 0)
			c.set_string(to_string(stof(a.get_string()) * b.get_float()));
		else if (!(b.get_string().empty()))
			c = multiplication(a, b);
	}
	return c;
}
Var operator *(Var& a, int b)
{
	Var c;
	if (a.get_integer() != 0)
		c.set_integer(a.get_integer() * b);
	else if (a.get_float() != 0)
		c.set_float(a.get_float() * b);
	else if (!(a.get_string().empty()))
		c.set_string(to_string(stoi(a.get_string()) * b));
	return c;
}
Var operator *(int a, Var& b)
{
	Var c;
	if (b.get_integer() != 0)
		c.set_integer(b.get_integer() * a);
	else if (b.get_float() != 0)
		c.set_integer((int)b.get_float() * a);
	else if (!(b.get_string().empty()))
		c.set_integer(stoi(b.get_string()) * a);
	return c;
}
Var operator *(Var& a, float b)
{
	Var c;
	if (a.get_integer() != 0)
		c.set_integer(a.get_integer() * (int)b);
	else if (a.get_float() != 0)
		c.set_float(a.get_float() * b);
	else if (!(a.get_string().empty()))
		c.set_string(to_string(stof(a.get_string()) * b));
	return c;
}
Var operator *(float a, Var& b)
{
	Var c;
	if (b.get_integer() != 0)
		c.set_float(b.get_integer() * a);
	else if (b.get_float() != 0)
		c.set_float(b.get_float() * a);
	else if (!(b.get_string().empty()))
		c.set_float(stof(b.get_string()) * a);
	return c;
}
Var operator *(Var& a, string b)
{
	Var c;
	if (a.get_integer() != 0)
		c.set_integer(a.get_integer() * stoi(b));
	else if (a.get_float() != 0)
		c.set_float(a.get_float() * stof(b));
	else if (!(a.get_string().empty()))
		c = multiplication(a, b);
	return c;
}
Var operator *(string a, Var& b)
{
	Var c;
	if (b.get_integer() != 0)
		c.set_integer(b.get_integer() * stoi(a));
	else if (b.get_float() != 0)
		c.set_float(b.get_float() * stof(a));
	else if (!(b.get_string().empty()))
		c = multiplication(a, b);
	return c;
}
Var operator /(Var& a, Var& b)
{
	Var c;
	if (a.get_float() != 0)
	{
		if (b.get_float() != 0)
			c.set_float(a.get_float() / b.get_float());
		else if (b.get_integer() != 0)
			c.set_float(a.get_float() / b.get_integer());
		else if (!(b.get_string().empty()))
			c.set_float(a.get_float() / stof(b.get_string()));
	}
	else if (a.get_integer() != 0)
	{
		if (b.get_integer() != 0)
			c.set_integer(a.get_integer() / b.get_integer());
		else if (b.get_integer() != 0)
			c.set_integer(a.get_integer() / (int)b.get_integer());
		else if (!(b.get_string().empty()))
			c.set_integer(a.get_integer() / stoi(b.get_string()));
	}
	else if (!(a.get_string().empty()))
	{
		if (b.get_integer() != 0)
			c.set_string(to_string(stoi(a.get_string()) / b.get_integer()));
		else if (b.get_float() != 0)
			c.set_string(to_string(stof(a.get_string()) / b.get_float()));
		else if (!(b.get_string().empty()))
			c = divide(a, b);
	}
	return c;
}
Var operator /(Var& a, string b)
{
	Var c;
	if (a.get_integer() != 0)
		c.set_integer(a.get_integer() * stoi(b));
	else if (a.get_float() != 0)
		c.set_float(a.get_float() * stof(b));
	else if (!(a.get_string().empty()))
		c = divide(a, b);
	return c;
}
Var operator /(Var& a, int b)
{
	Var c;
	if (a.get_integer() != 0)
		c.set_integer(a.get_integer() / b);
	else if (a.get_float() != 0)
		c.set_float(a.get_float() / b);
	else if (!(a.get_string().empty()))
		c.set_string(to_string(stoi(a.get_string()) / b));
	return c;
}
Var operator /(int a, Var& b)
{
	Var c;
	if (b.get_integer() != 0)
		c.set_integer(b.get_integer() / a);
	else if (b.get_float() != 0)
		c.set_integer((int)b.get_float() / a);
	else if (!(b.get_string().empty()))
		c.set_integer(stoi(b.get_string()) / a);
	return c;
}
Var operator /(Var& a, float b)
{
	Var c;
	if (a.get_integer() != 0)
		c.set_integer(a.get_integer() / (int)b);
	else if (a.get_float() != 0)
		c.set_float(a.get_float() / b);
	else if (!(a.get_string().empty()))
		c.set_string(to_string(stof(a.get_string()) / b));
	return c;
}
Var operator /(float a, Var& b)
{
	Var c;
	if (b.get_integer() != 0)
		c.set_integer(b.get_integer() / (int)a);
	else if (b.get_float() != 0)
		c.set_float(b.get_float() / b);
	else if (!(b.get_string().empty()))
		c.set_string(to_string(stof(b.get_string()) / a));
	return c;
}
Var operator/(string a, Var& b)
{
	Var c;
	if (b.get_integer() != 0)
		c.set_integer(b.get_integer()*stoi(a));
	else if (b.get_float() != 0)
		c.set_float(b.get_float() * stof(a));
	else if (!(b.get_string().empty()))
		c = divide(a, b);
	return c;
}
Var& operator *=(Var& a, Var& b)
{
	if (a.get_float() != 0)
	{
		if (b.get_float() != 0)
			a.set_float(a.get_float() * b.get_float());
		else if (b.get_integer() != 0)
			a.set_float(a.get_float() * b.get_integer());
		else if (!(b.get_string().empty()))
			a.set_float(a.get_float() * stof(b.get_string()));
	}
	else if (a.get_integer() != 0)
	{
		if (b.get_integer() != 0)
			a.set_integer(a.get_integer() * b.get_integer());
		else if (b.get_integer() != 0)
			a.set_integer(a.get_integer() * (int)b.get_integer());
		else if (!(b.get_string().empty()))
			a.set_integer(a.get_integer() * stoi(b.get_string()));
	}
	else if (!(a.get_string().empty()))
	{
		if (b.get_integer() != 0)
			a.set_string(to_string(stoi(a.get_string()) * b.get_integer()));
		else if (b.get_float() != 0)
			a.set_string(to_string(stof(a.get_string()) * b.get_float()));
		else if (!(b.get_string().empty()))
			a = multiplication(a, b);
	}
	return a;
}
Var& operator *=(Var& a, int b)
{
	if (a.get_integer() != 0)
		a.set_integer(a.get_integer() * b);
	else if (a.get_float() != 0)
		a.set_float(a.get_float() * b);
	else if (!(a.get_string().empty()))
		a.set_string(to_string(stoi(a.get_string()) * b));
	return a;
}
Var& operator *=(Var& a, float b)
{
	if (a.get_integer() != 0)
		a.set_integer(a.get_integer() * (int)b);
	else if (a.get_float() != 0)
		a.set_float(a.get_float() * b);
	else if (!(a.get_string().empty()))
		a.set_string(to_string(stof(a.get_string()) * b));
	return a;
}
Var& operator *=(Var& a, string b)
{
	if (a.get_integer() != 0)
		a.set_integer(a.get_integer() * stoi(b));
	else if (a.get_float() != 0)
		a.set_float(a.get_float() * stof(b));
	else if (!(a.get_string().empty()))
		a = multiplication(a, b);
	return a;
}
Var& operator /=(Var& a, string b)
{
	if (a.get_integer() != 0)
		a.set_integer(a.get_integer() * stoi(b));
	else if (a.get_float() != 0)
		a.set_float(a.get_float() * stof(b));
	else if (!(a.get_string().empty()))
		a = divide(a, b);
	return a;
}
Var& operator /=(Var& a, int b)
{
	if (a.get_integer() != 0)
		a.set_integer(a.get_integer() / b);
	else if (a.get_float() != 0)
		a.set_float(a.get_float() / b);
	else if (!(a.get_string().empty()))
		a.set_string(to_string(stoi(a.get_string()) / b));
	return a;
}
Var& operator /=(Var& a, Var& b)
{
	if (a.get_float() != 0)
	{
		if (b.get_float() != 0)
			a.set_float(a.get_float() / b.get_float());
		else if (b.get_integer() != 0)
			a.set_float(a.get_float() / b.get_integer());
		else if (!(b.get_string().empty()))
			a.set_float(a.get_float() / stof(b.get_string()));
	}
	else if (a.get_integer() != 0)
	{
		if (b.get_integer() != 0)
			a.set_integer(a.get_integer() / b.get_integer());
		else if (b.get_integer() != 0)
			a.set_integer(a.get_integer() / (int)b.get_integer());
		else if (!(b.get_string().empty()))
			a.set_integer(a.get_integer() / stoi(b.get_string()));
	}
	else if (!(a.get_string().empty()))
	{
		if (b.get_integer() != 0)
			a.set_string(to_string(stoi(a.get_string()) / b.get_integer()));
		else if (b.get_float() != 0)
			a.set_string(to_string(stof(a.get_string()) / b.get_float()));
		else if (!(b.get_string().empty()))
			a = divide(a, b);
	}
	return a;
}
Var& operator /=(Var& a, float b)
{
	if (a.get_integer() != 0)
		a.set_integer(a.get_integer() / (int)b);
	else if (a.get_float() != 0)
		a.set_float(a.get_float() / b);
	else if (!(a.get_string().empty()))
		a.set_string(to_string(stof(a.get_string()) / b));
	return a;
}
bool operator>(Var& a, Var& b)
{
	if (a.get_integer() != 0)
	{
		if (b.get_integer() != 0)
		{
			if (a.get_integer() > b.get_integer())
				return true;
			return false;
		}
		else if (b.get_float() != 0)
		{
			if (a.get_integer() > b.get_float())
				return true;
			return false;
		}
		else if (!(b.get_string().empty()))
		{
			if (a.get_integer() > stof(b.get_string()))
				return true;
			return false;
		}
	}
	else if (a.get_float() != 0)
	{
		if (b.get_integer() != 0)
		{
			if (a.get_float() > b.get_integer())
				return true;
			return false;
		}
		else if (b.get_float() != 0)
		{
			if (a.get_float() > b.get_float())
				return true;
			return false;
		}
		else if (!(b.get_string().empty()))
		{
			if (a.get_float() > stof(b.get_string()))
				return true;
			return false;
		}
	}
	else if (!(a.get_string().empty()))
	{
		if (b.get_integer() != 0)
		{
			if (stof(a.get_string()) > b.get_integer())
				return true;
			return false;
		}
		else if (b.get_float() != 0)
		{
			if (stof(a.get_string()) > b.get_float())
				return true;
			return false;
		}
		else if (!(b.get_string().empty()))
		{
			if (stof(a.get_string()) > stof(b.get_string()))
				return true;
			return false;
		}
	}
}
bool operator>(Var& a, int b)
{
	if (a.get_integer() != 0)
	{
		if (a.get_integer() > b)
			return true;
		return false;
	}
	else if (a.get_float() != 0)
	{
		if (a.get_float() > b)
			return true;
		return false;
	}
	else if (!(a.get_string().empty()))
	{
		if (stof(a.get_string()) > b)
			return true;
		return false;
	}
}
bool operator>(Var& a, float b)
{
	if (a.get_integer() != 0)
	{
		if (a.get_integer() > b)
			return true;
		return false;
	}
	else if (a.get_float() != 0)
	{
		if (a.get_float() > b)
			return true;
		return false;
	}
	else if (!(a.get_string().empty()))
	{
		if (stof(a.get_string()) > b)
			return true;
		return false;
	}
}
bool operator>(Var& a, string b)
{
	if (a.get_integer() != 0)
	{
		if (a.get_integer() > stof(b))
			return true;
		return false;
	}
	else if (a.get_float() != 0)
	{
		if (a.get_float() > stof(b))
			return true;
		return false;
	}
	else if (!(a.get_string().empty()))
	{
		if (stof(a.get_string()) > stof(b))
			return true;
		return false;
	}
}
bool operator>(int a, Var& b)
{
	if (b.get_integer() != 0)
	{
		if (b.get_integer() != 0)
		{
			if (a > b.get_integer())
				return true;
			return false;
		}
	}
	else if (b.get_float() != 0)
	{
		if(a>b.get_float())
			return true;
		return false;
	}
	else if (!(b.get_string().empty()))
	{
		if (a>stof(b.get_string()))
			return true;
		return false;
	}
}
bool operator>(float a, Var& b)
{
	if (b.get_integer() != 0)
	{
		if (b.get_integer() != 0)
		{
			if (a > b.get_integer())
				return true;
			return false;
		}
	}
	else if (b.get_float() != 0)
	{
		if (a > b.get_float())
			return true;
		return false;
	}
	else if (!(b.get_string().empty()))
	{
		if (a>stof(b.get_string()))
			return true;
		return false;
	}
}
bool operator>(string a, Var& b)
{
	if (b.get_integer() != 0)
	{
		if (b.get_integer() != 0)
		{
			if (stof(a) > b.get_integer())
				return true;
			return false;
		}
	}
	else if (b.get_float() != 0)
	{
		if (stof(a) > b.get_float())
			return true;
		return false;
	}
	else if (!(b.get_string().empty()))
	{
		if (stof(a)>stof(b.get_string()))
			return true;
		return false;
	}
}
bool operator<(Var& a, Var& b)
{
	if (a.get_integer() != 0)
	{
		if (b.get_integer() != 0)
		{
			if (a.get_integer() < b.get_integer())
				return true;
			return false;
		}
		else if (b.get_float() != 0)
		{
			if (a.get_integer() < b.get_float())
				return true;
			return false;
		}
		else if (!(b.get_string().empty()))
		{
			if (a.get_integer() < stof(b.get_string()))
				return true;
			return false;
		}
	}
	else if (a.get_float() != 0)
	{
		if (b.get_integer() != 0)
		{
			if (a.get_float() < b.get_integer())
				return true;
			return false;
		}
		else if (b.get_float() != 0)
		{
			if (a.get_float() < b.get_float())
				return true;
			return false;
		}
		else if (!(b.get_string().empty()))
		{
			if (a.get_float() < stof(b.get_string()))
				return true;
			return false;
		}
	}
	else if (!(a.get_string().empty()))
	{
		if (b.get_integer() != 0)
		{
			if (stof(a.get_string()) < b.get_integer())
				return true;
			return false;
		}
		else if (b.get_float() != 0)
		{
			if (stof(a.get_string()) < b.get_float())
				return true;
			return false;
		}
		else if (!(b.get_string().empty()))
		{
			if (stof(a.get_string()) < stof(b.get_string()))
				return true;
			return false;
		}
	}
}
bool operator<(Var& a, int b)
{
	if (a.get_integer() != 0)
	{
		if (a.get_integer() < b)
			return true;
		return false;
	}
	else if (a.get_float() != 0)
	{
		if (a.get_float() <b)
			return true;
		return false;
	}
	else if (!(a.get_string().empty()))
	{
		if (stof(a.get_string()) < b)
			return true;
		return false;
	}
}
bool operator<(Var& a, float b)
{
	if (a.get_integer() != 0)
	{
		if (a.get_integer() < b)
			return true;
		return false;
	}
	else if (a.get_float() != 0)
	{
		if (a.get_float() < b)
			return true;
		return false;
	}
	else if (!(a.get_string().empty()))
	{
		if (stof(a.get_string()) < b)
			return true;
		return false;
	}
}
bool operator<(Var& a, string b)
{
	if (a.get_integer() != 0)
	{
		if (a.get_integer() < stof(b))
			return true;
		return false;
	}
	else if (a.get_float() != 0)
	{
		if (a.get_float() < stof(b))
			return true;
		return false;
	}
	else if (!(a.get_string().empty()))
	{
		if (stof(a.get_string()) < stof(b))
			return true;
		return false;
	}
}
bool operator<(int a, Var& b)
{
	if (b.get_integer() != 0)
	{
		if (b.get_integer() != 0)
		{
			if (a < b.get_integer())
				return true;
			return false;
		}
	}
	else if (b.get_float() != 0)
	{
		if (a < b.get_float())
			return true;
		return false;
	}
	else if (!(b.get_string().empty()))
	{
		if (a < stof(b.get_string()))
			return true;
		return false;
	}
}
bool operator<(float a, Var& b)
{
	if (b.get_integer() != 0)
	{
		if (b.get_integer() != 0)
		{
			if (a < b.get_integer())
				return true;
			return false;
		}
	}
	else if (b.get_float() != 0)
	{
		if (a < b.get_float())
			return true;
		return false;
	}
	else if (!(b.get_string().empty()))
	{
		if (a < stof(b.get_string()))
			return true;
		return false;
	}
}
bool operator<(string a, Var& b)
{
	if (b.get_integer() != 0)
	{
		if (b.get_integer() != 0)
		{
			if (stof(a) < b.get_integer())
				return true;
			return false;
		}
	}
	else if (b.get_float() != 0)
	{
		if (stof(a) < b.get_float())
			return true;
		return false;
	}
	else if (!(b.get_string().empty()))
	{
		if (stof(a) < stof(b.get_string()))
			return true;
		return false;
	}
}
bool operator>=(Var& a, Var& b)
{
	if (a.get_integer() != 0)
	{
		if (b.get_integer() != 0)
		{
			if (a.get_integer() > b.get_integer())
				return true;
			return false;
		}
		else if (b.get_float() != 0)
		{
			if (a.get_integer() > b.get_float())
				return true;
			return false;
		}
		else if (!(b.get_string().empty()))
		{
			if (a.get_integer() > stof(b.get_string()))
				return true;
			return false;
		}
	}
	else if (a.get_float() != 0)
	{
		if (b.get_integer() != 0)
		{
			if (a.get_float() > b.get_integer())
				return true;
			return false;
		}
		else if (b.get_float() != 0)
		{
			if (a.get_float() > b.get_float())
				return true;
			return false;
		}
		else if (!(b.get_string().empty()))
		{
			if (a.get_float() > stof(b.get_string()))
				return true;
			return false;
		}
	}
	else if (!(a.get_string().empty()))
	{
		if (b.get_integer() != 0)
		{
			if (stof(a.get_string()) >= b.get_integer())
				return true;
			return false;
		}
		else if (b.get_float() != 0)
		{
			if (stof(a.get_string()) >= b.get_float())
				return true;
			return false;
		}
		else if (!(b.get_string().empty()))
		{
			if (stof(a.get_string()) >= stof(b.get_string()))
				return true;
			return false;
		}
	}
}
bool operator>=(Var& a, int b)
{
	if (a.get_integer() != 0)
	{
		if (a.get_integer() >= b)
			return true;
		return false;
	}
	else if (a.get_float() != 0)
	{
		if (a.get_float() >= b)
			return true;
		return false;
	}
	else if (!(a.get_string().empty()))
	{
		if (stof(a.get_string()) >= b)
			return true;
		return false;
	}
}
bool operator>=(Var& a, float b)
{
	if (a.get_integer() != 0)
	{
		if (a.get_integer() >= b)
			return true;
		return false;
	}
	else if (a.get_float() != 0)
	{
		if (a.get_float() >= b)
			return true;
		return false;
	}
	else if (!(a.get_string().empty()))
	{
		if (stof(a.get_string()) >= b)
			return true;
		return false;
	}
}
bool operator>=(Var& a, string b)
{
	if (a.get_integer() != 0)
	{
		if (a.get_integer() >= stof(b))
			return true;
		return false;
	}
	else if (a.get_float() != 0)
	{
		if (a.get_float() >= stof(b))
			return true;
		return false;
	}
	else if (!(a.get_string().empty()))
	{
		if (stof(a.get_string()) >= stof(b))
			return true;
		return false;
	}
}
bool operator>=(int a, Var& b)
{
	if (b.get_integer() != 0)
	{
		if (b.get_integer() != 0)
		{
			if (a >= b.get_integer())
				return true;
			return false;
		}
	}
	else if (b.get_float() != 0)
	{
		if (a >= b.get_float())
			return true;
		return false;
	}
	else if (!(b.get_string().empty()))
	{
		if (a >= stof(b.get_string()))
			return true;
		return false;
	}
}
bool operator>=(float a, Var& b)
{
	if (b.get_integer() != 0)
	{
		if (b.get_integer() != 0)
		{
			if (a >= b.get_integer())
				return true;
			return false;
		}
	}
	else if (b.get_float() != 0)
	{
		if (a >= b.get_float())
			return true;
		return false;
	}
	else if (!(b.get_string().empty()))
	{
		if (a >= stof(b.get_string()))
			return true;
		return false;
	}
}
bool operator>=(string a, Var& b)
{
	if (b.get_integer() != 0)
	{
		if (b.get_integer() != 0)
		{
			if (stof(a) >= b.get_integer())
				return true;
			return false;
		}
	}
	else if (b.get_float() != 0)
	{
		if (stof(a) >= b.get_float())
			return true;
		return false;
	}
	else if (!(b.get_string().empty()))
	{
		if (stof(a) >= stof(b.get_string()))
			return true;
		return false;
	}
}
bool operator<=(Var& a, Var& b)
{
	if (a.get_integer() != 0)
	{
		if (b.get_integer() != 0)
		{
			if (a.get_integer() <= b.get_integer())
				return true;
			return false;
		}
		else if (b.get_float() != 0)
		{
			if (a.get_integer() <= b.get_float())
				return true;
			return false;
		}
		else if (!(b.get_string().empty()))
		{
			if (a.get_integer() <= stof(b.get_string()))
				return true;
			return false;
		}
	}
	else if (a.get_float() != 0)
	{
		if (b.get_integer() != 0)
		{
			if (a.get_float() <= b.get_integer())
				return true;
			return false;
		}
		else if (b.get_float() != 0)
		{
			if (a.get_float() <= b.get_float())
				return true;
			return false;
		}
		else if (!(b.get_string().empty()))
		{
			if (a.get_float() <= stof(b.get_string()))
				return true;
			return false;
		}
	}
	else if (!(a.get_string().empty()))
	{
		if (b.get_integer() != 0)
		{
			if (stof(a.get_string()) <= b.get_integer())
				return true;
			return false;
		}
		else if (b.get_float() != 0)
		{
			if (stof(a.get_string()) <= b.get_float())
				return true;
			return false;
		}
		else if (!(b.get_string().empty()))
		{
			if (stof(a.get_string()) <= stof(b.get_string()))
				return true;
			return false;
		}
	}
}
bool operator<=(Var& a, int b)
{
	if (a.get_integer() != 0)
	{
		if (a.get_integer() <= b)
			return true;
		return false;
	}
	else if (a.get_float() != 0)
	{
		if (a.get_float() <= b)
			return true;
		return false;
	}
	else if (!(a.get_string().empty()))
	{
		if (stof(a.get_string()) <= b)
			return true;
		return false;
	}
}
bool operator<=(Var& a, float b)
{
	if (a.get_integer() != 0)
	{
		if (a.get_integer() <= b)
			return true;
		return false;
	}
	else if (a.get_float() != 0)
	{
		if (a.get_float() <= b)
			return true;
		return false;
	}
	else if (!(a.get_string().empty()))
	{
		if (stof(a.get_string()) <= b)
			return true;
		return false;
	}
}
bool operator<=(Var& a, string b)
{
	if (a.get_integer() != 0)
	{
		if (a.get_integer() <= stof(b))
			return true;
		return false;
	}
	else if (a.get_float() != 0)
	{
		if (a.get_float() <= stof(b))
			return true;
		return false;
	}
	else if (!(a.get_string().empty()))
	{
		if (stof(a.get_string()) <= stof(b))
			return true;
		return false;
	}
}
bool operator<=(int a, Var& b)
{
	if (b.get_integer() != 0)
	{
		if (b.get_integer() != 0)
		{
			if (a <= b.get_integer())
				return true;
			return false;
		}
	}
	else if (b.get_float() != 0)
	{
		if (a <= b.get_float())
			return true;
		return false;
	}
	else if (!(b.get_string().empty()))
	{
		if (a <= stof(b.get_string()))
			return true;
		return false;
	}
}
bool operator<=(float a, Var& b)
{
	if (b.get_integer() != 0)
	{
		if (b.get_integer() != 0)
		{
			if (a <= b.get_integer())
				return true;
			return false;
		}
	}
	else if (b.get_float() != 0)
	{
		if (a <= b.get_float())
			return true;
		return false;
	}
	else if (!(b.get_string().empty()))
	{
		if (a <= stof(b.get_string()))
			return true;
		return false;
	}
}
bool operator<=(string a, Var& b)
{
	if (b.get_integer() != 0)
	{
		if (b.get_integer() != 0)
		{
			if (stof(a) <= b.get_integer())
				return true;
			return false;
		}
	}
	else if (b.get_float() != 0)
	{
		if (stof(a) <= b.get_float())
			return true;
		return false;
	}
	else if (!(b.get_string().empty()))
	{
		if (stof(a) <= stof(b.get_string()))
			return true;
		return false;
	}
}
bool operator==(Var& a, Var& b)
{
	if (a.get_integer() != 0)
	{
		if (b.get_integer() != 0)
		{
			if (a.get_integer() == b.get_integer())
				return true;
			return false;
		}
		else if (b.get_float() != 0)
		{
			if (a.get_integer() == b.get_float())
				return true;
			return false;
		}
		else if (!(b.get_string().empty()))
		{
			if (a.get_integer() == stof(b.get_string()))
				return true;
			return false;
		}
	}
	else if (a.get_float() != 0)
	{

		if (b.get_integer() != 0)
		{
			if (a.get_float() == b.get_integer())
				return true;
			return false;
		}
		else if (b.get_float() != 0)
		{
			if (a.get_float() == b.get_float())
				return true;
			return false;
		}
		else if (!(b.get_string().empty()))
		{
			if (a.get_float() == stof(b.get_string()))
				return true;
			return false;
		}
	}
	else if (!(a.get_string().empty()))
	{

		if (b.get_integer() != 0)
		{
			if (stof(a.get_string()) == b.get_integer())
				return true;
			return false;
		}
		else if (b.get_float() != 0)
		{
			if (stof(a.get_string()) == b.get_float())
				return true;
			return false;
		}
		else if (!(b.get_string().empty()))
		{
			if (stof(a.get_string()) == stof(b.get_string()))
				return true;
			return false;
		}
	}
}
bool operator==(Var& a, int b)
{
	if (a.get_integer() != 0)
	{
		if (a.get_integer() == b)
			return true;
		return false;
	}
	else if (a.get_float() != 0)
	{
		if (a.get_float() == b)
			return true;
		return false;
	}
	else if (!(a.get_string().empty()))
	{
		if (stof(a.get_string()) == b)
			return true;
		return false;
	}
}
bool operator==(Var& a, float b)
{
	if (a.get_integer() != 0)
	{
		if (a.get_integer() == b)
			return true;
		return false;
	}
	else if (a.get_float() != 0)
	{
		if (a.get_float() == b)
			return true;
		return false;
	}
	else if (!(a.get_string().empty()))
	{
		if (stof(a.get_string()) == b)
			return true;
		return false;
	}
}
bool operator==(Var& a, string b)
{
	if (a.get_integer() != 0)
	{
		if (a.get_integer() == stof(b))
			return true;
		return false;
	}
	else if (a.get_float() != 0)
	{
		if (a.get_float() == stof(b))
			return true;
		return false;
	}
	else if (!(a.get_string().empty()))
	{
		if (stof(a.get_string()) == stof(b))
			return true;
		return false;
	}
}
bool operator==(int a, Var& b)
{
	if (b.get_integer() != 0)
	{
		if (b.get_integer() != 0)
		{
			if (a == b.get_integer())
				return true;
			return false;
		}
	}
	else if (b.get_float() != 0)
	{
		if (a == b.get_float())
			return true;
		return false;
	}
	else if (!(b.get_string().empty()))
	{
		if (a == stof(b.get_string()))
			return true;
		return false;
	}
}
bool operator==(float a, Var& b)
{
	if (b.get_integer() != 0)
	{
		if (b.get_integer() != 0)
		{
			if (a == b.get_integer())
				return true;
			return false;
		}
	}
	else if (b.get_float() != 0)
	{
		if (a == b.get_float())
			return true;
		return false;
	}
	else if (!(b.get_string().empty()))
	{
		if (a == stof(b.get_string()))
			return true;
		return false;
	}
}
bool operator==(string a, Var& b)
{
	if (b.get_integer() != 0)
	{
		if (b.get_integer() != 0)
		{
			if (stof(a) == b.get_integer())
				return true;
			return false;
		}
	}
	else if (b.get_float() != 0)
	{
		if (stof(a) == b.get_float())
			return true;
		return false;
	}
	else if (!(b.get_string().empty()))
	{
		if (stof(a) == stof(b.get_string()))
			return true;
		return false;
	}
}
bool operator!=(Var& a, Var& b)
{
	if (a.get_integer() != 0)
	{
		if (b.get_integer() != 0)
		{
			if (a.get_integer() != b.get_integer())
				return true;
			return false;
		}
		else if (b.get_float() != 0)
		{
			if (a.get_integer() != b.get_float())
				return true;
			return false;
		}
		else if (!(b.get_string().empty()))
		{
			if (a.get_integer() != stof(b.get_string()))
				return true;
			return false;
		}
	}
}
bool operator!=(Var& a, int b)
{
	if (a.get_integer() != 0)
	{
		if (a.get_integer() != b)
			return true;
		return false;
	}
	else if (a.get_float() != 0)
	{
		if (a.get_float() != b)
			return true;
		return false;
	}
	else if (!(a.get_string().empty()))
	{
		if (stof(a.get_string()) != b)
			return true;
		return false;
	}
}
bool operator!=(Var& a, float b)
{
	if (a.get_integer() != 0)
	{
		if (a.get_integer() != b)
			return true;
		return false;
	}
	else if (a.get_float() != 0)
	{
		if (a.get_float() != b)
			return true;
		return false;
	}
	else if (!(a.get_string().empty()))
	{
		if (stof(a.get_string()) != b)
			return true;
		return false;
	}
}
bool operator!=(Var& a, string b)
{
	if (a.get_integer() != 0)
	{
		if (a.get_integer() != stof(b))
			return true;
		return false;
	}
	else if (a.get_float() != 0)
	{
		if (a.get_float() != stof(b))
			return true;
		return false;
	}
	else if (!(a.get_string().empty()))
	{
		if (stof(a.get_string()) != stof(b))
			return true;
		return false;
	}
}
bool operator!=(int a, Var& b)
{
	if (b.get_integer() != 0)
	{
		if (b.get_integer() != 0)
		{
			if (a != b.get_integer())
				return true;
			return false;
		}
	}
	else if (b.get_float() != 0)
	{
		if (a != b.get_float())
			return true;
		return false;
	}
	else if (!(b.get_string().empty()))
	{
		if (a != stof(b.get_string()))
			return true;
		return false;
	}
}
bool operator!=(float a, Var& b)
{
	if (b.get_integer() != 0)
	{
		if (b.get_integer() != 0)
		{
			if (a != b.get_integer())
				return true;
			return false;
		}
	}
	else if (b.get_float() != 0)
	{
		if (a != b.get_float())
			return true;
		return false;
	}
	else if (!(b.get_string().empty()))
	{
		if (a != stof(b.get_string()))
			return true;
		return false;
	}
}
bool operator!=(string a, Var& b)
{
	if (b.get_integer() != 0)
	{
		if (b.get_integer() != 0)
		{
			if (stof(a) != b.get_integer())
				return true;
			return false;
		}
	}
	else if (b.get_float() != 0)
	{
		if (stof(a) != b.get_float())
			return true;
		return false;
	}
	else if (!(b.get_string().empty()))
	{
		if (stof(a) != stof(b.get_string()))
			return true;
		return false;
	}
}


