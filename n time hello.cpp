#include <iostream>
using namespace std;
int main(){
	
//int n;
//cout<<"Enter a number"<<endl;
//cin>>n;

int num;
cout<<"Enter number for reverse"<<endl;
cin>>num;

int d1 = num/100;
int d2 = (num/10)%10;
int d3 = num % 10;

int reverse= d3 * 100 + d2 * 10 + d1;
cout<<"Reverse is: "<<reverse<<endl;
}
