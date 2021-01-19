/*
 * Account.cpp
 *
 *  Created on: Jan 18, 2021
 *      Author: PC
 */

#include<iostream>
#include "Account.h"
#include "Admin.h"

using namespace std;

Account::Account() {
	// TODO Auto-generated constructor stub

}

void Account::setInfo(string Identification, string Password)
{
	ID = Identification;
	PW = Password;
}

string Account::returnID()
{
	return ID;
}

string Account::returnPW()
{
	return PW;
}

void Account::showInfo()
{
	cout << "Identification: " << ID << " Password: " << PW << endl;
}
