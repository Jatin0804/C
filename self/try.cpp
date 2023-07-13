#include<iostream>
using namespace std;
#include<stdio.h>

/*void encode(char info[],int n);
main()
{
  char memo[]="Justnow";
  encode(memo,2);
  cout<<memo<<endl;
}


void encode(char info[],int n)
{
  for(int i=0;info[i]!='\0';i++)
  if(i%2==0)
       info[i]=info[i]-n;
  else if(islower(info[i]))
      info[i]=toupper(info[i]);
  else
       info[i]=info[i]+n;
}
*/

main()
{
  int tr[3][3]={{1,5,3},{4,5,6},{7,8,9}};
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      printf("%d\t",tr[i][j]);
    }
    cout<<endl;
  }
}