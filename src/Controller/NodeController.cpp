/*
 * NodeController.cpp
 *
 *  Created on: Jan 27, 2016
 *      Author: snem8901
 */

#include "NodeController.h"
#include <iostream>
using namespace std;

NodeController::NodeController()
{
	stringNode.setValue("bleck");
	intNode.setValue(999);

	stringArrayNode.setValue("words");
	otherArrayNode.setValue("linked node");
	stringArrayNode.setNext(&otherArrayNode);

}

NodeController::~NodeController()
{

}
void NodeController :: start()
{
	cout << "The contents of string node are" << stringNode.getValue() << endl;
	cout << "The contents of the stringArrayNode are: "<< stringArrayNode.getValue() << endl;
	cout << "This is connected  stringArrayNode " << (*stringArrayNode.getNext()).getValue << endl;

}


