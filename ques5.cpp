<<<<<<< HEAD
//find sum of digit of a number
#include<iostream>
using namespace std;
int main(){
int number ,digit, sum = 0;
cout << "enter the number";
cin >> number;

while (number> 0){
  digit = number%10;
  sum = sum + digit;
  number = number /10;
  
}

cout<< "sum of digits="<<sum<<endl;



  return 0;
}
=======
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    // Ask user for input
    cout << "Enter a number: ";
    cin >> n;

    // Calculate sum using loop
    for(int i = 1; i <= n; i++) {
        sum = sum + i;
    }

    // Display result
    cout << "Sum of first " << n << " natural numbers is: " << sum;

    return 0;
}
>>>>>>> 4bf9729b7bbce2926555373882e410f34ad2fdd4
