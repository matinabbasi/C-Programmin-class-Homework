#include <iostream>
#include<conio.h>
#include <math.h>
using namespace std;

int main() {
  cout << "please enter an alphabet"<<"\n";
  char x;
  cin>>x;

switch(x)
    {
        case 'a':
        case 'e':
        case 'i':
    	case 'o':
        case 'u':
            cout<<"\n"<<x<<" is a vowel alphabet";
            break;
        default:
            cout<<"\n"<<x<<"\n is not a vowel";
            break;
    }
 getch();
}
