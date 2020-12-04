#include <iostream>
#include <vector>
#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"


int main()
{
    Checking_Account c;
    std::cout << c << std::endl;

    Savings_Account frank{"Frank", 5000, 2.6};
    std::cout << frank << std::endl;
    frank.deposit(10000);
    std::cout << frank << std::endl;
    frank.withdraw(7000);

    // if statically bound (compile time), slices out the interest b/c it is bound to Account class
    // (which does not have interest)
    // if dynamically bound (at run time), it will keep the interest
    Account *leo = new Trust_Account{"Leo", 10000, 2.6};
    std::cout << *leo << std::endl;

//     std::cout.precision(2);
//     std::cout << std::fixed;
   
//     // Accounts
//     std::vector<Account> accounts;
//     accounts.push_back(Account {});
//     accounts.push_back(Account {"Larry"});
//     accounts.push_back(Account {"Moe", 2000} );
//     accounts.push_back(Account {"Curly", 5000} );
    
//     display(accounts);
//     deposit(accounts, 1000);
//     withdraw(accounts,2000);
    
//     // Savings 

//     std::vector<Savings_Account> sav_accounts;
//     sav_accounts.push_back(Savings_Account {} );
//     sav_accounts.push_back(Savings_Account {"Superman"} );
//     sav_accounts.push_back(Savings_Account {"Batman", 2000} );
//     sav_accounts.push_back(Savings_Account {"Wonderwoman", 5000, 5.0} );

//     display(sav_accounts);
//     deposit(sav_accounts, 1000);
//     withdraw(sav_accounts,2000);
   
//    // Checking
   
//     std::vector<Checking_Account> check_accounts;
//     check_accounts.push_back(Checking_Account {} );
//     check_accounts.push_back(Checking_Account {"Kirk"} );
//     check_accounts.push_back(Checking_Account {"Spock", 2000} );
//     check_accounts.push_back(Checking_Account {"Bones", 5000} );

//     display(check_accounts);
//     deposit(check_accounts, 1000);
//     withdraw(check_accounts, 2000);

//     // Trust
  
//     std::vector<Trust_Account> trust_accounts;
//     trust_accounts.push_back(Trust_Account {} );
//     trust_accounts.push_back(Trust_Account {"Athos", 10000, 5.0} );
//     trust_accounts.push_back(Trust_Account {"Porthos", 20000, 4.0} );
//     trust_accounts.push_back(Trust_Account {"Aramis", 30000} );

//     display(trust_accounts);
//     deposit(trust_accounts, 1000);
//     withdraw(trust_accounts, 3000);
    
//     // Withdraw 5 times from each trust account
//     // All withdrawals should fail if there are too many withdrawals or if the withdrawl is > 20% of the balance
//     for (int i=1; i<=5; i++)
//         withdraw(trust_accounts, 1000);
    
    
    return 0;
}