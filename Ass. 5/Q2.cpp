#include<iostream>
using namespace std;

int main(){
    string br = "";
    int n,r,c=0;
    cout << "Enter a natural no.:";
    cin >> n;
    while(n!=0){
        r=n%2;
        br=to_string(r)+br;
        if(r==0){
            c++;
        }
        n=n/2;
    }
    cout<<"Binary Representative = "<<br<<endl;
    cout<<"No. of 0's = "<<c;
    return 0;
}