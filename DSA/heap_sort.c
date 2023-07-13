#include<stdio.h>

int main()
{
  int i,j,size,temp,k;
  printf("Enter total number of elements : ");
  scanf("%d",&size);
  int arr[size];

  printf("Enter elements : ");
  for(i=1;i<=size;i++)
  {
    scanf("%d",&arr[i]);
    manage(arr,i);
  }
  j=size;
  for(i=1;i<=j;i++)
  {
    temp=arr[1];
    arr[1]=arr[size];
    arr[size]=temp;
    size--;
    heapsort(arr,1,size);
  }
  printf("Heap sorted elements : ");
  size=j;
  for(i=1;i<=size;i++)
  printf("%d",arr[i]);
}

void manage(int arr[],int i) //to make heap tree
{
  int temp;
  temp=arr[i];
  while((i>1) && (arr[i/2]<temp))
  {
    arr[i]=arr[i/2];
    i=i/2;
  }
  arr[i]=temp;
}

void heapsort(int arr[],int i,int size)
{
  int temp,j;
  temp=arr[i];
  j=i*2;
  while(j<=size)
  {
    if((j<size) && (arr[j]<arr[j+1]))
    j++;

    if(arr[j]<arr[j/2])
    break;
    arr[j/2]=arr[j];
    arr[j]=temp;
    j=j*2;
  }
}
