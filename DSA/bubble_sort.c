#include<stdio.h>

int main()
{
  int n,i,j,temp;
  printf("Enter total number of elements : ");
  scanf("%d",&n);
  int bubble[n];

  printf("Enter elements of array : ");
  for(i=0;i<n;i++)
  scanf("%d",&bubble[i]);

  for(i=0;i<n-1;i++)
  {
    for(j=0;j<=n-i-1;j++)
    {
      if(bubble[j]>bubble[j+1])
      {
        temp=bubble[j+1];
        bubble[j+1]=bubble[j];
        bubble[j]=temp;
      }
    }
  }

  printf("Sorted elements are : ");
  for(i=0;i<n;i++)
  printf("%d",bubble[i]);

  return 0;
}

/*#include<stdio.h>

main()
{
  int n,i,j,temp,bubble[10];

  printf("Enter total elements : ");
  scanf("%d",&n);

  printf("Enter Values in array : ");
  for(i=0;i<n;i++)
    scanf("%d",&bubble[i]);

  for(i=0;i<n-1;i++)
  {
    for(j=0;j<=n-i-1;j++)
    {
      if(bubble[j]>bubble[j+1])
      {
        temp=bubble[j+1];
        bubble[j+1]=bubble[j];
        bubble[j]=temp;
      }
    }
  }

  for(i=0;i<n;i++)
    printf("%d",bubble[i]);
}
*/
