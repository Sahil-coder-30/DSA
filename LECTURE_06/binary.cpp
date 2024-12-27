#include<iostream>
#include<cmath>
using namespace std;
void decimal_to_binary(int a)
{
    int arr[50];
    int alpha = 0;
    for (int i = 0; a != 0; i++)
    {
        arr[i] = a % 2;
        a = a / 2;
        alpha++;
    }
    for (int i = alpha-1; i>=0 ; i--)
    {
        cout<<arr[i];
    }
}
int binary_to_decimal(int a){
    int decimal=0,remainder;

    for (int i = 0; a != 0; i++)
    {
        remainder = a%10;
        decimal=decimal+remainder*pow(2,i);
        a=a/10;
    }
    return decimal;
}
int main()
{
int alpha;
int binary;
int Decimal;
    cout<<"What type of conversion you want to perform. :" << "\n";
cout<<"1. Binary to decimal. " <<"\n";
cout<<"2. Decimal to binary. " <<"\n";
cin>>alpha;

if (alpha == 1)
{
    cout<<"Enter the binary number you want to convert. :";
    cin>>binary;
    cout<<binary_to_decimal(binary);
}
else if (alpha == 2)
{
    cout << "Enter the decimal number.";
    cin >> Decimal;
    decimal_to_binary(Decimal);
}
else
cout<<"Wrong entry";
    return 0;
}