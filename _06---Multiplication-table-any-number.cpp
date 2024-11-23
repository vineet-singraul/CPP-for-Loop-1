// Print the multiplication table of a given number using a for loop.
#include <iostream>
using namespace std;
int main()
{
    int table_num;
    int i = 1;
    cout<<"Enter Number For Making Table : ";
    cin>>table_num;

     for(i = 1 ; i <= 10 ; i++)
     {
        cout<<table_num<<" * "<< i << " = " << table_num*i <<endl;
     }
}
