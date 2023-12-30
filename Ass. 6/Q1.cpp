#include<iostream>
#include <cmath>
using namespace std;

double square(int n){
    double r=pow(n,2);
    return r;
}
int main(){
    int i,result;
    for(i=1;i<=5;i++){
        result=square(i);
        cout << "Square of " << i << " = " << result << endl;
    }
    return 0;
}