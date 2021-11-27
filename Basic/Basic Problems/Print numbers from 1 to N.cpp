//To print all the numbers from 1 to N

#include<iostream>
using namespace std;
int main()
{
    int N, I;
    cin>>N;
    I = 1;
    while (I<=N)
    {
        cout << I << endl;
        I += 1;
    }

    return 0;
}