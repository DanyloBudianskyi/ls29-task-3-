#include "Shop.h"


void Shop::addOvercoat(Overcoat obj)
{
	shop.push_back(obj);
}

void Shop::deleteOvercoat(int index)
{
	shop.erase(shop.begin() + index);
}

void Shop::editOvercoat(int index, int newSize)
{
	if (index >= 0 && index < shop.size()) {
		shop[index].setSize(newSize);
	}
}

void Shop::searchOvercoat(string type) const
{
	for (auto overcoat : shop)
	{
		if (overcoat.getType() == type)
		{
			cout << overcoat;
		}
	}
}

void Shop::sortByPrice()
{
	sort(shop.begin(), shop.end());
}

void Shop::showAll() const
{
	for (auto overcoat : shop) cout << overcoat << endl;
}
