#include <iostream>
using namespace std;

int stringLength(char str[]) {
int length = 0;
while (str[length] != '\0') {  // loop until null character
length++;
}
return length;
}

int main() {
char str[100];
cout << "Enter a string: ";
cin.getline(str, 100);

cout << "Length of string = " << stringLength(str);
return 0;
}
