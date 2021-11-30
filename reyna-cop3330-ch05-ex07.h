/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Avery Reyna
 */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;
    double discriminant, quad_1, quad_2;

    cout << "Enter a of the equation: ";
    cin >> a;
    cout << "Enter b of the equation: ";
    cin >> b;
    cout << "Enter c of the equation: ";
    cin >> c;

    discriminant = pow(b, 2) - 4 * (a) * (c);

    if (discriminant < 0)
    {
        printf("Error! There are no real roots for this quadratic\n");
        return 0;
    }

    quad_1 = ((-(b)) + sqrt(discriminant)) / (2 * (a));
    quad_2 = ((-(b)) - sqrt(discriminant)) / (2 * (a));

    cout << "The solutions for this quadratic formula are " << quad_1 << "and " << quad_2 << ".\n";

    return 0;
}