// To check if N is present in the fibonacci series or not

#include<iostream>
using namespace std;
int main()
{
    int a, b, n, z;
    cin>>n;
    a = 0;
    b = 1;
    z = a + b;
    if (n == 1 || n == 0)
    {
        cout<<"It is in the Fibonacci Series"<<endl;
        return 0;
    }
    while (z<=n)
    {
        a = b;
        b = z;
        z = a + b;
        if(z == n)
        {
            cout<<"It is in the Fibonacci Series"<<endl;
            return 0;
        }
    }
    cout<<"It is not in the Fibonacci Series"<<endl;
    return 0;
}