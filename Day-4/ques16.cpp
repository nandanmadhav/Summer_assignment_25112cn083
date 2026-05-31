// armstrong numbers in the range
#include <iostream>
using namespace std;

int main() {
 int start, end;
cout << "Enter start of range: ";
cin >> start;
cout << "Enter end of range: ";
cin >> end;

cout << "Armstrong numbers between " << start << " and " << end << " are:\n";

for (int num = start; num <= end; num++) {
int original = num;
int sum = 0;

// Break number into digits and cube them
int temp = num;
while (temp > 0) {
 int digit = temp % 10;
 sum += digit * digit * digit;  // cube of digit
 temp /= 10;
 }

 
if (sum == original) {
  cout << original << " ";
 }
    }

    cout << endl;
    return 0;
}
