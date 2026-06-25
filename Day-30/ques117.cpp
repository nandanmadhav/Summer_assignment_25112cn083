#include <iostream>
#include <string>
using namespace std;

int main() {
int n;
cout << "Enter number of students: ";
 cin >> n;
int roll[50];
string name[50];
float marks[50];
for(int i=0; i<n; i++) {
 cout << "Enter Roll No, Name, Marks: ";
 cin >> roll[i] >> name[i] >> marks[i];
}
cout << "\n--- Student Records ---\n";
for(int i=0; i<n; i++) {
 cout << roll[i] << " " << name[i] << " " << marks[i] << endl;
}
return 0;
}
