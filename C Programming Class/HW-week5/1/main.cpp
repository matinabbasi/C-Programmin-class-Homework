#include <iostream>
#include<conio.h>
#include <math.h>
using namespace std;

int main() {
  cout << "please enter your salari in million toman format (ex : 5000 it means five million toman)"<<"\n";
  double salary;
  cin>>salary;

if(salary<6000){
	cout<<"your net salary is:"<<salary;
}else if(salary>=6000 and salary <8000){
	cout<<"your net salary is:"<<(salary-(salary*5/100));
}else if(salary>=8000 and salary <10000){
	cout<<"your net salary is:"<<(salary-(salary*10/100));
}else if(salary>=10000 and salary <14000){
	cout<<"your net salary is:"<<(salary-(salary*15/100));
}else if(salary>=14000 and salary <18000){
	cout<<"your net salary is:"<<(salary-(salary*20/100));
}else if(salary>=18000 and salary <25000){
	cout<<"your net salary is:"<<(salary-(salary*25/100));
}else{
	cout<<"your net salary is:"<<(salary-(salary*35/100));
}
 getch();
}
