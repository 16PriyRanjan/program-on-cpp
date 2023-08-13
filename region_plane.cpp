#include<iostream>
using namespace std;
int region(int n)
{
	int r=n*(n+1)/2+1;
	return r;
}
int main()
{
	int n;
	cin>>n;
	int c=region(n);
	cout<<c;
	return 0;
}

