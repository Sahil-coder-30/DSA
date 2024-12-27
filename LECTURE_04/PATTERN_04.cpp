#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter the number of rows you want to print: ";
    cin>>number;
for (int i = 1; i <= number; i++)
{
    int alpha=1;
    for (int j = 1; j <= i; j++)
    {
        cout<<alpha;
        alpha++;
    }
    cout<<"\n";
}

    return 0;
}