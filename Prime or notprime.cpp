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



/*

Alternate approach

==================================================================================


#include<iostream>
using namespace std;
int main() {
    int i = 2;
    int N;
    cin>> N;
    while (i<N){
        if(N%i != 0){
            cout<<"Prime";
            i = i +1;
            return 0;
        }
        else{
            cout<<"Not Prime";
            return 0;
        }
    }
}


==================================================================================

*/