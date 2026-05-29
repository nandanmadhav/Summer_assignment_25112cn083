<<<<<<< HEAD
// reversea number 
#include <iostream>
using namespace std;
int main(){
  int num, reverse=0, digit;
  cout<< "enter the number";
  cin>> num;
  while (num>0){
    digit = num%10;
    reverse= reverse*10+digit;
    num=num/10;
  }
  cout<< "reversed number = "<< reverse;
  return 0;
}
=======
// Print multiplication table of a given number 
#include<iostream>
using namespace std;
int main (){
  int n ;
  int i ;
  int Table =0;
  cout << " Enter a number ";
  cin >> n;
  for (i=1 ; i<=10; i++){
   int Table = n *i;
  

cout << n << "x" << i << "=" << Table <<endl;//let n =4 then 4 x 1 = 4   x sir eak multiply sign dikha rah hai

  }

  return 0;
}

>>>>>>> 4bf9729b7bbce2926555373882e410f34ad2fdd4
