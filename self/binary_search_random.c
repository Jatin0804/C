#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void merge(int array[],int low,int mid,int high)
{
  int temp[high];
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

void merge_sort(int array[],int low,int high)
{
  int mid;
  if(low < high)
  {
    mid=(low+high)/2;
    merge_sort(array,low,mid);
    merge_sort(array,mid+1,high);
    merge(array,low,mid,high);
  }
}

int bin_search(int array[],int first,int last,int j)
{
    int mid;
    while(first<=last)
    {

        mid=(first+last)/2;
        if(array[mid]==j)
        {
            return mid;
        }
        else if(j > array[mid])
           first=mid+1;
        else if(j<array[mid])
           last=mid-1;
    }
    return -1;
}

int main(void)
{
    int num,j;
    printf("Enter maximum numbers of elements in array : ");
    scanf("%d",&num);
    int array[num],first,last;
    printf("Enter elements of array: ");
    for(int i=0;i<num;i++)
    {
        scanf("%d",&array[i]);
    }

    for(int i=0;i<num;i++)
        printf("Entered array is : ",array[i]);
    first=0;
    last=num-1;

    merge_sort(array,first,last);

    printf("Enter element to be searched : ");
    scanf("%d",&j);

    int result = bin_search(array,first,last,j);

    if(result==-1)
        printf("Element not found !!!!");
    else
        printf("Element found at index %d",result);

    return 0;
}
