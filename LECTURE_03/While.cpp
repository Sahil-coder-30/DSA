#include<iostream>
using namespace std;
int main(){
    int count,i=1;
    cout<<"Enter the number till you want to print the counting.\n ";
    cin>>count;
    while(i<=count)
    {
        cout<<i;
        cout<<"\n";
        i++;
    }
    return 0;
}