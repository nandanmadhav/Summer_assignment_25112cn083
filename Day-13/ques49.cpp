#include <iostream>
using namespace std;

int main() {
 int n;
 cout << "Enter size of array: ";
cin >> n;

int arr[n];   // declare array of size n

 cout << "Enter " << n << " elements: ";
for (int i = 0; i < n; i++) {
 cin >> arr[i];   // input each element
 }

 cout << "Array elements are: ";
 for (int i = 0; i < n; i++) {
 cout << arr[i] << " ";   // display each element
}
 return 0;
}
