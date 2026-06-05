//largest prime factor
#include <iostream>
using namespace std;

int main() {
 long long num;
cout << "Enter a number: ";
cin >> num;

long long largestPrime = -1;

// Divide out factors of 2
 while (num % 2 == 0) {
 largestPrime = 2;
 num = num / 2;
 }

 // Divide out odd factors
for (long long i = 3; i * i <= num; i += 2) {
 while (num % i == 0) {
  largestPrime = i;
 num = num / i;
  }
}

// If num itself is prime and > 2
    if (num > 2) {
 largestPrime = num;
 }

cout << "Largest prime factor is: " << largestPrime << endl;

 return 0;
}
