#include <iostream>
#include <string>
using namespace std;

int main() {
  string str;
cout << "Enter a string: ";
getline(cin, str);

int freq[256] = {0};  // ASCII characters

for (char c : str) {
freq[(unsigned char)c]++;
}

cout << "Character frequencies:\n";
for (int i = 0; i < 256; i++) {
if (freq[i] > 0)
cout << (char)i << " : " << freq[i] << endl;
}
return 0;
}
