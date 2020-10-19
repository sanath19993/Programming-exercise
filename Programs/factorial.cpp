#include <iostream>
using namespace std;

int main()
{
    unsigned n;
    unsigned long long factorial = 1;

    cout << "Enter a positive integer: ";
    cin >> n;
    
    if(n > 20){
        cout << "Results are too long to calculate!";
        return 0;
    }

    for(unsigned i = 1; i <=n; ++i)
    {
        factorial *= i;
    }

    cout << "Factorial of " << n << " = " << factorial;    
    return 0;
}