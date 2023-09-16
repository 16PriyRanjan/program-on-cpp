#include <fstream>
#include <iostream>
using namespace std;
int main()
{
	fstream obj;
	obj.open("testout.txt",ios::in);
	int pos=6;
	obj.seekg(pos);
	while(!obj.eof())
	{
		char ch;
		obj>>ch;
		cout<<ch;
	}
	obj.close();
}
