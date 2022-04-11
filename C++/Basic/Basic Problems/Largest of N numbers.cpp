//To print the largest number for given numbers

#include<iostream>
using namespace std;
int main()
{
    int n, i, largest, number;
    cin>>n;
    largest = 0;
    i = 1;
    while(i<=n)
    {
        cin>>number;
        if (number>=largest)
        {
            largest =number;
        }
        i++;
    }
    cout<<"largest is "<<largest;
    return 0;
}





#include<iostream>
using namespace std;
int main()
{
    int n, i, largest, input1, input2;
    cin>>n>>input1;
    largest = input1;
    i = 2;
    while(i<=n)
    {
        cin>>input2;
        if (input2>=largest)
        {
            largest = input2;
        }
        i++;
    }
    cout<<"largest is "<<largest;
    return 0;
}
