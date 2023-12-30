#include<iostream>
using namespace std;

int main(){
    int fn,sn;
    cout<<"Enter two nos.:";
    cin>>fn;
    cin>>sn;
    cout<<"Sum of two nos. = "<<(fn+sn)<<endl;
    cout<<"Difference of two nos. = "<<(fn-sn)<<endl;
    cout<<"Product of two nos. = "<<(fn*sn)<<endl;
    cout<<"Quotient of two nos. = "<<(fn/sn)<<endl;
    cout<<"Remainder of two nos. = "<<(fn%sn)<<endl;
    return 0;
}