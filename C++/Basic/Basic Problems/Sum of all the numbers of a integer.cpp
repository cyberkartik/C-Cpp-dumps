// To find the sum of all the numbers of a integer

#include<iostream>
using namespace std;
int main()
{
    int n, sum;
    cin>>n;
    sum = 0;
    while(n > 0)
    {
        sum = sum + n % 10;
        n = n/10;
    }
    cout<<sum;
    return 0;
}