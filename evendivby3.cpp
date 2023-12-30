#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a no.:";
    cin>>n;
    if((n%2)==0&&(n%3)==0)
{
    cout<<"Nmmber = "<<n<<endl;
}
else
{
    cout<<"Number in either not even or div by 3 or both.";
}
return 0;
}