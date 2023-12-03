#include <iostream>
#include<conio.h>
using namespace std;

int main() {
  cout << "please enter a number"<<"\n";
  int n;
  cin>>n;
  
  	int a=1;
	int b=1;
	int i=3;
	int fib=0;
  
if (n<=3){
	if(n==0){
		cout << "please enter a valid number (n>0)";
	}else if(n==1){
		cout << "The last number in the Fibonacci sequence is : 0";
	}
	else{
		cout << "The last number in the Fibonacci sequence is : 1";
	}
}else{
	 while(i < n){
 	 	fib = a+b;
 	 	a=b;
 	 	b=fib;
 	 	i+=1;
	 }
 		cout<<"The last number in the Fibonacci sequence is (Including zero): "<<fib;
}
 getch();
}