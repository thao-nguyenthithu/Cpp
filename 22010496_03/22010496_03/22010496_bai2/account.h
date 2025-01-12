#ifndef ACCOUNT_H_INCLUDED
#define ACCOUNT_H_INCLUDED

#include "transaction.h"
#include <string>
#include <vector>
using namespace std;

class Account {
private:
    int id;
    string accoutHolder;
    double balance;
    vector <Transaction> transactionHistory;
public:
    Account(int number, string holder, double initialBalance);
    void deposit(double amount);
    void withdraw(double amount);
    void send(Account &a, double amount);
    void displayBalance();
    void displayTransactionHistory();
};

#endif // ACCOUNT_H_INCLUDED
