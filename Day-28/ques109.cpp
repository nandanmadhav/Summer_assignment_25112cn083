#include <iostream>
#include <string>
using namespace std;

struct Book {
int id;
string title;
string author;
bool isIssued;
};

int main() {
Book b[50];
 int n;
cout << "Enter number of books: ";
cin >> n;
for(int i=0; i<n; i++) {
 cout << "Enter ID, Title, Author: ";
 cin >> b[i].id >> b[i].title >> b[i].author;
b[i].isIssued = false;
}
cout << "\n--- Library Records ---\n";
for(int i=0; i<n; i++) {
cout << b[i].id << " " << b[i].title << " " << b[i].author 
<< " Issued: " << (b[i].isIssued ? "Yes" : "No") << endl;
 }
 return 0;
}
