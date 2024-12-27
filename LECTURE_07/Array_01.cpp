#include<iostream>
using namespace std;
int main(){
int arr[6]={120,86,52,68,71};

int min = arr[0];
for (int i = 0; i < 5; i++)
{
    if (arr[i] < min)
    {
        min = arr[i];
    }
    else
    {
        continue;
    }
}
cout <<" Tme minimum value in the array is : "<< min;

int max = arr[0];
for (int  j = 0; j <5; j++)
{
if ( arr[j] > max )
{
    max = arr[j];
}
}

cout <<"\n The maximum element in the array is : "<< max;

    return 0;
}