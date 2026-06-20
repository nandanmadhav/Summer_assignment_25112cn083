#include <iostream>
#include <string>
using namespace std;

int main() {
string str;
cout << "Enter a string: ";
getline(cin, str);
bool seen[256] = {false};
string result = "";
for (char c : str) {
if (!seen[(unsigned char)c]) {
 result += c;
seen[(unsigned char)c] = true;
}
}
cout << "String without duplicates: " << result << endl;
return 0;
}
