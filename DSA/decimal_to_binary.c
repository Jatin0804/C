#include<stdio.h>

main()
{
  int n,r,i,stack[10],top=-1;

  printf("Enter a number : ");
  scanf("%d",&n);

  while(n>0)
  {
    r=n%2;
    top++;
    stack[top]=r;
    n/=2;
  }

  printf("\nNumber in Binary is : ");
  for(i=top;i>=0;i--)
  {
    printf("%d",stack[i]);
  }
}
