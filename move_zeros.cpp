#include<iostream>
using namespace std;
void movezeros(int arr[],int s){
	int i=0;
	for(int j=0;j<s;j++){
		if(arr[j]!=0)
		{
			swap(arr[j],arr[i]);
			i++;
		}
	}
	for(int k=0;k<s;k++)
	{
		cout<<arr[k]<<" ";
	}
}
int main()
{
	int s;
	cout<<"Size for array";
	cin>>s;
	int arr[s];
	for(int i=0;i<s;i++)
	{
		cin>>arr[i];
	}
	movezeros(arr,s);
}
