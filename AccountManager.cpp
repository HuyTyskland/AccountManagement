/*
 * AccountManager.cpp
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

AccountManager::AccountManager() {
	// TODO Auto-generated constructor stub

}

vector<Account> AccountManager::returnAccount(string whichFile)
{
	FileHandler aFileHandler;
	return aFileHandler.readFile(whichFile);
}

vector<Account> AccountManager::getAccountInfo()
{
	vector<Account> anAccount;
	anAccount.push_back(Account());
	anAccount[0].setInfo(anAccount[0].getID(), anAccount[0].getPW());
}

bool AccountManager::isAccountExist(string ID, string PW, vector<Account> listAccount)
{
	return isFound(ID, PW, listAccount);
}
