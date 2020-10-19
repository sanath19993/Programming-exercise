#include <iostream>
#include <cmath>

using namespace std;

int BinaryToDecimal(long long);

int main(void)
{
    long long n;

    cout << "Enter a binary number: ";
    cin >> n;
 
    cout << n << " in binary = " << BinaryToDecimal(n) << "in decimal";
    return 0;
}

int BinaryToDecimal(long long n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}