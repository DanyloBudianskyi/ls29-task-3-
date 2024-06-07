#pragma once
#include <string>
#include <iostream>
using namespace std;

class Overcoat
{
	string title;
	string type;
	int size;
	float price;
public:
	Overcoat();
	Overcoat(string title, string type, int size, float price);

	void setTitle(string title);
	void setType(string type);
	void setSize(int size);
	void setPrice(float price);

	string getTitle()const;
	string getType()const;
	int getSize()const;
	float getPrice()const;

	bool operator==(const Overcoat& obj)const&;

	bool operator!=(const Overcoat& obj)const&;

	bool operator>(const Overcoat& obj)const&;

	bool operator<(const Overcoat& obj)const&;

	bool operator>=(const Overcoat& obj)const&;

	bool operator<=(const Overcoat& obj)const&;
	
	//----------------------------------------------------------

	Overcoat& operator -- (); //prefix

	Overcoat& operator ++ (); //prefix

	Overcoat operator -- (int n); //postfix

	Overcoat operator ++ (int n); //postfix

	//----------------------------------------------------------

	friend ostream& operator << (ostream& os, const Overcoat& obj);

	friend istream& operator >> (istream& is, Overcoat& obj);
};

