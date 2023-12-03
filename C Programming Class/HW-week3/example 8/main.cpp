#include <iostream>
#include<conio.h>
using namespace std;

int main() {
  cout << "please enter two number"<<"\n";
  int a,b;
  cin>>a>>b;
  int t = 0;
 while(b != 0){
 	t = a%b;
 	a=b;
 	b=t;
 }
  cout<<"Greatest common divisor ="<<"  "<<a;
  getch();
}