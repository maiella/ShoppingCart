/**********************************************
**	Author:		Scott Cooper
**	Date:		11/18/15
**	Assignment:	Item hpp file
**********************************************/
#ifndef ITEM_HPP
#define ITEM_HPP
#include <string>
#include <iostream>


class Item
	{
	private:
		std::string name;
		double price;
		int quantity;

	public:
		Item();
		Item(std::string Name, double Price, int Quantity);
		void setName(std::string Name);
		void setPrice(double Price);
		void setQuantity(int Quant);
		std::string getName();
		double getPrice();
		int getQuantity();
	};

#endif