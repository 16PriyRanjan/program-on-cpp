 #include<iostream>
 using namespace std;
 int main()
 {
 	int n;
 	cin>>n;
 	int i=1;
 	while(i<=n)
 	{
	 int val=i;
 		int j=1;
 		while(j<=i)
 		{
 		
 			cout<<val<<" ";
 			val++;
 			j++;
		 }
		 cout<<endl;
		 i++;
 		
	 }
 	return 0;
 }
 /*
 1
 2 3
 3 4 5
 4 5 6 7
 */
 
