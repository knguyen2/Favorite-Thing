#pragma once
#include "Sneaker.h"


//Declare a class for SneakerCollection
class SneakerCollection
{
private: 
	//Creating an array for the list with 100 in size
	Sneaker enterSneaker[100];
	int collectionSize;
public:
	SneakerCollection();
	int moreSneaker();
	bool findSecond(Sneaker name);
	int getCollectionSize();
	void printList();
};
