#include <iostream>
#include <string>
using namespace std;

struct Item {
int id;
string name;
int quantity;
float price;
};

int main() {
Item inv[50];
int n;
cout << "Enter number of items: ";
cin >> n;
for(int i=0; i<n; i++) {
cout << "Enter ID, Name, Quantity, Price: ";
cin >> inv[i].id >> inv[i].name >> inv[i].quantity >> inv[i].price;
}
cout << "\n--- Inventory Records ---\n";
for(int i=0; i<n; i++) {
cout << inv[i].id << " " << inv[i].name << " Qty: " << inv[i].quantity 
<< " Price: " << inv[i].price << endl;
}
return 0;
}
