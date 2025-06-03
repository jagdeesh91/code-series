#include <iostream> 
#include <cmath>
using namespace std ;

int d(int a,int b){
   int result =  pow(a,b);
   return result;
}
 

int main () {
  int a,b;
   cout << "enter the value of a : " <<endl;
   cin >> a;
    cout << "enter the value of b : " <<endl;
   cin >> b;

   int resultt = d(a,b);
   cout<< resultt;
}