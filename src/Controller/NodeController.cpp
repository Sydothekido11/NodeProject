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
	numbers->addToFront(3);
	numbers->addToEnd(8);cout << "End should be 8 and is: " << numbers->getEnd() << endl;
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


