#include<iostream>
using namespace std;
int main()
{
    int a, b, n, i, z;
    cin>>n;
    a = 0;
    b = 1;
    z = a + b;
    i = 3;
    if (n == 1 || n == 0)
    {
        cout<<"It is in the Fibonacci Series"<<endl;
        return 0;
    }
    while (i<=n)
    {
        a = b;
        b = z;
        z = a + b;
        i = i + 1;
        if(z == n)
        {
            cout<<"It is in the Fibonacci Series"<<endl;
            return 0;
        }
    }
    cout<<"It is not in the Fibonacci Series"<<endl;
    return 0;
}