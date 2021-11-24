//For given n find the sum of all the even numbers from 1 to n

#include<iostream>
using namespace std;
int main()
{
    int n,i,sum;
    cin>>n;
    i = 0;
    sum = 0;
    while (i <= n)
    {
        sum = sum + i;
        i = i+2;
    }
    cout<< "Sum of even numbers is "<<sum<<endl;
    return 0;
}