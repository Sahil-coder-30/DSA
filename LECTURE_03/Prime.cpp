#include <iostream>
using namespace std;
int main()
{
    int number, alpha;
    cout << "Enter the number you want to check ";
    cin >> number;
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            alpha = 1;
            break;
        }
    }
        if (alpha == 1)
        {
            cout << "It is not prime.";
        }
        else
        {
            cout << "It is prime";
        }

        return 0;
    }