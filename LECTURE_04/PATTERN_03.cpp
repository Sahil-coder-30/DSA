#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the character to print: ";
    cin>>ch;
for (int i = 1; i <= 5; i++)
{
    for (int j = 1; j <= i; j++)
    {
        cout<<ch;
    }
    cout<<"\n";
    ch++;
}

    return 0;
}