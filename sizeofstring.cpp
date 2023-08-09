#include<iostream>
using namespace std;
int getLength(char a[])
{
	int count=0;
	for(int i=0;a[i]!='\0';i++)
	{
		count++;
	}
	return count;
}
int main()
{
	char a[50];
	cout<<"Enter your name ";
	cin>>a;
	cout<<a;
	cout<<"Size of name= "<<getLength(a);
	return 0;
	
}
