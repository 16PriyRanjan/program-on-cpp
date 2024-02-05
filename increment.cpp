#include<iostream>
using namespace std;
int main()
{
	int num=5;
	int *p=&num;
	//*ptr++;
	cout<<num<<endl;
	num++;
	cout<<*p<<endl;
	int *q=p;
	cout<<p<<"- "<<q<<endl;
	cout<<*p<<"- "<<*q<<endl;
	int i=3;
	int *t=&i;
	*t=*t+1;
	cout<<*t<<endl;
	cout<<"before t"<<t<<endl;
	t=t+1;
	cout<<"After t"<<t<<endl;
	
}
