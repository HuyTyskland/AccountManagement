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
	FileHandler *ptrFileHandler = new FileHandler;
	vector<Account> listAccount = ptrFileHandler->readFile(whichFile);
	delete(ptrFileHandler);
	return listAccount;
}

vector<Account> AccountManager::getAccountInfo()
{
	vector<Account> anAccount;
	anAccount.push_back(Account());
	anAccount[0].setInfo(anAccount[0].getID(), anAccount[0].getPW());
	return anAccount;
}

bool AccountManager::isAccountExist(string ID, string PW, int role)
{
	AccountManager *ptrAccMana = new AccountManager;
	vector<Account> accountList;
	if(role == 1)
		accountList = ptrAccMana->returnAccount("adminData");
	else if(role == 2)
		accountList = ptrAccMana->returnAccount("userData");
	delete(ptrAccMana);
	return isFound(ID, PW, accountList);
}

void AccountManager::registerAccount(vector<Account> newAccount)
{
	AccountManager *ptrAccMana = new AccountManager;
	vector<Account> listAccount = ptrAccMana->returnAccount("userData");
	if(isPasswordValid(newAccount[0].returnPW()) && isIdentificationUnique(newAccount[0].returnID(), listAccount))
	{
		listAccount.push_back(Account());
		(--listAccount.end())->setInfo(newAccount[0].returnID(), newAccount[0].returnPW());
		cout << "Your new account has been registered" << endl;
	} else cout << "Your account info is either invalid or not unique" << endl;
	delete(ptrAccMana);
}

void AccountManager::deleteAllAccount()
{
	FileHandler *ptrFileHandler = new FileHandler;
	ptrFileHandler->createFile();
	delete(ptrFileHandler);
}
