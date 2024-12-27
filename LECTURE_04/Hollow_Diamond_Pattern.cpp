#include <iostream>
using namespace std;
int main()
{
    int rows = 4;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = rows - i; j > 0; j--)
        {
            cout <<" ";
        }
        // for (int k = 0; k < i; k++)
        // {
        //     if (k == 0)
        //     {
        //         cout <<"*";
        //     }
        //     else{
        //         break;
        //     }
        // }

        cout<<"*";

        for (int m = 1; m < i; m++)
        {
            cout <<" ";
        }
        for (int b = 2; b < i; b++)
        {
            cout <<" ";
        }

        // for (int c = 2; c <= i; c++)
        // {
        //     if (c==i)
        //     {
        //         cout <<"*";
        //     }
        //     else{
        //      continue;
        //     }
        // }
        if(i!=1){
            cout<<"*";
        }
        cout << "\n";
    }
    for (int i = 1; i <= rows - 1; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout <<" ";
        }

        // for (int k = 0; k < i; k++)
        // {
        //     if (k == 0)
        //     {
        //         cout <<"*";
        //     }
        // }
        cout<<"*";

        for (int b = rows-(i+1); b>0; b--)
        {    
        cout <<" ";
        }

        for (int c = 0; c < i; c++)
        {
            if(c==0 && i<2){
            cout<<" ";

            }
        }
        
        // for (int d = 0; d < i; d++)
        // {
        //     if(i<3 && d==0)
        //     {
        //         cout<<"*";
        //     }
        // }
        if(i!=rows-1){
        cout<<"*";
        }
        cout << "\n";
    }
     cout<<endl;
    return 0;
}