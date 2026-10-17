#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    string name;
    double balance;

public:
    BankAccount()
    {
        accountNumber = 0;
        name = "";
        balance = 0;
    }

    void createAccount()
    {
        cout << "\nEnter Account Number: ";
        cin >> accountNumber;

        cin.ignore();

        cout << "Enter Customer Name: ";
        getline(cin, name);

        cout << "Enter Initial Deposit: ";
        cin >> balance;

        saveToFile();

        cout << "\nAccount created successfully!\n";
    }

    void deposit()
    {
        double amount;

        cout << "\nEnter amount to deposit: ";
        cin >> amount;

        if (amount > 0)
        {
            balance = balance + amount;
            saveToFile();

            cout << "Amount deposited successfully!\n";
        }
        else
        {
            cout << "Invalid amount!\n";
        }
    }

    void withdraw()
    {
        double amount;

        cout << "\nEnter amount to withdraw: ";
        cin >> amount;

        if (amount <= 0)
        {
            cout << "Invalid amount!\n";
        }
        else if (amount > balance)
        {
            cout << "Insufficient balance!\n";
        }
        else
        {
            balance = balance - amount;
            saveToFile();

            cout << "Amount withdrawn successfully!\n";
        }
    }

    void checkBalance()
    {
        cout << "\n----- Account Details -----\n";
        cout << "Account Number : " << accountNumber << endl;
        cout << "Customer Name  : " << name << endl;
        cout << "Balance        : Rs. " << balance << endl;
    }

    void saveToFile()
    {
        ofstream file("bank_data.txt");

        if (file.is_open())
        {
            file << accountNumber << endl;
            file << name << endl;
            file << balance << endl;

            file.close();
        }
        else
        {
            cout << "Error opening file!\n";
        }
    }

    bool loadFromFile()
    {
        ifstream file("bank_data.txt");

        if (!file.is_open())
        {
            return false;
        }

        file >> accountNumber;
        file.ignore();

        getline(file, name);

        file >> balance;

        file.close();

        return true;
    }

    bool accountExists()
    {
        return accountNumber != 0;
    }
};

int main()
{
    BankAccount account;

    // Load previously saved account
    account.loadFromFile();

    int choice;

    do
    {
        cout << "\n====================================\n";
        cout << "       BANK MANAGEMENT SYSTEM\n";
        cout << "====================================\n";

        cout << "1. Create Account\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Check Balance\n";
        cout << "5. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            account.createAccount();
            break;

        case 2:
            if (account.accountExists())
                account.deposit();
            else
                cout << "Please create an account first!\n";
            break;

        case 3:
            if (account.accountExists())
                account.withdraw();
            else
                cout << "Please create an account first!\n";
            break;

        case 4:
            if (account.accountExists())
                account.checkBalance();
            else
                cout << "No account found!\n";
            break;

        case 5:
            cout << "\nThank you for using the Bank Management System!\n";
            break;

        default:
            cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 5);

    return 0;
}
