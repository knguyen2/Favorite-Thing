#include "SneakerArray.h"


//Default constructor for SneakerArray class 
SneakerArray::SneakerArray()
{
	collectionSize = 0;
}


//Find duplicate of items 
bool SneakerArray::findSecond(Sneaker second)
{
	for (int i = 0; i < collectionSize; i++)
	{
		if (second.getSneakerName() == enterSneaker[i].getSneakerName())
		{
			cout << "\n\n\n\n\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * " << endl;
			cout << "\n\t\t* That \"" << enterSneaker[i].getSneakerName() << "\" is NOT unique!" << endl;
			cout << "\n\t\t* The vault can ONLY store the item once * " << endl;
			cout << "\n\n\n\n\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * " << endl;
			cout << endl;
			return false;
		}
	}
	return true;
}

//Adding more items to the list and make sure no same items entered twice 
int SneakerArray::moreSneaker()
{
	Sneaker newSneaker;
	newSneaker.getMoreSneaker();
	if (findSecond(newSneaker))
	{
		enterSneaker[collectionSize] = newSneaker;
		collectionSize++;
		return 0;
	}
	else
	{
		return MAXELEMENT;
	}
}

//geting the size of the collection
int SneakerArray::getCollectionSize()
{
	return collectionSize;
}

//Output the list of item(s) to the user
void SneakerArray::printList()
{
	int i;
	for (i = 0; i < collectionSize; i++)
	{
		cout << enterSneaker[i];
		cout << endl << endl;
	}
}