#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double principal;
double rate;
double times_compounded;
double percent_rate;
// amount = principal * pow(1.0 + rate / times_compounded, times_compounded);

int main()
{
    // principal
    cout << "Enter your principal balance: $";
    cin >> principal;
    
    // rate
    cout << "Enter your interest rate as a %: ";
    cin >> percent_rate;
    
    //change rate to a decimal
    rate = percent_rate / 100;
    
    // num of years compounded
    cout << "Enter # times your interest compounded during 1y: ";
    cin >> times_compounded;
    
    // find the total amount in savings and interest earned
    double amount = principal * pow(1.0 + rate / times_compounded, 
                                                            times_compounded);
    double interest_earned = amount - principal;
    
    // set 2 decimals for formatting money and print everything
    cout << fixed << setprecision(2);

    cout << left << setw(25) << "Your interest rate:" << right << setw(10) << percent_rate << "%\n";
    cout << left << setw(25) << "# of times compounded:" << right << setw(10) << static_cast<int>(times_compounded) << " times\n";
    cout << left << setw(25) << "Principal:" << right << " $" << setw(9) << principal << "\n";
    cout << left << setw(25) << "Interest earned:" << right << " $" << setw(9) << interest_earned << "\n";
    cout << left << setw(25) << "Total amount saved:" << right << " $" << setw(9) << amount << "\n";
    return 0;
}
