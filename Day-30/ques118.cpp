#include <iostream>
#include <string>
using namespace std;

int main() {
int n;
 cout << "Enter number of books: ";
cin >> n;
int id[50];
string title[50], author[50];
bool issued[50];
for(int i=0; i<n; i++) {
cout << "Enter ID, Title, Author: ";
cin >> id[i] >> title[i] >> author[i];
 issued[i] = false;
}
cout << "\n--- Library Records ---\n";
for(int i=0; i<n; i++) {
cout << id[i] << " " << title[i] << " " << author[i]
<< " Issued: " << (issued[i] ? "Yes" : "No") << endl;
}
return 0;
}
