 
#include<iostream>
using namespace std;
class shape
{
	public:
	virtual void dimension()
	{
	cout<<"Enter dimension";	
	}
};
class triangle:public shape
{
	public:

void trishape()
	{
		int a,b,c;
		cout<<" triangle ";
		cin>>a>>b>>c;
		cout<<"All sides of triangle="<<a<<" "<<b<<" "<<c<<endl;
	}
};
class rectangle:public shape
{
	public:
	void rectshape()
	{
		int l,w;
		cout<<" rectangle";
		cin>>l>>w;
		cout<<"Length and breadth of rectangle="<<l<<" "<<w<<endl;
	}
};
class circle:public shape
{
	public:
	void circleshape()
	{
		int r;
		cout<<" circle";
		cin>>r;
		cout<<"Radius of circle="<<r;
	}
};
int main()
{
	triangle tri;
	rectangle rect;
	circle cir;
	shape* shape1 = &tri;
	shape* shape2 = &rect;
	shape* shape3 = &cir;
	shape1->dimension();
	tri.trishape();
	shape2->dimension();
	rect.rectshape();
	shape3->dimension();
	cir.circleshape();
	return 0;
	
	
}
