#include<iostream>
using namespace std;
int fact(int n)
{
	if(n==0)
	return 1;
	int s=fact(n-1);
	int b=s*n;
	return b;
}
int main()
{
	int n;
	cin>>n;
	int ans=fact(n);
	cout<<ans;
}
