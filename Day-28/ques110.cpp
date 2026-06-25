#include <iostream>
#include <string>
using namespace std;

struct Account {
int accNo;
string name;
float balance;
};

int main() {
Account a[50];
int n;
cout << "Enter number of accounts: ";
cin >> n;
for(int i=0; i<n; i++) {
cout << "Enter Account No, Name, Balance: ";
cin >> a[i].accNo >> a[i].name >> a[i].balance;
}
cout << "\n--- Bank Accounts ---\n";
for(int i=0; i<n; i++) {
cout << a[i].accNo << " " << a[i].name << " Balance: " << a[i].balance << endl;
}
 return 0;
}
