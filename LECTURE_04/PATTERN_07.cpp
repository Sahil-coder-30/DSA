#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter the number of rows you want to print: ";
    cin>>number;
    int alpha=1;
for (int i = 0; i <= number; i++)
{
    for (int j = 0; j <= i; j++)
    {
        cout<<" ";
    }

    for (int k = 0; k < number-i; k++)
    {
        cout<<alpha;
    }
    cout<<"\n";
    alpha++;
}
    return 0;
}