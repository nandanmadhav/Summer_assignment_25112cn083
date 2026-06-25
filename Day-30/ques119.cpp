#include <iostream>
#include <string>
using namespace std;

int main() {
int n;
cout << "Enter number of employees: ";
cin >> n;
int id[50];
string name[50], designation[50];
float salary[50];
for(int i=0; i<n; i++) {
cout << "Enter ID, Name, Designation, Salary: ";
 cin >> id[i] >> name[i] >> designation[i] >> salary[i];
}
cout << "\n--- Employee Records ---\n";
for(int i=0; i<n; i++) {
  cout << id[i] << " " << name[i] << " " << designation[i]
<< " Salary: " << salary[i] << endl;
}
 return 0;
}
