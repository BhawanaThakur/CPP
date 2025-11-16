#include <iostream>
using namespace std;

class Account {
public:
    int balance;

    Account(int b) {
        balance = b;
    }

    void transfer(Account *acc, int amount) {
        if (balance >= amount) {
            balance -= amount;
            acc->balance += amount;
        } else {
            cout << "Insufficient balance" << endl;
        }
    }

    void show() {
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    Account a1(5000);
    Account a2(2000);

    a1.transfer(&a2, 1500);

    a1.show();
    a2.show();

    return 0;
}