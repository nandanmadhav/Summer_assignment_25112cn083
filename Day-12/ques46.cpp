#include <iostream>
using namespace std;

bool armstrong(int n)
{
 int sum = 0, temp = n, rem;

 while (temp > 0)
 {
 rem = temp % 10;
 sum += rem * rem * rem;
temp /= 10;
    }
return (sum == n);
}

int main()
{
int num;

 cout << "Enter a number: ";
 cin >> num;

if (armstrong(num))
 cout << "Armstrong Number";
    else
 cout << "Not an Armstrong Number";

    return 0;
}