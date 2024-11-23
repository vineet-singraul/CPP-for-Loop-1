// Print all prime numbers up to a given number N using a for loop.
// ✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️
// ✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️✂️

#include <iostream>
using namespace std;
int main()
{
    int a, b = 0;
    int i = 1;
    cout << "Enter the number=";
    cin >> a;
    for (i; i < a; i++)
    {
        if (a % i == 0)
        {
            b++;
            cout<<i<< " "<<" ";
            cout<<endl;
        }
    }
    if (b == 2)
    {
        cout << " The entered number is a prime number.\n";
    }
    else
    {
        cout << " The number you entered is not a prime number. \n";
    }
}
