#pragma once
#include "Sneaker.h"


//Declare a class for SneakerArray
class SneakerArray
{
private: 
	//Creating an array for the list with 100 in size
	Sneaker enterSneaker[100];
	int collectionSize;
public:
	SneakerArray();
	int moreSneaker();
	bool findSecond(Sneaker second);
	int getCollectionSize();
	void printList();
};
