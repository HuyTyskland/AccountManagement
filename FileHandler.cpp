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

vector<Account> FileHandler::readFile(string whichFile)
{
	string line;
	vector<Account> listAccount;
	fstream myfile;
	if (whichFile == "userData")
		myfile.open("userData.txt");
	if (whichFile == "adminData")
		myfile.open("adminData.txt");
	int accountIndex = 0;
	while(getline(myfile,line))
	{
		int hyphenIndex = returnHyphenIndex(line);
		listAccount.push_back(Account());
		listAccount[accountIndex].setInfo(line.substr(0, hyphenIndex),line.substr(hyphenIndex + 1, line.length()));
		accountIndex++;
	}
	myfile.close();
	return listAccount;
}

void FileHandler::writeFile(vector<Account> listAccount, string whichFile)
{
	fstream myfile;
	if (whichFile == "data")
		myfile.open("data.txt");
	for (auto it = listAccount.begin(); it != listAccount.end(); ++it)
		myfile << (*it).returnID() << "-" << (*it).returnPW() << "\n";
	myfile.close();
}

void FileHandler::createFile()
{
	remove("data.txt");
	rename("temp.txt","data.txt");
	fstream myfile;
	myfile.open("temp.txt", ios::out);
	myfile.close();
}

vector<string> FileHandler::readFile()
{
	vector<string> listAccount;
	string line;
	fstream myfile;
	myfile.open("deletionRequest.txt");
	while(getline(myfile, line))
		listAccount.push_back(line);
	return listAccount;
}
