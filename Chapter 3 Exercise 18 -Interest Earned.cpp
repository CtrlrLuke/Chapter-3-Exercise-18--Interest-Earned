// Chapter 3 Exercise 18 -Interest Earned.cpp : This file contains the 'main' function. Program execution begins and ends there.

//This program asks for user input regarding principal, interest rate and compounding periods then displays calculations based on input.

#include <iostream>
#include <iomanip>s
#include <cmath>  // For pow function

using namespace std;

int main() {
    // Name Variables
    double principal, rate, amount, interest;
    int timesCompounded;

    // Get user input
    cout << "Enter the principal amount: $";
    cin >> principal;
    cout << "Enter the interest rate (as a percentage, e.g., 4.25): ";
    cin >> rate;
    cout << "Enter the number of times interest is compounded per year: ";
    cin >> timesCompounded;

    // Convert percentage to decimal
    rate /= 100.0;

    // Calculate amount in savings
    amount = principal * pow(1 + (rate / timesCompounded), timesCompounded);

    // Calculate interest earned
    interest = amount - principal;

    // Display the results 
    cout << fixed << setprecision(2); // To only have numbers go out 2 decimal places
    cout << "\nInterest Rate:      " << (rate * 100) << "%" << endl;
    cout << "Times Compounded:   " << timesCompounded << endl;
    cout << "Principal:          $" << principal << endl;
    cout << "Interest:           $" << interest << endl;
    cout << "Amount in Savings:  $" << amount << endl;

    return 0;
}
