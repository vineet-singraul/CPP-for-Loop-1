       #include <iostream>
using namespace std;
int main()
{
    int fec_value = 0;
    int i;
    int new_val = 1;
    cout << "Enter Number For Find Fectoeial : ";
    cin >> fec_value;

    for (i = 1; i < fec_value; fec_value--)
    {
        new_val = new_val * fec_value;
    }
    cout << "The Fectorial Is :" << new_val << endl;
}