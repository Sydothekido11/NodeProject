/*
 * CTECArray.cpp
 *
 *  Created on: Feb 2, 2016
 *      Author: snem8901
 */

#include "CTECArray.h"
using namespace std;

/**
 * Creates an array that has to do with size. Also creates a defense so the area is not below a size 0. Made a first ArrayNode, the head.
 */
template <class Type>
CTECArray<Type>::CTECArray(int size)
{
	this->size = size;
	this->head = nullptr;

	//Defensive
	assert(size > 0);


	for(int index = 0; index < size; index++)
	{

		if(head != nullptr)
		{
			//Regular ArrayNodes are being made.
			ArrayNode<Type> * nextNode = new ArrayNode<Type>();
			nextNode->setNext(head);
			this->head = &nextNode;
		}
		else
		{
			//The first ArrayNode needs to be made.
			ArrayNode<Type> * firstNode = new ArrayNode<Type>();
			this->head = firstNode;

		}
	}
}
/**
 * Creates a reminder when there is an out of bounds error.
 */
template <class Type>
Type CTECArray<Type> :: get(int position)
{
	//We need to do bounds checking so we do not crash the program.
	assert(position < size && position >= 0);
	ArrayNode<Type> * current = head;
	for(int spot = 0; spot <= position; spot++)
	{
		if(spot != position)
		{
			current = current->getNext();
		}
		else
		{
			return current->getValue();
		}
	}
}
 /**
  * Returns the size of the array.
  */
template <class Type>
int CTECArray<Type> :: getSize()
{
	return this->size;
}

/**
 * Finds the out of bounds error.
 */
template <class Type>
void CTECArray<Type> :: set(int position, Type value)
{
	if(position >= size || position < 0)
	{
		cerr << "position value is out of bounds " << endl;

	}
	else
	{
		ArrayNode<Type> * current = head;
		for(int spot = 0; spot < position; spot++)
		{
			if(spot != position)
			{
				current = current->getNext();
			}
			else
			{
				current->setValue(value);
			}
		}
	}
}

/**
 * This is a de-constructor. Removes the head and the rest of the array when it is no longer needed.
 */
template <class Type>
CTECArray<Type>::~CTECArray()
{
	ArrayNode<Type> * deleteMe = head;
	for(int index = 0; index < size; index++)
	{
		if(deleteMe->getNext() != nullptr)
		{
			head = deleteMe->getNext();
			deleteMe->setNext(nullptr);
			delete deleteMe;
			deleteMe = head;
		}
		else
		{
			delete deleteMe;
			deleteMe = head;
		}
	}

	delete head;
}


