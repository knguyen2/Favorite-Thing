#include "SneakerCollection.h"


//Default constructor for SneakerCollection class 
SneakerCollection::SneakerCollection()
{
	collectionSize = 0;
}


// A method that checks and inform user if an item already exists 
bool SneakerCollection::findSecond(Sneaker second)
{
	for (int i = 0; i < collectionSize; i++)
	{
		if (second.getSneakerName() == enterSneaker[i].getSneakerName())
		{
			cout << "\n\n\n\n		* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * " << endl;
			cout << "\n		*			    That \"" << enterSneaker[i].getSneakerName() << "\" is NOT unique!            		          * " << endl;
			cout << "\n		*		      The vault can ONLY store this item once		          * " << endl;
			cout << "\n		* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * " << endl;
			cout << endl;
			return false;
		}
	}
	return true;
}

// Function for adding more items to the list and make sure no same item entered twice 
int SneakerCollection::moreSneaker()
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
int SneakerCollection::getCollectionSize()
{
	return collectionSize;
}

//Output the list of item(s) to the user
void SneakerCollection::printList()
{
	int i;
	for (i = 0; i < collectionSize; i++)
	{
		cout << enterSneaker[i];
		cout << endl << endl;
	}
}