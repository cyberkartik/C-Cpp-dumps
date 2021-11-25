// To find the simple interest

#include<iostream>
using namespace std;
int main()
{
    float P,R,T,SI;
    cin >> P >> R >> T;
    SI = (P*R*T)/100.0;
    cout<< "Simple Interest is "<<SI<<endl;


    return 0;
}