/*
 * FileHandler.h
 *
 *  Created on: Jan 19, 2021
 *      Author: huy3.nguyen
 */

#ifndef FILEHANDLER_H_
#define FILEHANDLER_H_

#include<vector>
using namespace std;


class FileHandler {

public:

	FileHandler();
	vector<Account> readFile(string);
	void writeFile();
	void updateFile();
};

#endif /* FILEHANDLER_H_ */
