#pragma once
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//Declare a const for the maximum number of elements (data)
const int MAXELEMENT = 5;

//Declare a class for Sneaker
class Sneaker
{
//5 private member elements (data)
private:
	string sneakerBrand;
	string sneakerName;
	string sneakerColor;
	string sneakerID;
	double sneakerPrice;

public:
	Sneaker();

	//Retrieves user input and stores into the list (vault)
	void getMoreSneaker();
	
	//Retrieves user input for sneaker brand
	string getSneakerBrand();
	
	//Retrives user input for sneaker name 
	string getSneakerName();

	friend ostream & operator << (ostream &o, const Sneaker &sneaker);
};

