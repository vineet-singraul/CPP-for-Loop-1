#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    int sum = 0;
    for ( i; i <= 10; ++i)
    {
        cout<<i<<endl;
        sum = sum + i;
    }
    cout<<"Sum of All Number :"<<sum;
    
}