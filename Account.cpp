/*
 * Account.cpp
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

Account::Account() {
	// TODO Auto-generated constructor stub

}

void Account::setInfo(string Identification, string Password)
{
	ID = Identification;
	PW = Password;
}

string Account::returnID() const
{
	return ID;
}

string Account::returnPW() const
{
	return PW;
}

void Account::showInfo()
{
	cout << "Identification: " << ID << " Password: " << PW << endl;
}

string Account::getID()
{
	string Identification;
	cout << "\nID: ";
	cin >> Identification;
	return Identification;
}

string Account::getPW()
{
	string Password;
	cout << "\nPW: ";
	cin >> Password;
	return Password;
}
