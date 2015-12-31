/**********************************************
**	Author:		Scott Cooper
**	Date:		11/18/15
**	Assignment:	ShoppingCart hpp file
**********************************************/
#include "ShoppingCart.hpp"
	ShoppingCart::ShoppingCart()
		{
		setArrayEnd(0);
		resetArray(0);
		}
	void ShoppingCart::setArrayEnd(int number)
		{
		arrayEnd = number;
		}
	void ShoppingCart::resetArray(int number)
		{
		for(int i = 0; i < size; i++)
			cartArray[i] = NULL;
		}
	void ShoppingCart::addItem(Item *item)	// add the Item to the cartArray and add 1 to the arrayEnd
		{
		cartArray[arrayEnd] = item;
		arrayEnd++;
		}
	double ShoppingCart::totalPrice()	//calculate the total price of stuff in the cart with a for loop
		{
		double total = 0;
		for( int i = 0; i < arrayEnd; i++ )
			total += ( cartArray[i]->getQuantity() * cartArray[i]->getPrice() );
		return total;
		}