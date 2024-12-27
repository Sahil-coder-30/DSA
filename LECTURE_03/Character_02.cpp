#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the character. \n";
    cin >> ch;
    if(ch>65 && ch<90)
cout<<"It is a upper case alphabet";
else
cout<<"It is a lower case alphabet";
    return 0;
}