/*
 * FileHandler.h
 *
 *  Created on: 2015. 2. 19.
 *      Author: jhs
 */

#ifndef FILEHANDLER_FILEHANDLER_H_
#define FILEHANDLER_FILEHANDLER_H_

#include <iostream>
#include <fstream>
#include <string>

class FileHandler {
	std::ofstream fOut;
public:
	FileHandler();
	virtual ~FileHandler();
	void write(const std::string & s);
};

#endif /* FILEHANDLER_FILEHANDLER_H_ */
