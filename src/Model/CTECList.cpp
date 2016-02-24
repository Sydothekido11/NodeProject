/*
 * CTECList.cpp
 *
 *  Created on: Feb 22, 2016
 *      Author: snem8901
 */

#include "CTECList.h"

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
	assert(this->size > 0);
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
Type CTECList<Type>::removeFromIndex(int position)
{
	assert(index >= 0 < size);
	assert(size > 0);
	previous = head->getPrevious();
	delete = this->head->deleteMe();
	newHead = head->newNext();
	ArrayNode<Type> * newNext = new ArrayNode<Type>();





}
