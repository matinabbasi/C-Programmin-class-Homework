#include <iostream>
#include<conio.h>
#include <math.h>
using namespace std;

int main() {
  cout << "please enter three integer number"<<"\n";
  int x,y,z;
  cin>>x>>y>>z;
  
if(((x+y+z)*(x+y+z))-1 == 0){
cout<<"invalid numbers (The root of the denominator of the equation becomes zero)";
}else{
	float answer = static_cast<float>((x-y)*(x+z))/(static_cast<float>(((x+y+z)*(x+y+z))+1));
	cout<<"(x-y)*(x+z)"<<"\n"<<"-----------"<<"\n"<<"(x+y+z)^2+1";
	cout<<"\n"<<"the answer is :"<<answer;
}
 getch();
}
