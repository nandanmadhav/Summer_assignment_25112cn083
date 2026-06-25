#include <iostream>
#include <string>
using namespace std;

struct Student {
int rollNo;
string name;
float marks;
};

// Function to display records
void display(Student s[], int n) {
cout << "\n--- Student Records ---\n";
for(int i=0; i<n; i++) {
cout << s[i].rollNo << " " << s[i].name << " " << s[i].marks << endl;
}
}

// Function to search by roll number
void search(Student s[], int n, int roll) {
for(int i=0; i<n; i++) {
if(s[i].rollNo == roll) {
cout << "Found: " << s[i].name << " Marks: " << s[i].marks << endl;
 return;
}
}
 cout << "Record not found!\n";
}

int main() {
int n;
cout << "Enter number of students: ";
 cin >> n;
Student s[50];
for(int i=0; i<n; i++) {
cout << "Enter Roll No, Name, Marks: ";
cin >> s[i].rollNo >> s[i].name >> s[i].marks;
}
 int choice;
do {
 cout << "\n--- Menu ---\n";
 cout << "1. Display Records\n2. Search by Roll No\n3. Exit\n";
 cout << "Enter choice: ";
cin >> choice;
 switch(choice) {
case 1: display(s, n); break;
 case 2: {
int roll;
cout << "Enter Roll No to search: ";
cin >> roll;
search(s, n, roll);
break;
}
case 3: cout << "Exiting...\n"; break;
default: cout << "Invalid choice!\n";
}
} while(choice != 3);
 return 0;
}
