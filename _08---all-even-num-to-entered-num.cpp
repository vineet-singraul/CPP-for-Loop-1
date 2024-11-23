// Print all even numbers from 1 to N using a for loop.

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter Number :";
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
        }
    }
}