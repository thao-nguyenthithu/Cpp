#include "account.h"
#include <vector>

Account::Account(int number, string holder, double initialBalance){
    this->id = number;
    this->accoutHolder = holder;
    this->balance = initialBalance;
}

void Account::deposit(double amount) {
    balance += amount;
    std::cout << "Đã nạp " << amount << " vào tài khoản" << std::endl;
    Transaction t(transactionHistory.size() + 1, "Deposit", amount, "2025-01-12");  // Assuming date as an example
    transactionHistory.push_back(t);
}

void Account::withdraw(double amount) {
    if (amount > balance) {
        std::cout << "Số dư tài khoản không đủ" << std::endl;
    } else {
        balance -= amount;
        std::cout << "Đã rút " << amount << " từ tài khoản" << std::endl;
        Transaction t(transactionHistory.size() + 1, "Withdrawal", amount, "2025-01-12");
        transactionHistory.push_back(t);
    }
}

void Account::send(Account &other, double amount) {
    if (amount > balance) {
        std::cout << "Số dư không đủ để chuyển khoản" << std::endl;
    } else {
        balance -= amount;
        other.deposit(amount);
        std::cout << "Đã chuyển " << amount << " đến tài khoản của " << other.accoutHolder << std::endl;
        Transaction t(transactionHistory.size() + 1, "Transfer", amount, "2025-01-12");
        transactionHistory.push_back(t);
    }
}

void Account::displayBalance() {
    std::cout << "Số dư hiện tại là: " << balance << " VND" << std::endl;
}

void Account::displayTransactionHistory() {
    std::cout << "Lịch sử giao dịch của " << accoutHolder << ":" << std::endl;
    for (Transaction &t : transactionHistory) {
        t.display();
    }
}