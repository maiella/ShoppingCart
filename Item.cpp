/**********************************************
**	Author:		Scott Cooper
**	Date:		11/18/15
**	Assignment:	Item cpp file
**********************************************/
#include "Item.hpp"
	Item::Item()
		{
		setName("");
		setPrice(0.0);
		setQuantity(0);
		}
	Item::Item(std::string Name, double Price, int Quantity)
		{
		setName(Name);
		setPrice(Price);
		setQuantity(Quantity);
		}
	void Item::setName(std::string Name)
		{
		name = Name;
		}
	void Item::setPrice(double Price)
		{
		price = Price;
		}
	void Item::setQuantity(int Quant)
		{
		quantity = Quant;
		}
	std::string Item::getName()
		{
		return name;
		}
	double Item::getPrice()
		{
		return price;
		}
	int Item::getQuantity()
		{
		return quantity;
		}