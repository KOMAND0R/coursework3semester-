#include "abonent.h"

abonent::abonent()
{

}

abonent::abonent(const abonent % o)
{
	this->surname = o.surname;
	this->number = o.number;
	this->tel = o.tel;
}

abonent % abonent::operator=(abonent % o)
{
	this->surname = o.surname;
	this->number = o.number;
	this->tel = o.tel;
	return *this;
}

