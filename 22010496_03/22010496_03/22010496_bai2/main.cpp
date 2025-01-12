
#include "account.h"
#include "transaction.h"
#include <iostream>
using namespace std;

int main(){
    Account account1(1, "Nguyen Van A", 100000);
    Account account2(2, "Le Thi B", 50000);

    std::cout << "Số dư ban đầu:" << std::endl;
    account1.displayBalance();
    account2.displayBalance();

    std::cout << "\nNạp tiền vào tài khoản của Nguyen Van A:" << std::endl;
    account1.deposit(20000);
    account1.displayBalance();

    std::cout << "\nRút tiền từ tài khoản của Nguyen Van A:" << std::endl;
    account1.withdraw(15000);
    account1.displayBalance();

    std::cout << "\nChuyển khoản từ Nguyen Van A sang Le Thi B:" << std::endl;
    account1.send(account2, 10000);
    account1.displayBalance();
    account2.displayBalance();

    std::cout << "\nLịch sử giao dịch của Nguyen Van A:" << std::endl;
    account1.displayTransactionHistory();
    std::cout << "\nLịch sử giao dịch của Le Thi B:" << std::endl;
    account2.displayTransactionHistory();

    return 0;
}
