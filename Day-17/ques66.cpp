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

unordered_set<int> s;
for(int i=0; i<n1; i++) s.insert(arr1[i]);
for(int i=0; i<n2; i++) s.insert(arr2[i]);

cout << "Union of arrays: ";
 for(auto x : s) cout << x << " ";
cout << endl;
return 0;
}