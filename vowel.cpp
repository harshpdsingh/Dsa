#include<iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter a character in Small case:" << endl;
    cin >> ch;
    switch (ch)
    {
    case 'a':cout << "Vowel";
        break;
    case 'e':cout << "vowel";
        break;
    case 'i':cout << "Vowel";
        break;    
    case 'o':cout << "Vowel";
        break;
    case 'u':cout << "Vowel";
        break;
    default:cout << "Consonant";
        break;
    }
    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        cout << "Vowels";
    }
    else
    {
        cout << "Consonants";
    }
    return 0;
}

