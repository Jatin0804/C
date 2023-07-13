#include<stdio.h>
#define max 3

int rear=-1,front=-1,queue[max];

main()
{
  int choice;
  do
  {
    printf("1.Insert \n2.Delete \n3.Display \n4.Exit \n");
    printf("Enter your choice : ");
    scanf("%d",&choice);

    switch(choice)
    {
      case 1:insert();
      break;
      case 2:delete();
      break;
      case 3:display();
      break;
      default:exit(0);
    }
  }while(1);
}

insert()
{
  int element;
  if(rear<max-1)
  {
    printf("Enter Data : ");
    scanf("%d",&element);
    rear++;
    queue[rear]=element;
    if(front==-1)
    front=0;
  }
  else
  printf("Queue Overflow.\n");

  printf("\n");
}

display()
{
  int i;
  if(rear==-1)
  printf("Queue Empty.\n");
  else
  {
    for(i=front;i<=rear;i++)
    printf("%d",queue[i]);
  }
  printf("\n");
}

delete()
{
  if(rear==-1)
  printf("Queue Underflow.\n");
  else
  {
    printf("Enter deleted is %d",queue[front]);
    if(front==rear)
    {
      front=-1;
      rear=-1;
    }
    else
    front++;
  }
  printf("\n");
}
