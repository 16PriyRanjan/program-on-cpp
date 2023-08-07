#include<iostream>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int i=0;int j=0;
	int n=s.length();
	while(i<n){
	
	if(j>0 && s[i]==s[j-1])
{
	j--;
}
else{
	s[j]=s[i];
	j++;
}
i++;

}
for(int i=0;i<j;i++)
{
cout<<s[i];}
	return 0;
}
