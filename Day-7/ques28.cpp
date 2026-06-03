#include <iostream>
#include <cmath>
using namespace std;

// Function to count digits
int countDigits(int n)
{
    if (n == 0)
 return 0;
    return 1 + countDigits(n / 10);
}

// Recursive function to reverse a number
int reverseNumber(int n, int digits)
{
 if (n < 10)
  return n;

 return (n % 10) * pow(10, digits - 1) +
  reverseNumber(n / 10, digits - 1);
}

int main()
{
int num;

cout << "Enter a number: ";
 cin >> num;

 int digits = countDigits(num);
cout << "Reversed number = " << reverseNumber(num, digits);

return 0;
}