#include <iostream>
#include <string>
using namespace std;

int main() {
string str;
cout << "Enter a string: ";
getline(cin, str);
bool seen[256] = {false};

for (char c : str) {
if (seen[(unsigned char)c]) {
cout << "First repeating character: " << c << endl;
return 0;
}
seen[(unsigned char)c] = true;
}
 cout << "No repeating character found" << endl;
return 0;
}
