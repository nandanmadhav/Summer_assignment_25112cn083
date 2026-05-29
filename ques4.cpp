#include <iostream>
using namespace std;
int main(){
  int num , original, reverse=0 , digit;
  cout << " enter the number";
  cin>> num;
  while (num>0){
    digit = num%10;
    reverse=reverse*10+digit;
    num = num/10;

  }
  if (original==reverse){
    cout<<"palindrome number";
  }
  else{
    cout << "not a pallindrome number";
  }
  return 0;
}