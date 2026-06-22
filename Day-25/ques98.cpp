#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
string s1 = "hello";
string s2 = "world";
set<char> common;

for(char c : s1) {
if(s2.find(c) != string::npos)
 common.insert(c);
 }
cout << "Common Characters: ";
for(char c : common) cout << c << " ";
return 0;
}
