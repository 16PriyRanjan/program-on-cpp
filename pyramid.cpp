#include<iostream>
using namespace std;
//using function
void fullPyramidPattern(int n)
{
	for(int i=n;i>=1;i--)
	{
		for(int k=n-i;k>0;k--)
		{
			cout<<" ";
		}
		for(int j=i;j>0;j--)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
}
int main()
{
	int num;
	cout<<"Enter the levels of pattern = ";
	cin>>num;
	fullPyramidPattern(num);
    cout<<endl;
}
