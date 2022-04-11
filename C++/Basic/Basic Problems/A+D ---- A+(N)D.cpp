//To take input A and D and print N numbers in the form, A+D, A+2D, A+3D.... A+ND

#include<iostream>
using namespace std;
int main()
{
    int N, I, A, D;
    cin>>N>>A>>D;
    I = 1;
    while (I<=N)
    {
        cout << (A + I*D)<< endl;
        I += 1;
    }

    return 0;
}