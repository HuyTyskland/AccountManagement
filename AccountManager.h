/*
 * AccountManager.h
 *
 *  Created on: Jan 19, 2021
 *      Author: huy3.nguyen
 */

#ifndef ACCOUNTMANAGER_H_
#define ACCOUNTMANAGER_H_

class AccountManager {

public:
	AccountManager();
	vector<Account> returnAccount(string);
	vector<Account> getAccountInfo();
	bool isAccountExist(string, string, int);
};

#endif /* ACCOUNTMANAGER_H_ */
