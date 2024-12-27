#include<iostream>
using namespace std;
int main(){
    int count,sum=0;
    cout<<"Enter the number till you want the of odd numbers.";
    cin>>count;
    for (int i = 1; i <= count; i++)
    {
        if(i%2==0)
        {
            sum=sum+i;
        }
    }
    cout<<"The sum of first "<<count<<" even numbers is : "<<sum;
    return 0;
}