/*
 * Programming w/ Mosh - ex: 3
 * Jesus M Avila V
 * 5/28/23
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
