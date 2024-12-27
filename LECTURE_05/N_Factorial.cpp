#include<iostream>
using namespace std;
int factorial(int a){
    int alpha=1;
    for (int i = 1; i <= a; i++)
    {
        alpha=alpha*i;
    }
    return alpha;
}
int main(){
    int n;
    cout <<"Enter the number of which factorial you want to create : "<<endl;
    cin >>n;

cout <<factorial(n);
    return 0;
}