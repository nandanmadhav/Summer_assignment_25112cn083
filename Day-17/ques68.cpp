#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
int n1, n2;
cout << "Enter size of first array: ";
cin >> n1;
int arr1[n1];
for(int i=0; i<n1; i++) cin >> arr1[i];

cout << "Enter size of second array: ";
cin >> n2;
int arr2[n2];
for(int i=0; i<n2; i++) cin >> arr2[i];

unordered_set<int> s1(arr1, arr1+n1);
cout << "Common elements: ";
for(int i=0; i<n2; i++) {
if(s1.count(arr2[i])) {
  cout << arr2[i] << " ";
s1.erase(arr2[i]); // avoid duplicates in output
 }
}
cout << endl;
return 0;
}