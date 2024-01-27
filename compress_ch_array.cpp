#include<iostream>
#include<string>
#include<vector>
using namespace std;
string intToString(int count) {
    string result = "";
    while (count > 0) {
        result = char('0' + count % 10) + result;
        count /= 10;
    }
    return result.empty() ? "1" : result; // If count is 1, return "1"
}
int compress(vector<char>& chars){
	int i=0;
	int ansIndex=0;
	int n=chars.size();
	while(i<n)
	{
		int j=i+1;
		while(j<n && chars[i]==chars[j])
		{
			j++;
		}
		chars[ansIndex++]=chars[i];
		int count=j-1;
		cout<<"Count="<<count<<endl;
		if(count>1)
		{
			string cnt=intToString(count);
			
			for(char ch:cnt){
				chars[ansIndex++]=ch;
			}
		}
		i=j;
	}
	return ansIndex;
}
int main()
{
	vector<char>chars={'a','a','b','b','b','b','c','c'};
	
	cout<<compress(chars);
}
