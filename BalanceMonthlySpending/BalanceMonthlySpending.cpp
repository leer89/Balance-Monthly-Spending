// BalanceMonthlySpending.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	using namespace std;

	// me = monthly expenditures, mpc = monthly paycheck, spct = saving percentage
	// sreq = savings required
	int i, j, expenses[10], me, mpc, spct, sreq, monthEnd;

	cout << "Monthly paycheck: " << endl;
	cout << "Savings Percentage Goal: ";
	cin >> mpc;
	cin >> spct;

	do {
		cout << "Enter up to 10 expenses: \n";
		cin >> expenses[0];
		
		// set expenses into array
		for (i = 1; i < 10; i++)
		{
			cin >> expenses[i];
		}

		// tally expenses
		for (j = 0; j < 10; j++) {
			me = 0;
			me += expenses[j];
		}
	} while (me >= mpc);

	cout << "Monthly Expenses: " << me << endl;
	cout << "Monthly Paycheck: " << mpc << endl;

	// savings required = monthly paycheck * savings percentage / 100
	sreq = mpc * (spct / 100);
	// month end = monthly paycheck - monthly expenses
	monthEnd = mpc - me;

	cout << "Saving Percentage Goal: " << spct << endl;
	cout << "Savings Required: " << sreq << endl;

	return 0;
}

