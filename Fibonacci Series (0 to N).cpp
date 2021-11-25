// To Display fibonacci series till N

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
    if (n == 1)
    {
        cout<<a<<endl;
        return 0;
    }
    cout<<a<<endl<<b<<endl;
    while (i<=n)
    {
        cout<<z<<endl;
        a = b;
        b = z;
        z = a + b;
        i = i + 1;
    }
    return 0;
}