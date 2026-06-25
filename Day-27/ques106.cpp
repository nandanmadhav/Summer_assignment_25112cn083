#include <iostream>
#include <string>
using namespace std;

struct Employee {
int id;
string name;
string designation;
float salary;
};

int main() {
Employee e[50];
int n;
cout << "Enter number of employees: ";
cin >> n;
for(int i=0; i<n; i++) {
 cout << "Enter ID, Name, Designation, Salary: ";
cin >> e[i].id >> e[i].name >> e[i].designation >> e[i].salary;
}
cout << "\n--- Employee Records ---\n";
for(int i=0; i<n; i++) {
 cout << e[i].id << " " << e[i].name << " " << e[i].designation << " " << e[i].salary << endl;
}
 return 0;
}
