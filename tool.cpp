/*
 * tool.cpp
 *
 *  Created on: Jan 19, 2021
 *      Author: PC
 */
#include<iostream>
#include<string>
#include<vector>
#include "tool.h"
#include "Account.h"

using namespace std;

int returnHyphenIndex(string line)
{
	int index = 0;
	for(int i = 0; i < (int)line.length(); i++)
		if (line[i] == '-')
			index = i;
	return index;
}


void printList(vector<Account> listAccount)
{
	for(auto it = listAccount.begin(); it != listAccount.end(); ++it)
		cout << "ID: " << (*it).returnID() << " PW: " << (*it).returnPW() << endl;
}
