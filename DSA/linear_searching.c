#include<stdio.h>

int main()
{
  int n,i,j,tag=0;
  printf("Enter total number of element : ");
  scanf("%d",&n);
  int linear[n];

  printf("Enter Array elements : ");
  for(i=0;i<n;i++)
  scanf("%d",&linear[i]);

  printf("Enter element to be searched : ");
  scanf("%d",&j);

  for(i=0;i<n;i++)
  {
    if(linear[i]==j)
    {
      tag=1;
      break;
    }
    else
    tag=0;
  }
  if(tag==1)
  printf("Element found at %d",i+1);
  else
  printf("Element not found.");

  return 0;
}
