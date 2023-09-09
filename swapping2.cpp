#include<iostream>
//swapping without using third variable
using namespace std;
int main()
{
	int a=4,b=8,temp;
	cout<<"Before swapping a= "<<a;
	cout<<"\nBefore swapping b= "<<b;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"\nAfter swapping a= "<<a;
	cout<<"\nAfter swapping b= "<<b;
	return 0;
}
