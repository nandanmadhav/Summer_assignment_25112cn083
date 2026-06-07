<<<<<<< HEAD
// product of digit
#include <iostream>
using namespace std;
int main(){
  int num, digit , product=1;
  cout<< "enter a number:";
  cin>> num;
  while (num>0){
    digit= num%10;
    product = product*digit;
    num=num/10;
  }
  cout << "product of digits ="<< product;
  return 0;
}
=======
// Finding factorial of a number
#include<iostream>
using namespace std;
int main (){
int n =6;
int factorial=1;
int i;
cout<< " Enter the number";
cin >> n;
if(n<0){
   cout << "Factorial does not exist";
}
   else{
for (i=1; i<=n ; i++){
  factorial= factorial*i;
}
cout<<"Fcatorial of a given number is"<< n << " = " << factorial;
   }




  return 0;
}
>>>>>>> 4bf9729b7bbce2926555373882e410f34ad2fdd4
