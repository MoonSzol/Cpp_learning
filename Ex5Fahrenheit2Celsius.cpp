/*
 * Programming w/ Mosh - ex: 5
 * Jesus M Avila V
 * 5/28/23
 * challenge: write a program to convert Celsius to Fahrenheit
 */

#include <iostream>

using namespace std;

int main()
{
    double fahrenheit;
    double fahToCelsius;

    cout << "input a temperature in degrees Fahrenheit: ";
    cin >> fahrenheit;

    fahToCelsius = (fahrenheit - 32) / 1.8;

    cout << fahrenheit << "F is " << fahToCelsius << "C";
    return 0;
}