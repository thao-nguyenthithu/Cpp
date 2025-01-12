#ifndef TRANSACTION_H
#define TRANSACTION_H

#include<iostream>
#include<string>
using namespace std;

class Transaction {
private:
    int transactionID;
    string description;
    double amount;
    string date;
public:
    Transaction(int id, string desc, double amount, string date);
    void display();
};

#endif // TRANSACTION_H
