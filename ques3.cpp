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
