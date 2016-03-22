/*
 * NodeController.cpp
 *
 *  Created on: Jan 27, 2016
 *      Author: snem8901
 */

#include "NodeController.h"
#include "../Model/Timer.h"



NodeController::NodeController()
{
	notHipsterInts = new CTECArray<int>(5);
	numbers = new CTECList<int>();

}

NodeController::~NodeController()
{

}

void NodeController :: testList()
{
    numbers->addAtIndex(1,188);
	numbers->addToFront(3);
	numbers->addToEnd(8);
    
	cout << "End should be 8 and is: " << numbers->getEnd() << endl;
    cout << "Front should be 3 and is: " << numbers->getFront() << endl;
    cout << "The middle should be 188 and is" << numbers->getFromIndex(2);
    
    numbers->addToEnd(19);
    numbers->addToEnd(20);
    
    numbers->removeFromEnd();
    cout << "the end should be 19 and is " << numbers->getEnd() << endl;
    numbers->removeFromIndex(2);
    cout << "the index 1 should be 188 and is " << numbers->getFromIndex(1) << endl;
    numberes->removeFromFront();
    cout << "the beginning should be 188 and is " << numbers->getFront() << endl;
    
    cout << "the size of the list should be 2 and is " << numbers->getSize();
    cout << "the index of 19 should be 1 and is " << numbers->indexOf(2);
    
}
void NodeController :: start()
{
	arrayTimer.startTimer();
	for(int index = 0; index < notHipsterInts->getSize(); index++)
	{
		notHipsterInts->set(index, (23 * index));
	}

	for(int index = notHipsterInts -> getSize() - 1; index >=0; index--)
	{
		cout << "notHipsterInts at index " << index << " contains " << notHipsterInts->get(index) << endl;
	}

	arrayTimer.stopTimer();
	arrayTimer.displayTimerInformation();

}


