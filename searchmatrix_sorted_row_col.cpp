#include<iostream>
#include<vector>
using namespace std;
bool searchMatrix(vector<vector<int> > &arr,int target)
{
	int row=arr.size();
	int col=arr[0].size();
	
	int rowIndex=0;
	int colIndex=col-1;
	while(rowIndex<row && colIndex>=0)
	{
		int element=arr[rowIndex][colIndex];
		if(target==element)
		{
			return true;
		}
		if(target>element)
		{
			rowIndex++;
		}
		else
		{
			colIndex--;
		}
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
