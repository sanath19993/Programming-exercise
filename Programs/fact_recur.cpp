//working till 65
#include<iostream>
#include <cmath>
using namespace std;

unsigned long long factorial(unsigned long long n);

int main()
{
    long long input;

    cout << "Enter a positive integer: ";
    cin >> input;

    if(input <= 20)
        cout << "Factorial of " << llabs(input) << " = " << factorial( llabs(input) );
    else
        cout << "Results are too long to calculate!";    

    return 0;
}

unsigned long long factorial(unsigned long long n)
{
    if(n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}