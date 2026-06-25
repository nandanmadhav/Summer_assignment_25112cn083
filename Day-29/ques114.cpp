#include <iostream>
using namespace std;

int main() {
int arr[50], n, choice;
cout << "Enter size of array: ";
 cin >> n;
cout << "Enter elements: ";
for(int i=0; i<n; i++) cin >> arr[i];
do {
 cout << "\n--- Array Menu ---\n";
 cout << "1. Display\n2. Sum\n3. Largest\n4. Smallest\n5. Exit\n";
 cout << "Enter choice: ";
cin >> choice;
switch(choice) {
 case 1: for(int i=0; i<n; i++) cout << arr[i] << " "; cout << endl; break;
case 2: {int sum=0; for(int i=0; i<n; i++) sum+=arr[i]; cout << "Sum = " << sum << endl;} break;
 case 3: {int max=arr[0]; for(int i=1; i<n; i++) if(arr[i]>max) max=arr[i]; cout << "Largest = " << max << endl;} break;
case 4: {int min=arr[0]; for(int i=1; i<n; i++) if(arr[i]<min) min=arr[i]; cout << "Smallest = " << min << endl;} break;
case 5: cout << "Exiting...\n"; break;
 default: cout << "Invalid choice!\n";
 }
 } while(choice != 5);

 return 0;
}
