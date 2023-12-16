#pragma once //Preprocessor directive to prevent double inclusion, used in place of guards

//Defines Investment class
class Investment {
public:
	//Constructor
	Investment(double initialInvestment, double monthlyDeposit, double annualInterest, double totalYears);

	//Public functions
	void calculateInvestmentWithoutMD(); //Callculates and displays details of an investment without monthly deposits

	void calculateInvestmentWithMD(); //Calculates and displays details of an investment with monthly deposits

private:
	double initialInvestment;
	double monthlyDeposit;
	double annualInterest;
	int totalYears;
};



