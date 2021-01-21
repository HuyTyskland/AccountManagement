/*
 * tool.cpp
 *
 *  Created on: Jan 19, 2021
 *      Author: PC
 */
#include<iostream>
#include<string>
#include<vector>
#include<regex>
#include "tool.h"
#include "Account.h"

using namespace std;

int returnHyphenIndex(string line)
{
	int index = 0;
	for(int i = 0; i < (int)line.length(); i++)
		if (line.at(i) == '-')
		{
			index = i;
			break;
		}
	return index;
}


void printList(const vector<Account>& listAccount)
{
	for(auto it = listAccount.begin(); it != listAccount.end(); ++it)
		cout << "ID: " << (*it).returnID() << " PW: " << (*it).returnPW() << endl;
}

bool isFound(string ID, string PW, vector<Account> listAccount)
{
	for(auto it = listAccount.begin(); it != listAccount.end(); ++it)
		if ((ID == (*it).returnID()) && (PW == (*it).returnPW()))
			return true;
	return false;
}

bool isFound(string ID, vector<Account> listAccount)
{
	for(auto it = listAccount.begin(); it != listAccount.end(); ++it)
		if (ID == (*it).returnID())
			return true;
	return false;
}

void insertInfo(string ID,vector<string> listAccount)
{
	listAccount.push_back(ID);
}

bool isPasswordValid(string PW)
{
	regex regCri1 ("[^a-zA-Z0-9]");
	regex regCri2 ("[a-z]");
	regex regCri3 ("[A-Z]");
	regex regCri4 ("[0-9]");
	smatch matches;
	if (PW.length() >= 8) // valid number of character in password
		return (regex_search(PW, matches, regCri1)
				&& regex_search(PW, matches, regCri2)
				&& regex_search(PW, matches, regCri3)
				&& regex_search(PW, matches, regCri4));
	else return false;
}
