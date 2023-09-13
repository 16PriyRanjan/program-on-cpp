#include <iostream>
using namespace std;

template<class T>
T sum(T arr[], int start, int len)
{

    if(start >= len)
        return 0;

    return (arr[start] + sum(arr, start + 1, len));
}
int main()
{
int arr1[] = {11,22,32,42,52};
double arr2[] = {1.1,1.2,1.3,1.4,1.5};
float arr3[]={12.3f,11.1f,11.3f,12.2f,13.1f};
cout<<sum(arr1,4,0)<<endl;
cout<<sum(arr2,0,3)<<endl;
cout<<sum(arr3,0,2)<<endl;
return 0;
}
