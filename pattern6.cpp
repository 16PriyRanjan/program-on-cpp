#include <iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int count=1;
int i=1;
while(i<=n){
	int j=1;
	while(j<=i){
		cout<<count<<" ";
		count++;
		j++;
	}
	cout<<endl;
	i=i+1;
	
}
return 0;
}
/*
1 
2 3 
4 5 6*/

