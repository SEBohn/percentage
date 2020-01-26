#include <iostream>

using namespace std;

int main() {

// variables for monthly pay and the contribution.
double monthlyPay;
double contribution;

cout << "Please enter your monthly pay: ";
cin >> monthlyPay;

//calculation and display of the 5% contribution.
contribution = monthlyPay * 0.05;

cout << "5 percent is $" << contribution << " per month.\n";

//calculation and display of the 7% contribution.
contribution = monthlyPay * 0.07;

cout << "7 percent is $" << contribution << " per month.\n";

//calculation and display of the 10% contribution.
contribution = monthlyPay * 0.10;

cout << "10 percent is $" << contribution << " per month.\n";

return 0;

}