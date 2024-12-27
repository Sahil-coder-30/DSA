#include<iostream>
using namespace std;
int main(){
    int row=3;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 0; j < i; j++)
        {
         cout <<"*";   
        }

        // spaces

        for(int k =row-i; k>=0; k--)
        {
            cout <<" ";
        }
        for (int a = row-(i+1); a>=0; a--)
        {
            cout <<" ";
        }
        for( int b = 0; b<i ; b++){
        cout <<"*";
        }
        
        cout <<"\n";
    }
    for (int j = 0; j < row-1; j++)
    {
    for (int i = 0; i < (row*2+1); i++)
    {
        cout <<"*";
    }
    cout <<"\n";
    }

    for (int i = 1; i <= row; i++)
    {
        for(int k =row-i; k>=0; k--)
        {
            cout <<"*";
        }
        for (int j = 0; j < i; j++)
        {
         cout <<" ";   
        }
         for (int b = 1; b<i; b++){
           cout <<" ";
         }
         for(int a =row-i; a>=0; a--)
        {
            cout <<"*";
        }
        cout <<"\n";
        }
    
    
    
    cout <<endl;
    return 0;
}
