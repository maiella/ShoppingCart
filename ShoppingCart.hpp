/**********************************************
**	Author:		Scott Cooper
**	Date:		11/18/15
**	Assignment:	ShoppingCart hpp file
**********************************************/
#ifndef SHOPPINGCART_HPP
#define SHOPPINGCART_HPP

#include "Item.hpp"

class ShoppingCart
	{
	private:
		static const int size = 100;
		Item *cartArray[size];
		int arrayEnd;

	public:
		ShoppingCart();
		void addItem(Item *item);
		double totalPrice();
		void setArrayEnd(int number);
		void resetArray(int number);
	};

#endif 