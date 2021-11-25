#include<iostream>
using namespace std;
int main()
{
    int n, i, largest, input1, input2, smallest;
    cin>>n>>input1;
    largest = input1;
    smallest = input1;
    i = 2;
    while(i<=n)
    {
        cin>>input2;
        if (input2>=largest)
        {
            largest = input2;
        }
        if (input2 <= smallest)
        {
            smallest = input2;
        }
        i++;
    }
    cout<<"largest is "<<largest<<endl;
    cout<<"smallest is "<<smallest;
    return 0;
}