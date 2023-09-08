#include <iostream>
using namespace std;

double division(int a, int b) {
   if( b == 0 ) {
      throw "Division by zero condition!";
   }
   return (a/b);
}

int main () {
   int x,y;
   cout<<"Enter dividend";
   cin>>x;
   cout<<"Enter divisor";
   cin>>y;
   
   double z = 0;
 
   try {
      z = division(x, y);
      cout << z << endl;
   } catch (const char* msg) {
     cerr << msg << endl;
   }

   return 0;
}
//Because we are raising an
