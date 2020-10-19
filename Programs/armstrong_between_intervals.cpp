#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
  size_t start,end, i, currentDigit, digit, sum;
  int num1,num2;

  cout << "Enter first number: ";
  cin >> num1;

  cout << "Enter second number: ";
  cin >> num2;

  start = abs(num1);end = abs(num2);
  cout << "Armstrong numbers between " << start << " and " << end << " are: " << endl;
  for(i = start; i <= end; ++i)
  {
        sum = 0;
        currentDigit = i;

        while( currentDigit > 0 )
        {
            digit = currentDigit % 10;
            sum += pow(digit,3);
            currentDigit /= 10; 
        }

        if(sum == i)
        {
            cout << i << endl;
        }
  }

  return 0;
}