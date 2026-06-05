//checking perfect square
//A Perfect Number is a positive integer equal to the sum of its proper divisors (excluding itself).

#include <iostream>
using namespace std;

int main() {
int num, sum = 0;
cout << "Enter a number: ";
cin >> num;

// Find divisors and add them
for (int i = 1; i <= num / 2; i++) {
if (num % i == 0) {
 sum += i;
 }
}

// Check if sum equals the number
 if (sum == num && num != 0) {
   cout << num << " is a Perfect Number." << endl;
} else {
  cout << num << " is NOT a Perfect Number." << endl;
 }

 return 0;
}

