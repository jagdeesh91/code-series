#include <iostream> 
/*#include<algorithm>*/
using namespace std;

int d (int n){
  if(n <=9 and n>=0){
return n;
  }
  return d (n/10) + (n%10);
}
 

int main () {
  int result = d(124);
  cout << result;
   
}