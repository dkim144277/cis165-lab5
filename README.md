# cis165-lab5
# how to run
To run `compound_interest` and `loan_payment.cpp`, download the files from the repository to your computer. Then, using onlinegdb.com, click on the "Upload File" at the top left of the programming window, and upload the file you downloaded. Set the language using the dropdown to C++ 17. Press F9 on your keyboard or "Run" at the top of the screen. Repeat for the other program you downloaded.
# plans for programs
## compound_interest.cpp
1. Declare principal, rate, times_compounded, and percent_rate (which will be used as the user-inputted rate as a percentage to convert later to a deciml)
2. Ask the user to input values for the aforementioned variables
3. Convert `percent_rate` to a decimal by using `rate = percent_rate / 100`
4. Use the provided formula on the lab instructions to calculate `amount` as well as `interest earned`
5. Format the output using `setprecision(2)` as well as `setw()`
## loan_payment.cpp
1. Declare loan_amount, annual_rate, monthly_rate, number_of_payments, and monthly_payment
2. Ask the user to input values for loan_amount, annual_rate, and number_of_payments
3. Calculate the monthly rate from the annual rate and then convert the result to a decimal and store it in `monthly_rate`
4. Use the newly created `monthly_rate` in the formula provided in the lab instructions
5. Calculate the total amount paid back as well as interest paid
6. Format the output using `setprecision(2)` as well as `setw()`
# test runs
## compound_interest.cpp
A principal of $1k with a rate of 4.25% over 12 months should be $43.34 in interest plus $1k saved in total. Upon running the program with these values the results are:
```
Interest earned:          $    43.34
Total amount saved:       $  1043.34
```
If we replace the principal with 1500, rate with 3, and times compounded with 10, we should get 45.61 in earned interest plus the principal. Upon running the program with these values, the results are:
```
Interest earned:          $    45.61
Total amount saved:       $  1545.61
```
## loan_payment.cpp
A loan amount of $10,000.00 with an annual interest rate of 12% over 36 months should be monthly payments of $332.14, a total amount paid back of $11,957.15, and $1,957.15 in interest paid. Upon running the program with these values, the results are:
```
Loan amount:        $  10000.00
Monthly interest rate:      1.00%
# of payments:              36 payments
Monthly payment:    $    332.14
Amount paid back:   $  11957.15
Interest paid:      $   1957.15
```
If we replace the loan amount with $5k, the rate with 6, and the number of payments with 24, we should get a monthly payment of $221.60, a total amount of $5,318.47, and $318.47 in interest. Upon running the program with these values, the results are:
```
Loan amount:        $   5000.00
Monthly interest rate:      0.50%
# of payments:              24 payments
Monthly payment:    $    221.60
Amount paid back:   $   5318.47
Interest paid:      $    318.47
```
# code explanations

* Why must a percentage be divided by 100 before using it in a formula?
* How does pow represent exponentiation?
* What does the number of compounding periods change in the savings formula?
* How is an annual interest rate converted to a monthly rate?
* Why should double be used for these calculations?
* Why should calculations use full precision when money is displayed to two decimal places?
* How are the amount paid back and total interest calculated?
* Why are calculations stored in variables before being displayed?

1. A percentage needs to be divided by 100 because the math requires multiplication using a decimal instead of a whole number
2. `pow` uses `pow(base, exponent)`, `pow(10, 2)` is equivalent to 10^2 i.e 100
3. The compounding periods count how many times your interest stacked, more instances of compounding means more interest earned
4. Divide the annual rate by 12
5. Doubles need to be used because decimals can and probably will be involved in the input/arithmetic/output
6. Because the answers need to be rounded, if the calculations themselves are rounded the final amount could be totally different
7. By multiplying the monthly payment times the number of payments, the total interest paid is the previous amount minus the amount of the initial loan
8. If they aren't stored in variables beforehand then you need to do the arithmetic in the `cout` statements themselves which makes them extremely hard to read and debug
