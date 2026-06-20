#include <iostream>
#include <string>
using namespace std;

bool isRotation(string s1, string s2) {
if (s1.length() != s2.length()) return false;
string temp = s1 + s1;  // concatenate
return temp.find(s2) != string::npos;
}

int main() {
string str1, str2;
cout << "Enter first string: ";
getline(cin, str1);
 cout << "Enter second string: ";
getline(cin, str2);
if (isRotation(str1, str2))
cout << "Strings are rotations of each other" << endl;
else
 cout << "Strings are not rotations" << endl;
return 0;
}
