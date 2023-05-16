// This program simulates a bank account.

#include <iostream>
using namespace std;

class BankAccount
{
private:
    // The account number of the bank account.
    string accountNumber;

    // The balance of the bank account.
    double balance;

public:
    // This function sets the account number of the bank account.
    void setAccountNumber(const string &accNum)
    {
        // Set the account number of the bank account to the value passed in.
        accountNumber = accNum;
    }

    // This function gets the account number of the bank account.
    string getAccountNumber() const
    {
        // Return the account number of the bank account.
        return accountNumber;
    }

    // This function sets the balance of the bank account.
    void setBalance(double bal)
    {
        // Set the balance of the bank account to the value passed in.
        balance = bal;
    }

    // This function gets the balance of the bank account.
    double getBalance() const
    {
        // Return the balance of the bank account.
        return balance;
    }

    // This function deposits money into the bank account.
    void deposit(double amount)
    {
        // Add the amount passed in to the balance of the bank account.
        balance += amount;
    }

    // This function withdraws money from the bank account.
    void withdraw(double amount)
    {
        // If the balance of the bank account is greater than or equal to the amount passed in, then subtract the amount passed in from the balance of the bank account. Otherwise, print a message stating that there is insufficient balance and cancel the withdrawal.
        if (balance >= amount)
        {
            balance -= amount;
        }
        else
        {
            cout << "Insufficient balance. Withdrawal canceled." << endl;
        }
    }
};

int main()
{
    // Create a BankAccount object.
    BankAccount account;

    // Creating passing variables
    string accountNumber;
    double depositAmount, withdrawAmount, balance;
    
    // Get the account number and initial balance of the bank account from the user.
    cout
        << "Enter the account number: ";
    cin >> accountNumber;

    cout << "Enter the initial balance: ";
    cin >> balance;

    // Set the account number and initial balance of the bank account.
    account.setAccountNumber(accountNumber);
    account.setBalance(balance);

    // Get the amount to deposit from the user.
    cout << "Enter the amount to deposit: ";
    cin >> depositAmount;

    // Deposit the amount passed in into the bank account.
    account.deposit(depositAmount);

    // Get the amount to withdraw from the user.
    cout << "Enter the amount to withdraw: ";
    cin >> withdrawAmount;

    // Withdraw the amount passed in from the bank account.
    account.withdraw(withdrawAmount);

    // Print the account details of the bank account.
    cout << "Account Details:" << endl;
    cout << "Account Number: " << account.getAccountNumber() << endl;
    cout << "Balance: " << account.getBalance() << endl;

    return 0;
}
