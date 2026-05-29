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