/*
 * Programming w/ Mosh - ex: 4
 * Jesus M Avila V
 * 5/28/23
 * challenge: write code to get sales tax, county tax, and total tax to be paid 
 * total sales = $95,000
 * state tax = 4%
 * county tax = 2%
 */

#include <iostream>

using namespace std;

int main()
{
    double sales = 95000;
    const double stateTaxRate = 0.04;
    const double countyTaxRate = 0.02;

    double stateTax = sales * stateTaxRate;
    double countyTax = sales * countyTaxRate;
    double totalTax = stateTax + countyTax;
    double totalIncome = sales - totalTax;

    cout << "Sales = $" << sales << endl
              << "State tax = $" << stateTax << endl
              << "County tax = $" << countyTax << endl
              << "Total Tax = $" << totalTax << endl
              << "Sales after tax = $" << totalIncome;
    return 0;
}