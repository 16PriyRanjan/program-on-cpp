#include<iostream>
#include<math.h>
using namespace std;
class evensquare
{
	public:
	int evensq()
	{
	int n,i,sum=0;
	cout<<"Enter number";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(i%2==0)
		{
		sum=sum+pow(i,2);	
		}
		}
		return sum;	
	}
};
int main()
{
	evensquare obj;
	cout<<obj.evensq();
}
