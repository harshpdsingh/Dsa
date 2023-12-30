#include<iostream>
using namespace std;

int main(){
    int n,m,i,j;
    cin>>n;
    cin>>m;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if(i%2==0)
            {
                if(j%2==0){
                    cout<<"1";
                }
                else{
                    cout<<"2";
                }
            }
            else{
                if(j%2==0){
                    cout<<"2";
                }
                else{
                    cout<<"1";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}

//Another formula --> (i+j)(even) print 1
//--> (i+j)(odd) print 2