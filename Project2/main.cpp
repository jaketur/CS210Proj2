//================================================================================================================================
// Name     : Jake Turner
// Course   : CS 210
// Project  : Project 2
//================================================================================================================================

#include <iostream>
#include "Investment.h"

using namespace std;

int main() {
    // Get user input
    /*
    Initial values are all set to invalid entries,
    so the user will repeatedly be prompted for entry
    until a valid entry is recorded.    
    */
    double initialInvestment = -1.0;
    double monthlyDeposit = -1.0;
    double annualInterest = -1.0;
    int numberOfYears = -1;

    cout << "Initial Investment Amount: $";
    while (initialInvestment <= 0.0) {
        cin >> initialInvestment;
        if (initialInvestment <= 0) {
            cout << "Invalid entry! Please enter a number greater than zero.\n";
        }
    }
    
    cout << "Monthly Deposit: $";
    while (monthlyDeposit <= 0.0) {
        cin >> monthlyDeposit;
        if (monthlyDeposit <= 0) {
            cout << "Invalid entry! Please enter a number greater than zero.\n";
        }
    }

    cout << "Annual Interest Rate (%): ";
    while (annualInterest <= 0.0) {
        cin >> annualInterest;
        if (annualInterest <= 0) {
            cout << "Invalid entry! Please enter a number greater than zero.\n";
        }
    }
    
    cout << "Number of Years: ";
    while (numberOfYears <= 0.0) {
        cin >> numberOfYears;
        if (numberOfYears <= 0) {
            cout << "Invalid entry! Please enter a number greater than zero.\n";
        }
    }

    //Create Investment Object
    // An Investment object is created taking the user inputs as parameters
    Investment investment(initialInvestment, monthlyDeposit, annualInterest, numberOfYears);

    // Calculate and display investment details
    cout << "\nBalance and Interest Without Additional Monthly Deposits:\n";
    cout << "===============================================================================";
    investment.calculateInvestmentWithoutMD(); //Calculation without monthly deposits
    cout << "===============================================================================\n";
    

    cout << "\nBalance and Interest With Additional Monthly Deposits:\n";
    cout << "===============================================================================";
    investment.calculateInvestmentWithMD();//Calculation with monthly deposits
    cout << "===============================================================================\n";

    // Pause to view the data
    cout << "\nPress any key to exit program...";
    cin.ignore();
    cin.get();

    return 0;
}