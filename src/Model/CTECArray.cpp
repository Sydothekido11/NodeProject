/*
 * CTECArray.cpp
 *
 *  Created on: Feb 2, 2016
 *      Author: snem8901
 */

#include "CTECArray.h"
using namespace std;

template <class Type>
CTECArray<Type>::CTECArray(int size)
{
	this->size = size;
}

template <class Type>
Type* CTECArray<Type> :: get(int position)
{
	//We need to do bounds checking so we do not crash the program.
	if(position >= size || position < 0)
	{
		cerr << "position value is out of bounds " << endl;
		return nullptr;
	}
	else
	{
		ArrayNode<Type> * current = head;
		for(int spot = 0; spot <= position; spot++)
		{
			if(spot != position)
			{
				current = current->next;
			}
			else
			{
				return current->getValue();
			}
		}
	}
}

template <class Type>
int CTECArray<Type> :: getSize()
{
	return this->size;
}

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

template <class Type>
CTECArray<Type>::~CTECArray()
{

}
