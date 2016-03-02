/*
 * CTECList.cpp
 *
 *  Created on: Feb 22, 2016
 *      Author: snem8901
 */

#include "CTECList.h"
#include "assert.h"

template<class Type>
CTECList<Type>::CTECList()
{
	this->size = 0;
	this->head = nullptr;
	this->end = nullptr;
}

template<class Type>
CTECList<Type>::~CTECList()
{

}

template<class Type>
Type CTECList<Type>::removeFromFront()
{
	//Check that not removing from any empty list
	assert(size > 0);
	//Declare an variable of the type to return.
	Type thingToRemove;
	//Find the next spot.
	ArrayNode<Type> * newHead = new ArrayNode<Type>();
	newHead = head->getNext();
	//Get what head is holding.
	thingToRemove = this->head->getValue();
	//Remove what head is pointing to.
	delete head;
	//Move head to next spot.
	head = newHead;


	return thingToRemove;
}



template<class Type>
Type CTECList<Type>::removeFromBack()
{

	assert(size > 0);
	Type removeThis;
	ArrayNode<Type> * newEnd = new ArrayNode<Type>();
	newEnd = end->getPrevious();
	removeThis = this->end->getValue();
	delete end;
	end = newEnd;

	return removeThis;



}

template<class Type>
Type CTECList<Type>::removeFromPosition(int index)
{

	assert(index >= 0);
	assert(index < size);
	assert(this->size>0);
	Type storedValue;
	ArrayNode<Type> * current = head;
	ArrayNode<Type> * previousSpot;
	ArrayNode<Type> * newNext;

	for(int spot = 0; spot < index +1; spot++)
	{
		if(spot == index-1)
		{
			previousSpot = current;
		}
		if(spot == index)
		{
			storedValue = current->getValue();
			newNext = current->getNext();
			delete current;
		}

		current = current->getNext();
	}

	previousSpot->setNext(newNext);
	return storedValue;


}

template<class Type>
void CTECList<Type>::calculateSize()
{
	assert(size >= 0);

	int count = 0;
	if(head == nullptr)
	{
		size = 0;
	}
	else
	{
		count++;
		ArrayNode<Type> * current = head;
		while(current->getNext() != nullptr)
		{
			count++;
			current = current->getNext();
		}
		size = count;
	}


}
