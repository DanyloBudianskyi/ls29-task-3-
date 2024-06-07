#pragma once
#include "Overcoat.h"
#include <vector>
#include <algorithm>

class Shop
{
	vector<Overcoat> shop;
public:
	void addOvercoat(Overcoat obj);
	void deleteOvercoat(int index);
	void editOvercoat(int index, int newSize);
	void searchOvercoat(string type)const;
	void sortByPrice();
	void showAll()const;
};

