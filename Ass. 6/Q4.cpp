#include<iostream>
using namespace std;

void print(int a, int b){
    int i,c=0;
    for(i=a;i<=b;i++){
        if(i%2!=0){
            cout << i << " ";
            c++;
        }
    }
    if(c==0){
        cout << "No odd numbers found in between.";
    }
    return;
}
int main(){
    int a,b;
    cout<<"Enter first number : ";
    cin>>a;
    cout <<"Enter a second number : ";
    cin>>b;
    print(a,b);
    return 0;
}