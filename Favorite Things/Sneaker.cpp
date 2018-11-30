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

	cout << "\n\n\t\t What's your favorite sneaker brand? --->  ";
	getline(cin, sneakerBrand);

	cout << "\n\n\t\t What's the name of your favorite sneaker? --->  ";
	getline(cin, sneakerName);

	cout << "\n\n\t\t What color is your \"" << sneakerName << "\"? --->  ";
	getline(cin, sneakerColor);

	cout << "\n\n\t\t Give your \"" << sneakerName << "\" an ID --->  ";
	getline(cin, sneakerID);

	cout << "\n\n\t\t How much did your \"" << sneakerName << "\" cost? --->  $";
	cin >> sneakerPrice;
	   
	cout << "\n\n\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *" << endl;
	cout << "\n\t\t\t     YOUR SNEAKER INFOMATION WAS SAVED AND KEPT SAFE AT THE VAULT " << endl;
	cout << "\n\n\t\t\t\t\t* * * * * * * * * * * * * * * " << endl;

}

//overloaded << operator friend function that will display back favorite item to the console
ostream& operator<< (ostream&o, const Sneaker& sneaker)
{
	o << "\n\n\t\t\t    * * * * * * *  Your collection has * * * * * * * *" << endl;
	o << "\t\t\t                       + + + + +                   " << endl;
	o << "\t\t\t                         + + +                     " << endl;
	o << "\t\t\t                          + +                      " << endl;
	o << "\t\t\t                           +                       " << endl;
	o << "\n\t\t\t\t\t  Sneaker Brand: " << sneaker.sneakerBrand << endl;
	o << "\n\t\t\t\t\t  Sneaker Name: " << sneaker.sneakerName << endl;
	o << "\n\t\t\t\t\t  Sneaker Color: " << sneaker.sneakerColor << endl;
	o << "\n\t\t\t\t\t  Sneaker ID: " << sneaker.sneakerID << endl;
	o << "\n\t\t\t\t\t  Sneaker Price: " << sneaker.sneakerPrice << endl;
	
	return o;
}