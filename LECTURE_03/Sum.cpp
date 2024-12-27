#include <iostream>
using namespace std;
int main()
{
    int count, sum = 0;
    cout << "Enter the number upto which you want the sum. : ";
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        sum = sum + i;
    }
    cout << "The sum of first " << count << " number is : " << sum;
    return 0;
}