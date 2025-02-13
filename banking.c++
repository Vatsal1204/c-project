#include <iostream>
using namespace std;

class bankaccount {
public:
    int acc_number;
    string acc_holder_name;

protected:
    int balance;

public:
    void setData(int balance, string acc_holder_name, int acc_number) {
        this->acc_holder_name = acc_holder_name;
        this->balance = balance;
        this->acc_number = acc_number;
    }

    void getData() {
        cout << "\nAccount Holder Name: " << acc_holder_name << endl;
        cout << "Account Number: " << acc_number << endl;
        cout << "Balance: " << balance << endl;
    }

    void deposit() {
        int num;
        cout << "\nEnter deposit amount: ";
        cin >> num;
        balance += num;
        cout << "Amount deposited successfully.\n";
    }

    void withdraw() {
        int withdraw;
        cout << "\nEnter withdrawal amount: ";
        cin >> withdraw;
        if (balance >= withdraw) {
            balance -= withdraw;
            cout << "Withdrawal successful.\n";
        } else {
            cout << "Insufficient funds. Better luck next time!\n";
        }
    }
};

class saving_account : public bankaccount {
public:
    int interest_rate;

    void setData(int interest_rate) {
        this->interest_rate = interest_rate;
    }

    void getData() {
        cout << "\nInterest Rate: " << interest_rate << "%\n";
    }
};

class checking_account : public bankaccount {
public:
    int overdraft_limit;

    void setData(int overdraft_limit) {
        this->overdraft_limit = overdraft_limit;
    }

    void getData() {
        cout << "\nOverdraft Limit: " << overdraft_limit << endl;
    }

    void withdraw() {
        int withdraw;
        cout << "\nEnter withdrawal amount: ";
        cin >> withdraw;
        if (balance + overdraft_limit >= withdraw) {
            balance -= withdraw;
            cout << "Withdrawal successful.\n";
        } else {
            cout << "Overdraft limit exceeded. Transaction failed.\n";
        }
    }
};

class fixeddeposit_account : public bankaccount {
public:
    int terms;
    int interest_rate;

    void setData(int terms, int interest_rate) {
        this->terms = terms;
        this->interest_rate = interest_rate;
    }

    void getData() {
        cout << "\nFixed Deposit Term: " << terms << " months" << endl;
        cout << "Interest Rate: " << interest_rate << "%\n";
    }

    void interest() {
        int interest = (balance * interest_rate * terms) / 100;
        cout << "Total Interest Earned: " << interest << endl;
    }
};

int main() {
    bankaccount obj;
    obj.setData(100, "Parmar", 345);
    obj.getData();
    obj.deposit();
    obj.getData();
    obj.withdraw();
    obj.getData();

    saving_account obj2;
    obj2.setData(10);
    obj2.getData();

    checking_account obj3;
    obj3.setData(5000);
    obj3.getData();
    obj3.withdraw();
    obj3.getData();

    fixeddeposit_account obj4;
    obj4.setData(12, 5);
    obj4.getData();
    obj4.interest();

    return 0;
}
