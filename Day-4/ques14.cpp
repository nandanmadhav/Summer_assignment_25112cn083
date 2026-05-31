//finding nth fibonacci term
#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter the term n";
  cin >> n ;
  int a=0,b=1,next; 
  if (n==1)
  cout<< "nth fibonacci term ="<<a;
  else if(n==2)
  cout << "nth fibonacci term="<<b;
  else{
    for(int i =3 ; i<=n; i++){
      next=a+b;
      a=b;
      b=next;
    }
    cout << " nth fibonacci term ="<<b;
  }
  return 0;
}