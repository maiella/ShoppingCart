/**********************************************
**	Author:		Scott Cooper
**	Date:		11/18/15
**	Assignment: Shopping Cart Main
**********************************************/
#include <iostream>
#include <string>
using namespace std;
#include "ShoppingCart.hpp"

int main()
	{
	Item a("potato", 1.29, 5);
	Item b("pumpkin", 4.35, 2);
	Item c("watermelon", 3.50, 3);
	Item d("cucumber", 0.75, 4);

	ShoppingCart sc1;
	sc1.addItem(&a);
	sc1.addItem(&b);
    sc1.addItem(&c);
    sc1.addItem(&d);
    double diff = sc1.totalPrice();
    cout<<"Total price is : "<<diff;
   
   return 0;





	return 0;
	}