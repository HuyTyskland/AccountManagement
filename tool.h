/*
 * tool.h
 *
 *  Created on: Jan 19, 2021
 *      Author: PC
 */

#ifndef TOOL_H_
#define TOOL_H_

#include "Account.h"
using namespace std;

void printList(vector<Account>);
int returnHyphenIndex(string);
bool isFound(string,string,vector<Account>);
bool isFound(string, vector<Account>);
void insertInfo(string, vector<string>);



#endif /* TOOL_H_ */
