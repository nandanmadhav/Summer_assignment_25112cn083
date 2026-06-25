#include <iostream>
#include <string>
using namespace std;

struct Student {
int id;
string name;
int age;
float marks;
};

int main() {
Student s[50];
 int n, choice;
cout << "Enter number of students: ";
 cin >> n;
for(int i=0; i<n; i++) {
cout << "Enter ID, Name, Age, Marks: ";
cin >> s[i].id >> s[i].name >> s[i].age >> s[i].marks;
}
cout << "\n--- Student Records ---\n";
for(int i=0; i<n; i++) {
cout << s[i].id << " " << s[i].name << " " << s[i].age << " " << s[i].marks << endl;
}

    return 0;
}
