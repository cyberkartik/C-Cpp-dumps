// Pattern Triangle
// (sample for n=5)
//     1
//    123
//   12345
//  1234567
// 123456789



#include<iostream>
using namespace std;
int main()
{
  int n, row, cs, in;
  cin>>n;
  row = 1;

  while (row<=n)
  {
      //spaces
      cs = 1;
      while(cs<=(n-row))
      {
          cout<<' ';
          cs = cs+1;
      }

      //no.
      in = 1;
      while(in <= (2*row)-1)
      {
          cout<<in;
          in = in + 1 ;
      }
      cout<<endl;
      row = row +1;
  }
  return 0;
}