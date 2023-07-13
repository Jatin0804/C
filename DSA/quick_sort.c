#include<stdio.h>

int main()
{
  int n,i,value[10];

  printf("Enter total elements : ");
  scanf("%d",&n);

  printf("Enter Values in array : ");
  for(i=0;i<n;i++)
    scanf("%d",&value[i]);

  quicksort(value,0,n-1);

  printf("Sorted Array : ");
  for(i=0;i<n;i++)
    printf("%d",value[i]);

  return 0;
}

void quicksort(int array[],int first,int last)
{
  int low,high,pivot,temp;

  low=first;
  high=last;
  pivot=array[(low+high)/2];

  do
  {
    while(array[low]<pivot)
      low++;
    while(array[high]>pivot)
      high--;

    if(low<=high)
    {
      temp=array[low];
      array[low]=array[high];
      array[high]=temp;
      low++;
      high--;
    }
  }while(low<=high);

  if(first<high)
    quicksort(array,first,high);

  if(low<last)
    quicksort(array,low,last);
}
