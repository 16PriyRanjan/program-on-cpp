#include<iostream>
#include<string>
using namespace std;
//removing the space or special character
bool valid(char ch)
{
	if((ch>-'a'&& ch<='z')||(ch>='A'&& ch<='Z')||ch>='0'&&ch<='9'){
		return 1;
	}
	return 0;
}
//convert it into lowerCase
char toLowerCase(char ch)  
{
	if((ch>='a'&&ch<='z')||(ch>='0'&&ch<='9'))
	{
		return ch;
	}
	else{
		char temp=ch-'A'+'a';
		return temp;
	}
}
bool checkPalindrome(string a)
{
	int s=0;
	int e=a.length()-1;
	while(s<=e)
	{
		if(a[s] != a[e])
		{
			return 0;
		}
		else
		{
			s++;
			e--;
		}
	}
	return 1;
}
bool isPalindrome(string s)
{
	//special character removal
	string temp="";
	for(int j=0;j<s.length();j++)
	{
		if(valid(s[j])){
			temp.push_back(s[j]);
		}
	}
	//lowercase convert
	for(int j=0;j<temp.length();j++)
	{
		temp[j]=toLowerCase(temp[j]);
	}
	return checkPalindrome(temp);
}
int main()
{
	string s="a mam a";
	//cin>>s;
	cout<<isPalindrome(s);
	return 0;
}
//HW-> hello world->0lleh dlrow
