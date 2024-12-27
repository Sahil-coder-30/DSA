#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter the number of rows of stars you want. : ";
    cin>>number;
    for (int i = 1; i <=number; i++)
    {
        for (int j = 0; j<4; j++)
        {
            cout<<"*";
        }
        cout<<"\n";
        
    }
    
    return 0;

}