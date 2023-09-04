#include <iostream>
using namespace std;

// Time class template
class Time {
private:
	int HR, MIN, SEC;

	// Defining functions
public:
	// Functions to set the time
	// in the Time class template
	void setTime()
	{
		int x,y,z;
		cout<<"Enter hour";
		cin>>x;
		//cout<<":";
		cout<<"Enter Minute";
		cin>>y;
		//cout<<":";
		cout<<"Enter Second";
		cin>>z;
		//Cout<<":";
		
		HR = x;
		MIN = y;
		SEC = z;
	}

	// Function to print the time
	// in HH:MM:SS format
	void showTime()
	{
		cout << endl
			<< HR << ":" << MIN << ":" << SEC;
	}

	// Function to normalize the resultant
	// time in standard form
	friend normalize();
	// + Operator overloading
	// to add the time t1 and t2
	Time operator+(Time t)
	{
		Time temp;
		temp.SEC = SEC + t.SEC;
		temp.MIN = MIN + t.MIN;
		temp.HR = HR + t.HR;
		normalize();
		return (temp);
	}
};

normalize()
{

		MIN = MIN + SEC / 60;
		SEC = SEC % 60;
		HR = HR + MIN / 60;
		MIN = MIN % 60;
	}
// Driver code
int main()
{
	Time t1, t2, t3;
	t1.setTime();
	t2.setTime();

	// Operator overloading
	t3 = t1 + t2;

	// Printing results
	t1.showTime();
	t2.showTime();
	t3.showTime();

	return 0;
}

