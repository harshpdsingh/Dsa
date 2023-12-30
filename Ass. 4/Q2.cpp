#include<iostream>
using namespace std;

int main(){
    int i,s,ld,n;
    cout << "Armstrong numbers :- " << endl;
    for(i=0;i<=500;i++){
        s=0;
        n=i;
        while(n!=0){
            ld=n%10;
            n=n/10;
            s=s+(ld*ld*ld);
        }
        if (s==i)
        {
            cout << i << endl;
        }
    }
    return 0;
}
