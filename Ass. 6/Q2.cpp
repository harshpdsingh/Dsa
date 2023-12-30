#include<iostream>
#include<cmath>
using namespace std; 
double result;
double area(int r){
    result=3.14*pow(r,2);
    return result;
}
double circumference(int r){
    result=2*3.14*r;
    return result;
}
int main(){
    int r; 
    cout<<"Enter radius of circle :";
    cin>>r;
    cout<<"Area = "<<area(r)<<endl;
    cout<<"Circumference = "<<circumference(r);
    return 0;
}