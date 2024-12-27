#include<iostream>
using namespace std;
int main(){
    int number;
    int alpha;
    cout<<"Enter the number of rows you want to print: ";
    cin>>number;
// for (int i = 1; i <= number; i++)
// {
//     alpha=i;
//     for (int j = 1; j <= i; j++)
//     {
//         cout<<alpha;
//         alpha--;
//     }
//     cout<<"\n";
// }
for (int i = 0; i < number; i++)
{
    for (int j = i+1; j>0; j--)
    {
        cout<<j;
    }
    cout<<"\n";
}

    return 0;
}