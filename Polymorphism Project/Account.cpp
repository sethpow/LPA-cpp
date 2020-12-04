#include "Account.h"

Account::Account(std::string name, double balance) 
    : name{name}, balance{balance}
{  }

bool Account::deposit(double amount)
{
    if (amount < 0) 
        return false;
    else
    {
        balance += amount;
        return true;
    }
}

bool Account::withdraw(double amount)
{
    if (balance-amount >=0)
    {
        balance-=amount;
        return true;
    }
    else
        return false;
}

void Account::print(std::ostream &os) const
{
    os.precision(2);
    os << std::fixed;
    // since it is a member, we dont need  account.name & account.balance
    // if it was a friend, we would need account.name & account.balance
    os << "[Account: " << name << ": " << balance << "]";
}