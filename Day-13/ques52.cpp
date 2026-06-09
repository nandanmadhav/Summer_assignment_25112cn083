#include <iostream>
using namespace std;

int main() {
 int n;
cout << "Enter size of array: ";
cin >> n;

int arr[n], evenCount = 0, oddCount = 0;
cout << "Enter " << n << " elements: ";
for (int i = 0; i < n; i++) {
 cin >> arr[i];
 if (arr[i] % 2 == 0)
 evenCount++;   // divisible by 2 → even
 else
oddCount++;    // otherwise odd
    }

 cout << "Even elements = " << evenCount << endl;
 cout << "Odd elements = " << oddCount;
 return 0;
}
