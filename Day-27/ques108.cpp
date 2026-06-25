#include <iostream>
#include <string>
using namespace std;

struct Student {
int rollNo;
string name;
float marks[5];   // marks in 5 subjects
float total;
float percentage;
};

int main() {
int n;
cout << "Enter number of students: ";
cin >> n;
Student s[50];  // array of students
for(int i=0; i<n; i++) {
cout << "\nEnter Roll No and Name: ";
 cin >> s[i].rollNo >> s[i].name;
s[i].total = 0;
 cout << "Enter marks of 5 subjects: ";
for(int j=0; j<5; j++) {
 cin >> s[i].marks[j];
 s[i].total += s[i].marks[j];
}
s[i].percentage = s[i].total / 5.0;
 }
cout << "\n--- Marksheet ---\n";
    for(int i=0; i<n; i++) {
cout << "Roll No: " << s[i].rollNo << ", Name: " << s[i].name << endl;
 cout << "Total Marks: " << s[i].total << endl;
cout << "Percentage: " << s[i].percentage << "%" << endl;
 if(s[i].percentage >= 60) cout << "Result: First Division\n";
else if(s[i].percentage >= 45) cout << "Result: Second Division\n";
 else if(s[i].percentage >= 33) cout << "Result: Third Division\n";
else cout << "Result: Fail\n";
cout << "-----------------------------\n";
 }

return 0;
}
