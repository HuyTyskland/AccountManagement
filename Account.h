/*
 * Account.h
 *
 *  Created on: Jan 18, 2021
 *      Author: PC
 */

#ifndef ACCOUNT_H_
#define ACCOUNT_H_

using namespace std;

class Account {
public:
	Account();
	void showInfo();
	void setInfo(string, string);
	string returnID() const;
	string returnPW() const;
	string getID();
	string getPW();
private:
	string ID;
	string PW;
};

#endif /* ACCOUNT_H_ */
