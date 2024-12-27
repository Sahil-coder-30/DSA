#include <iostream>
using namespace std;
int main()
{
    int rows = 4;
    cout<<"Enter the number of rows. ";
    cin>>rows;
    for (int i = 1; i <= rows; i++)
    {
        //Spaces.
        for (int j = 0; j < rows - i; j++)
        {
            cout <<" ";
        }
        //Numbers set 2.
        for (int k = 0; k < i; k++)
        {
            cout<<k+1;
        }
        // Numbers set 2
        for( int n=1 ; n < i ; n++)
        {
            if(i-n>0)
            {
            cout<<i-n;
            }
        }
        cout<<"\n";
    }

    return 0;
}
//output
//    1
//   121
//  12321
// 1234321