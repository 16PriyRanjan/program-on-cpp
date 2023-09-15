#include <iostream>
using namespace std;

int main()
{
    try{
    float a;
    float b;
    float c;
    cout<<"Enter first Value"<<endl;
    cin>>a;
    cout<<"Enter second Value"<<endl;
    cin>>b;
    if(b==0)
    {
        throw 10.5;
    }
    c=a/b;
    cout<<"Result:"<<c  ;
    }
    catch(int x)
    {
      cout<<"Please do not use value 0"<<endl;
    }
    catch(float x)
    {
      cout<<"Please do not use value 0"<<endl;
    }




   return 0;
}
