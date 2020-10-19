#include <iostream>
using namespace std;

bool isPrimeNumber(long long);

int main(void) {
    long long input;

    cout << "Enter a positive  integer: ";
    cin >> input;

    if (isPrimeNumber( input ) )
        cout << input << " is a prime number.";
    else
        cout << input << " is not a prime number.";
    return 0;
}

bool isPrimeNumber(long long n) {

    // 0 or 1 or negative numbers are not prime numbers
    if (n == 0 || n == 1 || n < 0) {
        return false;
    }
  
        for (long long i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                return false;
            }
        }
    return true;
}