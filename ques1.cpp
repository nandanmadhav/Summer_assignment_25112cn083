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
