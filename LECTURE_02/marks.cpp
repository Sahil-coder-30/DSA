#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter your marks obtained. :  ";
    cin>>marks;
    if(marks>=90)
    {
        cout<<"Very Good\n";
    }
    else if(marks<90 && marks>=80)
    {
        cout<<"Good\n";
    }
    else if(marks<80 && marks>=40)
    {
        cout<<"Average\n";
    }
    else{
        cout<<"Fail.\n";
    }
    return 0;
}