#include <iostream>
using namespace std;

int main() {
int n;
 cout << "Enter size of array: ";
 cin >> n;

 int arr[n], sum = 0;
cout << "Enter " << n << " elements: ";
 for (int i = 0; i < n; i++) {
 cin >> arr[i];
 sum += arr[i];   // add each element to sum
}

double avg = (double)sum / n;   // calculate average

 cout << "Sum = " << sum << endl;
 cout << "Average = " << avg;
return 0;
}
