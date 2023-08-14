#include<iostream>
#include<math.h>
using namespace std;
class square
{
	public:
	void sq(int a)
	{
		int n=4,sum=0;
		cout<<"Power till";
		cin>>n;
		for(int i=0;i<=n;i++)
		{
			sum=sum+pow(a,i);
		}
		cout<<sum;
	}
};
int main()
{
	int b=2;
	square abc;
	abc.sq(b);
return 0;
}
