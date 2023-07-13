#include<stdio.h>
#define max 10
int array[10];

void merge(int low,int mid,int high)
{
  int temp[max];
  int i=low,j=mid+1,k=high;
  while((i<=mid) && (j<=high))
  {
    if(array[i] <= array[j])
    temp[k++] = array[i++];
    else
    temp[k++] = array[j++];
  }
  while(i<=mid)
  temp[k++]=array[i++];

  while(j<=high)
  temp[k++]=array[j++];

  for(i=low;i<=high;i++)
  array[i]=temp[i];

}

void merge_sort(int low,int high)
{
  int mid;
  if(low < high)
  {
    mid=(low+high)/2;
    merge_sort(low,mid);
    merge_sort(mid+1,high);
    merge(low,mid,high);
  }
}

int main()
{
  int n,i;
  printf("Number of elements : ");
  scanf("%d",&n);

  printf("Enter elements : ");
  for(i=0;i<n;i++)
  scanf("%d",&array[i]);

  merge_sort(0,n-1);

  printf("Sorted list is : ");
  for(i=0;i<n;i++)
  printf("%d",array[i]);

  return 0;
}
