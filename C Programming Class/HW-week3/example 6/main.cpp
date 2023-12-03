#include <iostream>
#include<conio.h>
using namespace std;

int main() {
  cout << "please enter two number"<<"\n";
  int a,b;
  cin>>a>>b;
  int p = 1;
  int i = b;
  for (i; i > 0; i--) {
	p = p * a;
  }
  cout<<"the first number to the power of the second ="<<"  "<<p;
  getch();
}