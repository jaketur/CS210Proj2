#include "Investment.h"
#include <iostream>
#include <iomanip>  //Header for manipulator functions, allowing output to format correctly

using namespace std;

//Constructor that will create an Investment object with attributes defined by parameters
Investment::Investment(double initialInvestment, double monthlyDeposit, double annualInterest, double totalYears) {
	this->initialInvestment = initialInvestment;
	this->monthlyDeposit = monthlyDeposit;
	this->annualInterest = annualInterest;
	this->totalYears = totalYears;
}

//Function that calculates and prints investment data when there is a monthly deposit.
/*
Iterates through each month of each year of the deposit length
to calculate for interest that compunds monthly. Prints following
the twelfth iteration of the inside for loop (each year).
*/
void Investment::calculateInvestmentWithMD() { 
    cout << fixed << setprecision(2);
    cout << "\nYear\tOpening Balance\t\tYear End Earned Interest\tClosing Balance\n";
    cout << "-------------------------------------------------------------------------------\n";


    double balance = initialInvestment;
    double monthlyInterestRate = (annualInterest / 100) / 12;

    for (int year = 1; year <= totalYears; ++year) {
        double yearOpenBalance = balance;
        double ytdInterest = 0.0;

        for (int month = 1; month <= 12; ++month) {
            double monthlyInterest = monthlyInterestRate * balance;
            balance += monthlyInterest;
            balance += monthlyDeposit;
            ytdInterest += monthlyInterest;
        }
        cout << setw(5) << year << "\t$" << setw(14) << yearOpenBalance << "\t\t$" << setw(23) << ytdInterest << "\t$" << setw(14) << balance << "\n";
    }
}

//Function that calculates and prints investment data when there is NOT a monthly deposit.
/*
Iterates through each month of each year of the deposit length
to calculate for interest that compunds monthly. Prints following
the twelfth iteration of the inside for loop (each year).

Omits the "balance += monthlyDeposit" line as to not account
for monthly deposits.
*/
void Investment::calculateInvestmentWithoutMD() {
    cout << fixed << setprecision(2);
    cout << "\nYear\tOpening Balance\t\tYear End Earned Interest\tClosing Balance\n";
    cout << "-------------------------------------------------------------------------------\n";

    double balance = initialInvestment;
    double monthlyInterestRate = (annualInterest / 100) / 12;

    for (int year = 1; year <= totalYears; ++year) {
        double yearOpenBalance = balance;
        double ytdInterest = 0.0;

        for (int month = 1; month <= 12; ++month) {
            double monthlyInterest = monthlyInterestRate * balance;
            balance += monthlyInterest;
            ytdInterest += monthlyInterest;
        }
        cout << setw(5) << year << "\t$" << setw(14) << yearOpenBalance << "\t\t$" << setw(23) << ytdInterest << "\t$" << setw(14) << balance << "\n";
    }
}