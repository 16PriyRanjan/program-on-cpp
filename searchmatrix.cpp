#include<iostream>
#include<vector>
using namespace std;
bool searchMatrix(vector<vector<int> > &arr,int target)
{
	int row=arr.size();
	int col=arr[0].size();
	
	int start=0;
	int end=row*col-1;
	int mid=start+(end-start)/2;
	while(start<=end)
	{
		int element=arr[mid/col][mid%col];
	if(element==target){
		return true;
	}	
	if(element<target){
		start=mid-1;
	}
	else{
		end=mid-1;
	}
	mid=start+(end-start)/2;
		
	}
return false;
}

int main()
{
	vector<vector<int> > arr(3, vector<int>(3));
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
	int target;
	cout<<" Enter the target";
	cin>>target;
	cout<<searchMatrix(arr,target);

}
