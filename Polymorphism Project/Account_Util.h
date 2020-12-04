#ifndef _ACCOUNT_UTIL_H_
#define _ACCOUNT_UTIL_H_
#include <vector>
#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"

// Utility helper functions for Account class and Derived classes

virtual void display(const std::vector<Account *> &accounts);
virtual void deposit(std::vector<Account *> &accounts, double amount);
virtual void withdraw(std::vector<Account *> &accounts, double amount);

#endif