#include <iostream>
using namespace std;

int main() {
int score = 0, ans;
cout << "Q1: Capital of India?\n1. Delhi\n2. Mumbai\n3. Kolkata\n";
cin >> ans;
if(ans == 1) score++;
 cout << "Q2: 2 + 2 = ?\n1. 3\n2. 4\n3. 5\n";
 cin >> ans;
if(ans == 2) score++;
cout << "Q3: Largest planet?\n1. Earth\n2. Jupiter\n3. Mars\n";
cin >> ans;
if(ans == 2) score++;
 cout << "Your Score: " << score << "/3\n";
 return 0;
}
