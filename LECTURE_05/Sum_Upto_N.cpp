#include<iostream>
using namespace std;
int sum_upto_N(int a){
    int sum=0;
    for (int i = 0; i <= a; i++)
    {
        sum=sum+i;
    }
    return sum;
    
}
int main(){
    int n;
    cout <<"Enter the number upto which you want the sum of the numbers. : " << endl;
    cin>> n;
    cout <<sum_upto_N(n);

    return 0;
}