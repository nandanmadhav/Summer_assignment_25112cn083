#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str;
    int choice;

    cout << "Enter a string: ";
    cin >> str;

    do {
        cout << "\n--- String Operations Menu ---\n";
        cout << "1. Find Length\n";
        cout << "2. Reverse String\n";
        cout << "3. Count Vowels and Consonants\n";
        cout << "4. Convert to Uppercase\n";
        cout << "5. Convert to Lowercase\n";
        cout << "6. Check Palindrome\n";
        cout << "7. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Length = " << str.length() << endl;
                break;

            case 2: {
                string rev = str;
                reverse(rev.begin(), rev.end());
                cout << "Reversed String = " << rev << endl;
                break;
            }

            case 3: {
                int vowels = 0, consonants = 0;
                for(char c : str) {
                    char ch = tolower(c);
                    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                        vowels++;
                    else if(isalpha(ch))
                        consonants++;
                }
                cout << "Vowels = " << vowels << ", Consonants = " << consonants << endl;
                break;
            }

            case 4: {
                string up = str;
                for(char &c : up) c = toupper(c);
                cout << "Uppercase = " << up << endl;
                break;
            }

            case 5: {
                string low = str;
                for(char &c : low) c = tolower(c);
                cout << "Lowercase = " << low << endl;
                break;
            }

            case 6: {
                string rev = str;
                reverse(rev.begin(), rev.end());
                if(rev == str)
                    cout << "Palindrome: Yes" << endl;
                else
                    cout << "Palindrome: No" << endl;
                break;
            }

            case 7:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }
    } while(choice != 7);

    return 0;
}
