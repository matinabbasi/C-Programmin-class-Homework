#include <iostream>
#include<conio.h>
#include <math.h>
using namespace std;

int main() {
  cout << "please enter your salari in million toman format (ex : 5000 it means five million toman)"<<"\n";
  int salary;
  cin>>salary;

if(salary<6000){
	cout<<"your net salary is:"<<salary;
}else if(salary>=6000 and salary <8000){
	cout<<"your net salary is:"<<static_cast<float>(salary-((static_cast<float>(salary))*(static_cast<float>(5)/static_cast<float>(100))));
}else if(salary>=8000 and salary <10000){
	cout<<"your net salary is:"<<static_cast<float>(salary-((static_cast<float>(salary))*(static_cast<float>(10)/static_cast<float>(100))));
}else if(salary>=10000 and salary <14000){
	cout<<"your net salary is:"<<static_cast<float>(salary-((static_cast<float>(salary))*(static_cast<float>(15)/static_cast<float>(100))));
}else if(salary>=14000 and salary <18000){
	cout<<"your net salary is:"<<static_cast<float>(salary-((static_cast<float>(salary))*(static_cast<float>(20)/static_cast<float>(100))));
}else if(salary>=18000 and salary <25000){
	cout<<"your net salary is:"<<static_cast<float>(salary-((static_cast<float>(salary))*(static_cast<float>(25)/static_cast<float>(100))));
}else{
	cout<<"your net salary is:"<<static_cast<float>(salary-((static_cast<float>(salary))*(static_cast<float>(35)/static_cast<float>(100))));
}
 getch();
}
