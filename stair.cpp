#include<iostream>
using namespace std;
int stair(int n)
{
	if(n<0)
	return 0;
	if(n==0)
	return 1;
	return stair(n-1)+stair(n-2);
}
int main()
{
	int n=5;
	cout<<stair(n);
}
