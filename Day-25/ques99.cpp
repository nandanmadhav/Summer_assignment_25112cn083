#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
string names[] = {"John", "Alice", "Bob", "Charlie"};
int n = 4;
sort(names, names+n);
cout << "Sorted Names: ";
 for(int i=0; i<n; i++) cout << names[i] << " ";
return 0;
}
