#include<iostream>
using namespace std;
bool isPresent(int arr[3][3])
{
	int n;
	cin>>n;
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(arr[i][j]==n){
				return 1;
			}
		}
	}
	return 0;
}
void rowSum(int arr[3][3]){
	cout<<"Sum of col";
	for(int i=0;i<3;i++)
	{
		int sum=0;
		for(int j=0;j<3;j++)
		{
			sum+=arr[i][j];
		}
		cout<<sum<<endl;
	}
}
void colSum(int arr[3][3]){
	cout<<"Sum of row";
	for(int j=0;j<3;j++)
	{
		int sum=0;
		for(int i=0;i<3;i++)
		{
			sum+=arr[i][j];
		}
		cout<<sum<<endl;
	}
}
int main()
{
	int arr[3][3];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>arr[i][j];
		}
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	rowSum(arr);
	colSum(arr);
	if(isPresent(arr));
	{
		cout<<"Found";
	}

	
}
