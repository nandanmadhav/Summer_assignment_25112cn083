#include <iostream>
using namespace std;

void toUppercase(char str[]) {
for (int i = 0; str[i] != '\0'; i++) {
 if (str[i] >= 'a' && str[i] <= 'z') {
str[i] = str[i] - 32;   // ASCII conversion
}
}
}
int main() {
char str[100];
cout << "Enter a string: ";
cin.getline(str, 100);
toUppercase(str);
cout << "Uppercase string = " << str;
return 0;
}
