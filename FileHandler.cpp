/*
 * FileHandler.cpp
 *
 *  Created on: Jan 19, 2021
 *      Author: huy3.nguyen
 */

#include<iostream>
#include<vector>
#include<fstream>
#include "Account.h"
#include "Admin.h"
#include "User.h"
#include "FileHandler.h"
#include "AccountManager.h"
#include "tool.h"

using namespace std;

FileHandler::FileHandler() {
	// TODO Auto-generated constructor stub

}

vector<FileHandler::Account> FileHandler::readFile(string whichFile)
{
	string line;
	vector<Account> listAccount;
	fstream myfile;
	if (whichFile == "data")
		myfile.open("data.txt");
	int accountIndex = 0;
	while(getline(myfile,line))
	{
		int hyphenIndex = returnHyphenIndex(line);
		listAccount.push_back(Account());
		listAccount[accountIndex].ID = line.substr(0, hyphenIndex);
		listAccount[accountIndex].PW = line.substr(hyphenIndex + 1, line.length());
		accountIndex++;
	}
	return listAccount;
}
