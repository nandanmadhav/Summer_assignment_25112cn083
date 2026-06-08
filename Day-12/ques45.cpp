#include <iostream>
using namespace std;

bool palindrome(int n)
{
int rev = 0, temp = n, rem;

 while (temp > 0)
 {
 rem = temp % 10;
 rev = rev * 10 + rem;
 temp = temp / 10;
}

return (rev == n);
}

int main()
{
 int num;

 cout << "Enter a number: ";
cin >> num;

if (palindrome(num))
 cout << "Palindrome Number";
else
 cout << "Not a Palindrome Number";

return 0;
}