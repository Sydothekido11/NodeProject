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
	//Find the next spot.
	ArrayNode<Type> * newHead = new ArrayNode<Type>();
	newHead = head->getNext();
	//Remove head
	delete head;
	//Move head to next spot.
	head = newHead;
}
