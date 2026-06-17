#include <iostream>
using namespace std;

bool isVowel(char ch) {
ch = tolower(ch);  // convert to lowercase
return (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
}

int main() {
    char str[100];
cout << "Enter a string: ";
cin.getline(str, 100);

int vowels = 0, consonants = 0;
for (int i = 0; str[i] != '\0'; i++) {
if (isalpha(str[i])) {   // check only letters
if (isVowel(str[i]))
vowels++;
else
consonants++;
}
}
cout << "Vowels = " << vowels << endl;
cout << "Consonants = " << consonants << endl;
return 0;
}
