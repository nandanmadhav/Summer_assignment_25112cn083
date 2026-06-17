#include <iostream>
#include <cstring>
using namespace std;

void reverseString(char str[]) {
 int n = strlen(str);
for (int i = 0; i < n/2; i++) {
 char temp = str[i];
str[i] = str[n-i-1];
str[n-i-1] = temp;
 }
}

int main() {
char str[100];
cout << "Enter a string: ";
cin.getline(str, 100);
reverseString(str);
cout << "Reversed string = " << str;
return 0;
}
