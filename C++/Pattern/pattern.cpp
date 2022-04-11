// Pattern Triangle
// (sample for n=5)
//     1
//    232
//   34543
//  4567654
// 567898765



#include<iostream>
using namespace std;
int main()
{
    int row, count, count1, count2, n, print, print1;
    cin>>n ;
    row = 1;

    while(row<=n)
    {
        count = 1;
        while(count <= (n-row) )
        {
            cout<<" ";
            count = count + 1;
        }
        count1 = 1;
        print = row;

        while(count1 <= row )
        {
            cout << print;
            count1 = count1 + 1;
            print = print +1;
        }
        count2 = 1;
        print1 = (2*row)-2;

        while(count2 <= (row-1) )
        {
            cout << print1;
            count2 = count2 + 1;
            print1 = print1 - 1;
        }
        row = row +1;
        cout << endl;
    }
    return 0;
}