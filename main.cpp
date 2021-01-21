/*
 * main.cpp
 *
 *  Created on: Jan 18, 2021
 *      Author: PC
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

int printMenu();
void menuAction(int);
int adminMenu();
void adminAction(int);

int main()
{
	menuAction(printMenu());
	return 0;
}

int printMenu()
{
	int choice = 0;
	cout << "***************************************" << endl;
	cout << "        WELCOME TO THE SYSTEM" << endl;
	cout << "<><><><><><><><><><><><><><><><><><><><>" << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "Who are you?" << endl;
	cout << "1. Admin" << endl;
	cout << "2. User" << endl;
	cout << "3. Guest " << endl;
	cin >> choice;
	return choice;
}

void menuAction(int choice)
{
	AccountManager *ptrAccMana = new AccountManager;
	switch (choice){
	case 1:
	{
		vector<Account> adminList = ptrAccMana->returnAccount("adminData");
		cout << "Please log in with your admin account" << endl;
		vector<Account> adminAccount = ptrAccMana->getAccountInfo();
		if(ptrAccMana->isAccountExist(adminAccount[0].returnID(), adminAccount[0].returnPW(), adminList))
			cout << "LOGGED IN";
	}
	}

}
