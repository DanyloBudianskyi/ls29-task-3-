#include "Overcoat.h"

Overcoat::Overcoat()
{
    title = "Empty";
    type = "Empty";
    size = 0;
    price = 0;
}

Overcoat::Overcoat(string title, string type, int size, float price)
{
    this->title = title;
    this->type = type;
    this->size = size;
    this->price = price;
}

void Overcoat::setTitle(string title)
{
    this->title = title;
}

void Overcoat::setType(string type)
{
    this->type = type;
}

void Overcoat::setSize(int size)
{
    this->size = size;
}

void Overcoat::setPrice(float price)
{
    this->price = price;
}

string Overcoat::getTitle() const
{
    return title;
}

string Overcoat::getType() const
{
    return type;
}

int Overcoat::getSize() const
{
    return size;
}

float Overcoat::getPrice() const
{
    return price;
}

bool Overcoat::operator==(const Overcoat& obj) const&
{
    if (this->type == obj.type) { return true; }
    else { return false; }
}

bool Overcoat::operator!=(const Overcoat& obj) const&
{
    return !(this->type == obj.type);
}

bool Overcoat::operator>(const Overcoat& obj) const&
{
    if (this->price > obj.price) { return true; }
    else { return false; }
}

bool Overcoat::operator<(const Overcoat& obj) const&
{
    return !(this->price > obj.price);
}

bool Overcoat::operator>=(const Overcoat& obj) const&
{
    return (this->price > obj.price) || this->price == obj.price;
}

bool Overcoat::operator<=(const Overcoat& obj) const&
{
    return !(this->price >= obj.price) || this->price == obj.price;
}

Overcoat& Overcoat::operator--()
{
    size -= 2;
    return *this;
}

Overcoat& Overcoat::operator++()
{
    size -= 2;
    return *this;
}

Overcoat Overcoat::operator--(int n)
{
    Overcoat tmp = *this;
    this->size -= 2;
    return tmp;
}

Overcoat Overcoat::operator++(int n)
{
    Overcoat tmp = *this;
    this->size += 2;
    return tmp;
}

ostream& operator<<(ostream& os, const Overcoat& obj)
{
    os << "Title: " << obj.title << "\nType: " << obj.type << "\nSize: " << obj.size << "\nPrice: " << obj.price << endl;
    return os;
}

istream& operator>>(istream& is, Overcoat& obj)
{
    cout << "Title/Type/Size/Price: ";
    is >> obj.title >> obj.type >> obj.size >> obj.price;
    return is;
}
