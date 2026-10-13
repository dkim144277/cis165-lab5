#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double loan_amount;
double annual_rate;
double monthly_rate;
double number_of_payments;
double monthly_payment;

int main()
{
    // get loan info
    cout << "Enter the loan amount: $";
    cin >> loan_amount;

    cout << "Enter the annual interest rate as a %: ";
    cin >> annual_rate;

    cout << "Enter the number of monthly payments: ";
    cin >> number_of_payments;

    // convert annual rate to decimal
    monthly_rate = (annual_rate / 100) / 12;

    // calculate monthly payment
    monthly_payment = (monthly_rate * pow(1 + monthly_rate, number_of_payments))
    / (pow(1 + monthly_rate, number_of_payments) - 1) * loan_amount;

    // calculate total amount paid + interest
    double amount_paid_back = monthly_payment * number_of_payments;

    double interest_paid = amount_paid_back - loan_amount;

    // print everything
    cout << fixed << setprecision(2);

    cout << left << setw(20) << "Loan amount:" << right << "$" << setw(10) << loan_amount << "\n";
    cout << left << setw(20) << "Monthly interest rate:" << right << setw(10) << monthly_rate * 100 << "%\n";
    cout << left << setw(20) << "# of payments:" << right << setw(10) << static_cast<int>(number_of_payments) << " payments\n";
    cout << left << setw(20) << "Monthly payment:" << right << "$" << setw(10) << monthly_payment << "\n";
    cout << left << setw(20) << "Amount paid back:" << right << "$" << setw(10) << amount_paid_back << "\n";
    cout << left << setw(20) << "Interest paid:" << right << "$" << setw(10) << interest_paid << "\n";

    return 0;
}
