/*
 * Programming w/ Mosh - ex: 6
 * Jesus M Avila V
 * 5/28/23
 * challenge: write a program to calculate the area of a circle from the input radius
 */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const double pi = 3.14;
    double radius = 0;
    double piR;
    double area;

    cout << "input the radius in meters = ";
    cin >> radius;

     piR = pi * radius;
     area = pow(piR,2);

    cout << "the circumference of a circle with a radius of "<< radius << "m is "<< area << "m";
    return 0;
}