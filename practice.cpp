#include <iostream>
using namespace std;
int print(int p){
   p*=2;
   return p;}

int main() {
    int p=8,r;
  p = print(p);
    cout <<p ;
    return 0;
    
}
