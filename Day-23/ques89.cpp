#include <iostream>
#include <string>
using namespace std;

int main() {
string str;
cout << "Enter a string: ";
getline(cin, str);
int freq[256] = {0};
for (char c : str) {
freq[(unsigned char)c]++;
}
for (char c : str) {
if (freq[(unsigned char)c] == 1) {
cout << "First non-repeating character: " << c << endl;
return 0;
 }
}

cout << "No non-repeating character found" << endl;
 return 0;
}
