#include <iostream>
#include <string>
using namespace std;

struct Contact {
int id;
 string name;
 string phone;
string email;
};

int main() {
Contact c[50];
int n;
cout << "Enter number of contacts: ";
cin >> n;
for(int i=0; i<n; i++) {
 cout << "Enter ID, Name, Phone, Email: ";
 cin >> c[i].id >> c[i].name >> c[i].phone >> c[i].email;
}
cout << "\n--- Contact Records ---\n";
 for(int i=0; i<n; i++) {
cout << c[i].id << " " << c[i].name << " " << c[i].phone << " " << c[i].email << endl;
}
 return 0;
}
