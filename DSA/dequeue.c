#include<stdio.h>
#define max 10

void addFront(int *, int, int *, int *);
void addRear(int *, int, int *, int *);
int delFront(int *, int *, int *);
int delRear(int *, int *, int *);
void display(int *);
int count(int *);

int main(void)
{
  int arr[max];
  int front,rear,i,n;

  front=rear=-1;
  for(i=0;i<max;i++)
  {
    arr[i]=0;
  }

  addRear(arr,5,&front,&rear);
  addFront(arr, 12, &front, &rear);
  addRear(arr, 11, &front, &rear);
  addFront(arr, 5, &front, &rear);
  addRear(arr, 6, &front, &rear);
  addFront(arr, 8, &front, &rear);

  printf("\nElements  in a dequeue :");
  display(arr);

  i=delFront(arr,&front,&rear);
  printf("\n\nRemoved item : %d at front.\n",i);

  printf("\nElements in a dequeue after deletion : ");
  display(arr);

  addRear(arr, 16, &front, &rear);
  addRear(arr, 7, &front, &rear);
  addFront(arr,10,&front,&rear);

  printf("\n\nElements in a deque after addition: \n");
  printf("Add 16 at rear. \nAdd 7 at rear. \nAdd 10 at front.");
  display(arr);

  i = delRear(arr, &front, &rear);
  printf("\n\nRemoved item: %d at rear.\n", i);

  printf("\nElements in a deque after deletion: ");
  display(arr);

  n = count(arr);
  printf("\n\nTotal number of elements in deque: %d\n", n);
}

void addFront(int *arr,int item,int *pfront,int* prear)
{
  int i,k,c;

  if(*pfront==0 && *prear==max-1)
  {
    printf("\nDequeue is full.\n");
    return ;
  }

  if(*pfront==-1)
  {
    *pfront=*prear=0;
    arr[*pfront]=item;
    return;
  }

  if(*prear != max-1)
  {
    c=count(arr);
    k=*prear+1;
    for(i=1;i<=c;i++)
    {
      arr[k]=arr[k-1];
      k--;
    }
    arr[k]=item;
    *pfront=k;
    (*prear)++;
  }
  else
  {
    (*pfront)--;
    arr[*pfront]=item;
  }
}

void addRear(int *arr, int item, int *pfront, int *prear)
{
  int i, k;

  if (*pfront == 0 && *prear == max - 1)
  {
    printf("\nDequeue is full.\n");
    return;
  }

  if (*pfront == -1)
  {
    *prear = *pfront = 0;
    arr[*prear] = item;
    return;
  }

  if (*prear == max - 1)
  {
    k = *pfront - 1;
    for (i = *pfront - 1; i < *prear; i++)
    {
      k = i;
      if (k == max - 1)
        arr[k] = 0;
      else
        arr[k] = arr[i + 1];
    }
    (*prear)--;
    (*pfront)--;
  }
  (*prear)++;
  arr[*prear] = item;
}

int delFront(int *arr,int *pfront,int* prear)
{
  int item;

  if(*pfront==-1)
  {
    printf("\nDequeue is Empty.\n");
    return 0;
  }

  item=arr[*pfront];
  arr[*pfront]=0;

  if(*pfront==*prear)
    *pfront=*prear=-1;
  else
    (*pfront)++;

  return item;
}

int delRear(int *arr, int *pfront, int *prear)
{
  int item;

  if (*pfront == -1)
  {
    printf("\nDeque is empty.\n");
    return 0;
  }

  item = arr[*prear];
  arr[*prear] = 0;
  (*prear)--;

  if (*prear == -1)
    *pfront = -1;

  return item;
}

void display(int *arr)
{
  int i;

  printf("\nFront : ");
  for(i=0;i<max;i++)
    printf(" %d ",arr[i]);
  printf(" : rear.");
}

int count(int *arr)
{
  int c=0,i;

  for(i=0;i<max;i++)
  {
    if(arr[i] != 0)
    c++;
  }

  return c;
}
