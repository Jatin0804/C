#include<stdio.h>

int main()
{
  int n,i,j,temp;
  printf("Enter total number of elements : ");
  scanf("%d",&n);
  int list[n];

  printf("Enter elements : ");
  for(i=0;i<n;i++)
  scanf("%d",&list[i]);

  for(i=1;i<n;i++)
  {
    temp=list[i];
    j=i-1;

    while(j>=0 && temp<list[j])
    {
      list[j+1]=list[j];
      j--;
    }
    list[j+1]=temp;
  }

  printf("Sorted array is : ");
  for(i=0;i<n;i++)
  printf("%d",list[i]);

  return 0 ;

}

/*
#include<stdio.h>

int main()
{
  int n,i,j,temp,list[10];

  printf("Enter total elements : ");
  scanf("%d",&n);

  printf("Enter Values in array : ");
  for(i=0;i<n;i++)
    scanf("%d",&list[i]);

  //list[0]=0;

  for(i=1;i<n;i++)
  {
    temp=list[i];
    j=i-1;

    while(j>=0 && temp<list[j])
    {
      list[j+1]=list[j];
      j--;
    }
    list[j+1]=temp;
  }

  for(i=0;i<n;i++)
    printf("%d",list[i]);

  return 0;
}
*/
