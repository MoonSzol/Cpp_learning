/*
 * Programming w/ Mosh - ex: 2
 * Jesus M Avila V
 * 5/27/23
 * challenge: write code to swap value of 2 ints
 */

#include <iostream>

int main()
{
    int a = 1;
    int b = 2;
    // start -v
    int c = a;

    a = b;
    b = c;

    std::cout << "a = " << a << std::endl
              << "b = " << b;
    return 0;
}
