#include <iostream>
using namespace std;

int main() {
int choice, a, b;
 do {
cout << "\n--- Calculator Menu ---\n";
cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\n";
cout << "Enter choice: ";
cin >> choice;
 if(choice >= 1 && choice <= 4) {
cout << "Enter two numbers: ";
 cin >> a >> b;
}
switch(choice) {
 case 1: cout << "Sum = " << a+b << endl; break;
  case 2: cout << "Difference = " << a-b << endl; break;
case 3: cout << "Product = " << a*b << endl; break;
 case 4: if(b!=0) cout << "Quotient = " << a/b << endl;
 else cout << "Error: Divide by zero!\n"; break;
case 5: cout << "Exiting...\n"; break;
default: cout << "Invalid choice!\n";
}
 } while(choice != 5);
return 0;
}
