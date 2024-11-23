// Reverse a given string using a for loop.

#include <iostream>
using namespace std;
int main()
{
    string name;
    int i;
    string reverse_name = "";
    cout << "Enter The String : ";
    cin >> name;
    cout<<name<<endl;

    for (i = name.length() - 1; i >= 0; i--)
    {
        reverse_name = name[i];
        cout << reverse_name;
    }

}