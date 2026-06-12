#include <iostream>
using namespace std;

int main() {
int n;
cout << "Enter n (size including missing): ";
 cin >> n;

 int arr[n-1];
 cout << "Enter " << n-1 << " numbers: ";
int sum = 0;
for(int i=0; i<n-1; i++) {
cin >> arr[i];
sum += arr[i];
}

int total = n * (n + 1) / 2;  // sum of 1..n
cout << "Missing number is: " << total - sum << endl;
return 0;
}