#include<iostream>
using namespace std;
int main()
{
	char s[100];
	//cin>>s[];
	cin.getline(s, 100);
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=" ")
		{
			s[i]=="#";
		}
	}
	return 0;
}
