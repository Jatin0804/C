#include<stdio.h>
#include<stdlib.h>

typedef struct Queue
{
  int data;
  struct Queue *next;
}que;

que *rear,*front,*new,*temp;

main()
{
  int choice;
  rear=NULL;
  front=NULL;
  do
  {
    printf("1.Insert \n2.Display \n3.Delete \n4.Exit \n");
    printf("Enter your choice : ");
    scanf("%d",&choice);

    switch(choice)
    {
      case 1:insert();
      break;
      case 2:display();
      break;
      case 3:delete();
      break;
      default:exit(0);
    }
  }while(1);
}

insert()
{
  new=(que*)malloc(sizeof(que));
  if(new==NULL)
  {
    printf("Memory not allocated. \n");
    exit(1);
  }
  printf("Enter Data : ");
  scanf("%d",&new->data);
  new->next=NULL;

  if(rear==NULL)
  {
    rear=new;
    front=new;
  }
  else
  {
    rear->next=new;
    rear=rear->next;
  }
  printf("\n");
}

display()
{
  if(rear==NULL)
  {
    printf("Queue Empty. \n");
  }
  else
  {
    temp=front;
    while(temp!=NULL)
    {
      printf("%d",temp->data);
      temp=temp->next;
    }
  }
  printf("\n");
}

delete()
{
  if(rear==NULL)
  printf("Stack UnderFlow. \n");
  else
  {
    temp=front;
    printf("Node deleted is : %d",front->data);
    if(front==rear)
    {
      front=NULL;
      rear=NULL;
    }
    else
    {
      front=front->next;
      free(temp);
    }
  }
  printf("\n");
}
