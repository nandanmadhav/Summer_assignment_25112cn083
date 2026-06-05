//A Strong Number is a number whose sum of the factorial of its digits equals the number itself.
#include <iostream>
using namespace std;

int main() {
 int num, sum = 0;
 cout << "Enter a number: ";
 cin >> num;

 int temp = num;
 while (temp > 0) {
 int digit = temp % 10;

 // calculate factorial of digit directly
 int fact = 1;
for (int i = 1; i <= digit; i++) {
 fact = fact * i;
 }

sum = sum + fact;
 temp = temp / 10;
 }

if (sum == num) {
 cout << num << " is a Strong Number." << endl;
 } else {
 cout << num << " is NOT a Strong Number." << endl;
}

 return 0;
}
