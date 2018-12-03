#include "Sneaker.h"

//Default constructor for Sneaker class
Sneaker::Sneaker()
{
	sneakerBrand = "";
	sneakerName = "";
	sneakerColor = "";
	sneakerID = "";
	sneakerPrice = 0;
}


string Sneaker::getSneakerBrand()
{
	return sneakerBrand;
}

string Sneaker::getSneakerName()
{
	return sneakerName;
}

void Sneaker::getMoreSneaker()
{
	//clear the buffer
	cin.clear();
	cin.ignore();

	cout << "\n\n		 What's your favorite sneaker brand? --->  ";
	getline(cin, sneakerBrand);

	cout << "\n\n		 What's the name of your favorite sneaker? --->  ";
	getline(cin, sneakerName);

	cout << "\n\n		 What color is your \"" << sneakerName << "\"? --->  ";
	getline(cin, sneakerColor);

	cout << "\n\n		 Give your \"" << sneakerName << "\" an ID --->  ";
	getline(cin, sneakerID);

	cout << "\n\n		 How much did your \"" << sneakerName << "\" cost? --->  $";
	cin >> sneakerPrice;

}

//overloaded << operator friend function that will display back favorite item to the console
ostream& operator<< (ostream&o, const Sneaker& sneaker)
{
	o << "			   	       Let's see what you have before you go      \n" << endl;
	o << "				                   + + + + +                        " << endl;
	o << "				                     + + +                          " << endl;
	o << "				                      + +                           " << endl;
	o << "				                       +                           \n " << endl;
	o << "\n					     FAVORITE SNEAKER(s) " << endl;
	o << "\n					     BRAND:  " << sneaker.sneakerBrand << endl;
	o << "\n					     NAME:   " << sneaker.sneakerName << endl;
	o << "\n					     COLOR:  " << sneaker.sneakerColor << endl;
	o << "\n					     ID:     " << sneaker.sneakerID << endl;
	o << "\n					     Price:  $" << sneaker.sneakerPrice << endl;
	
	return o;
}