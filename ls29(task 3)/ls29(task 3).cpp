#include <iostream>
#include "Overcoat.h"
#include "Shop.h"

int main()
{
    Overcoat coat1("Winter Coat", "Male", 42, 120.0);
    Overcoat coat2("Raincoat", "Female", 40, 80.0);
    Overcoat coat3("Trench Coat", "Kids", 44, 150.0);
    Overcoat coat4("Winter Coat", "Male", 46, 140.0);

    Shop shop;

    shop.addOvercoat(coat1);
    shop.addOvercoat(coat2);
    shop.addOvercoat(coat3);
    shop.addOvercoat(coat4);

    shop.showAll();
    
    cout << "------------------------------------------------------\n";

    shop.editOvercoat(2, 40);
    shop.deleteOvercoat(0);
    shop.sortByPrice();
    shop.showAll();
}

