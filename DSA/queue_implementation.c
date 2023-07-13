#include<stdio.h>
#define size 5

void enQueue(int);
void deQueue();
void display();

int item[size],front=-1,rear=-1;

int main(void)
{
  //Not possible in empty queue
  deQueue();

  enQueue(1);
  enQueue(2);
  enQueue(3);
  enQueue(4);
  enQueue(5);

  //Can't be added as queue is Full
  enQueue(6);

  display();//5 elements

  deQueue();//remove 1st element

  display();//4 elements left
}

void enQueue(int value)
{
  if(rear==size-1)
  printf("\nQueue is Full !!");
  else
  {
    if (front==-1)
    front=0;
    rear++;
    item[rear]=value;
    printf("\nInserted element : %d",value);
  }
}

void deQueue()
{
  if (front==-1)
  printf("\nQueue is Empty !!");
  else
  {
    printf("\nDeleted : %d",item[front]);
    front++;
    if(front>rear)
    front=rear-1;
  }
}

void display()
{
  if(rear==-1)
  printf("\nQueue is Empty !!");
  else
  {
    printf("\nQueue elements are :");
    for(int i=front;i<=rear;i++)
    printf("%d",item[i]);
  }
  printf("\n");
}
