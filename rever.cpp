#include<iostream>
using namespace std;
void reverse(char s[10],int n)
{
	
	for(int i=n-1;i>=0;i--)
	{
		cout<<s[i];
	}
	
}
char toLower(char s)
{
	if(s>='a'&& s<='z')
	return s;
	else
	return s-'A'+'a';   
}
bool palindrome(char s[],int n)
{
	int a=0;
	int e=n-1;
	while(a<=e)
	{
	if(toLower(s[a])!=toLower(s[e]))
	{
		return 0;
		}	
		else
		{
			a++;
			e--;
		}
	}
	return 1;
}

int getLength(char s[])
{
	int count=0;
	for(int i=0;s[i]!='\0';i++)
{
	count++;
}
return count;
}
int main()
{
	char s[10];
	cin>>s;
	int n=getLength(s);
	//cout<<n;
	reverse(s,n);
	cout<<palindrome(s,n);
	 
	return 0;
}
