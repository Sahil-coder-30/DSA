#include<iostream>
using namespace std;
int main(){
int arr[6]={120,86,52,68,71};

int min = arr[0];
int alpha=0;
for (int i = 0; i < 5; i++)
{
    if (arr[i] < min)
    {
        min = arr[i];
        alpha=i;
    }
    else
    {
        continue;
    }
}
cout <<" Tme minimum value in the array is : "<< min;

int max = arr[0];
int beta=0;
for (int  j = 0; j <5; j++)
{
if ( arr[j] > max )
{
    max = arr[j];
    beta=j;

}
}
cout <<"\n The maximum element in the array is : "<< max;
cout <<"\nThe maximum element is present at the index : "<< alpha;
cout<<"\nThe minimum element is present at the index : "<< beta;

    return 0;
}