#include<stdio.h>

main()
{
  int n,i,j,temp;
  printf("Enter number of elements :");
  scanf("%d",&n);
  int sel[n];

  printf("Enter elemenst of array : ");
  for(i=0;i<n;i++)
  scanf("%d",&sel[i]);

  for(i=0;i<n-1;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(sel[i]>sel[j])
      {
        temp=sel[j];
        sel[j]=sel[i];
        sel[i]=temp;
      }
    }
  }
  printf("Sorted elements are : ");
  for(i=0;i<n;i++)
  printf("%d",sel[i]);

}



/*
#include<stdio.h>

int main()
{
  int n,i,j,temp,selection[10];

  printf("Enter total elements : ");
  scanf("%d",&n);

  printf("Enter Values in array : ");
  for(i=0;i<n;i++)
    scanf("%d",&selection[i]);

  for(i=0;i<n-1;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(selection[i]>selection[j])
      {
        temp=selection[j];
        selection[j]=selection[i];
        selection[i]=temp;
      }
    }
  }

  for(i=0;i<n;i++)
    printf("%d",selection[i]);

  return 0;
}
*/
