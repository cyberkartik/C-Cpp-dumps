// To check if the number is prime or not prime

#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cin>> n;
    i = 2;
    while(i<n)
    {
        if (n%i==0)
        {
            cout<<"not prime";
            return 0;
        }
        i = i + 1;
    }
    cout<<"Prime";
    return 0;
}