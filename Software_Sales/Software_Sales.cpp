//Terry Ellison
// August 23 2017 ©
// Software Sales

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
	int unitsSold;
	double discountRate;

	// Ask the user to input the number of units sold
	cout << "Enter the number of units sold:\n";
	cin >> unitsSold;

	// Validate user input
	if (unitsSold < 0) {
		cout << "Incorrect input. Please enter the number of units sold again:\n";
		cin >> unitsSold;
	}

	// Set appropriate discount rate per user input
	if (unitsSold >= 10 && unitsSold <= 19)
		discountRate = 0.20;
	if (unitsSold >= 20 && unitsSold <= 49)
		discountRate = 0.30;
	if (unitsSold >= 50 && unitsSold <= 99)
		discountRate = 0.40;
	else
		discountRate = 0.50;

	// Calculate the total cost with the discount applied
	int cost = unitsSold * 99;
	auto discount = (cost * discountRate);
	auto totalCost = (cost - discount);

	// Display the total cost to the user
	cout << "The total cost is $" << fixed << setprecision(2) << totalCost << endl;

	system("Pause");
    return 0;
}

