#include<iostream>
using namespace std;

void checkage(int age){
    if(age>=18){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return;
}
int main(){
    int age;
    cout << "Enter age of Person : ";
    cin>>age;
    checkage(age);
    return 0;
}