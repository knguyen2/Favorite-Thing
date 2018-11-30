/*
	Author: Kim Nguyen
	Assignment: 05
	Date: Thursday, November 29, 2018
	Class: INFO 450 - FALL 2018
	Instructor: Michele Kelo

	REQUIREMENT:
		Constraints:
			Favorite things needs to have data that describes and identifies them (info that you’d like to track)
		Capabilities:
			***Your program should provide welcoming info, describing the favorite thing to be tracked
			***Your program should provide input capability for you to capture one or more new items to add to the list
			***You program should continue to allow input of new favorite items until the user selects not to continue
			Your program should check and NOT allow users to add the same thing more than once (note: must have a way of identifying a duplicate)
			Your program should provide the capability to display user's list of things to the console
		At a minimum you should have :
			A class for favorite thing
			A array class that contains the collections of favorite things
		Your favorite thing class should contain:
			At least 5 private member elements (data) (name, cost, qty, rating, color)
			Use the string class for any member data that a name or description
			A default constructor
			A method to capture a new favorite item from the user
			Getters and setters methods for each private member
			An overloaded << operator friend function that will display your favorite item to the console
		Your array class should have :
			An Array of favorite things (max size 100) and any additional member data needed for the list (e.g. collectionSize)
			One or more constructors
			A method that checks if an item already exists.  The method should be passed a reference to a favorite thing object and return a boolean true/false (duplicate or not) value.
			A method to Add an new item to the list when passed a reference to a favorite thing object (note: you should have already determines that the item is not duplicate).
			A method to print the entire list to the console in a ”pretty way”, leveraging the overloaded << operator from the favorite thing class
		
		
		Your program should be constructed such that you have one .h and .cpp file per class. And the main (driver) function should be in a separate cpp file.
*/
#include <iostream>
#include "SneakerArray.h"
using namespace std;

//Function Declaration
void welcomeMsg();


//Function to display welcome message to the console
void welcomeMsg()
{

	cout << "\n\n\t\t\t\t    * * * * * * * * * * * * * * * * " << endl;
	cout << "\t\t\t\t    *                             * " << endl;
	cout << "\t\t\t\t    *	     Welcome to the       * " << endl;
	cout << "\t\t\t\t    *        Sneaker Vault        * " << endl;
	cout << "\t\t\t\t    *                             * " << endl;
	cout << "\t\t\t\t    *  Follow instructions below  * " << endl;
	cout << "\t\t\t\t    * to store your fav sneakers  * " << endl;
	cout << "\t\t\t\t    *                             * " << endl;
	cout << "\t\t\t\t    *       Press Enter to        * " << endl;
	cout << "\t\t\t\t    *       open the vault!       * " << endl;
	cout << "\t\t\t\t    *                             * " << endl;
	cout << "\t\t\t\t    * * * * * * * * * * * * * * * * " << endl;

}


int main()
{
	welcomeMsg();
	SneakerArray myCollection;
	bool moreSneaker = true;

	do
	{
		char another;
		myCollection.moreSneaker();
		if (myCollection.getCollectionSize() >= 100)
		{
			moreSneaker = false;
			break;
		}
		cout << "\n\t\t\t     Do you have another favorite sneaker? Hit 'Y' for yes" << endl;
		cout << "\n\t\t\t     Otherwise, hit any key to exit out of the vault --->  ";
		cin >> another;
		cout << endl;
		if (another == 'Y' || another == 'y')
		{
			cout << endl;
			cout << "\n\n\t\t\t\t * * * * * * ADDING MORE SNEAKER * * * * * * ";
			moreSneaker = true;
		}
		else
		{
			moreSneaker = false;
		}		
	} while (moreSneaker == true);
	
	myCollection.printList();
	system("pause");
	return 0;

}




