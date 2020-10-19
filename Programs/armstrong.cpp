#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
    size_t  originalNum, remainder, result = 0;
    int input;
    cout << "Enter a three-digit integer: ";
    cin >> input;
    originalNum = abs(input);

    while (originalNum != 0) {
        // remainder contains the last digit
        remainder = originalNum % 10;
        
        result += pow(remainder,3);
        
        // removing last digit from the orignal number
        originalNum /= 10;
    }

    if (result == abs(input))
        cout << abs(input) << " is an Armstrong number.";
    else
        cout << abs(input) << " is not an Armstrong number.";

    return 0;
}