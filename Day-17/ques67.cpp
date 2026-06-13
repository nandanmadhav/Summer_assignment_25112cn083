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
unordered_set<int> result;

 for(int i=0; i<n2; i++) {
if(s1.count(arr2[i])) result.insert(arr2[i]);
 }

cout << "Intersection of arrays: ";
 for(auto x : result) cout << x << " ";
cout << endl;
return 0;
}