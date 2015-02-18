/*
 * FileHandler.cpp
 *
 *  Created on: 2015. 2. 19.
 *      Author: jhs
 */

#include "FileHandler.h"

FileHandler::FileHandler() :fOut("Cave.txt",std::ios::trunc) {
	// TODO Auto-generated constructor stub
	fOut << "hello world "<< std::endl;
}

FileHandler::~FileHandler() {
	// TODO Auto-generated destructor stub

	fOut.close();
}
