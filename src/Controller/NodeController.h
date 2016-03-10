/*
 * NodeController.h
 *
 *  Created on: Jan 27, 2016
 *      Author: snem8901
 */

#ifndef CONTROLLER_NODECONTROLLER_H_
#define CONTROLLER_NODECONTROLLER_H_

#include "../Model/Node.h"
#include "../Model/Node.cpp"
#include "../Model/ArrayNode.cpp"
#include "../Model/Timer.h"
#include <string>
#include <iostream>
#include "../Model/CTECArray.cpp"
using namespace std;

class NodeController
{
private:
	CTECArray<int> * notHipsterInts;
	CTECList<int> * numbers;
	Timer arrayTimer;
	void testList();
public:
	NodeController();
	virtual ~NodeController();
	void start();
};



#endif /* CONTROLLER_NODECONTROLLER_H_ */
