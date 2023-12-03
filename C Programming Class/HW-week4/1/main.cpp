#include <iostream>
#include<conio.h>
#include <math.h>
using namespace std;

int main() {
  cout << "please enter tow decimal number"<<"\n";
  float a;
  float b;
  cin>>a>>b;
  
  cout<<"The sum of two numbers : "<<a+b<<"\n";
  cout<<"The result of subtracting two numbers : "<<a-b<<"\n";
  cout<<"multiplication of two numbers : "<<a*b<<"\n";
  float c = fmod(a , b);
  if (b != 0){
  	cout<<"The remainder of dividing the first number by the second : "<<c;
  }else{
  	cout<<"Error: Division by zero is not allowed.\n";
  }
 getch();
}
