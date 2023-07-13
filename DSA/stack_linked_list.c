#include<stdio.h>
#include<stdlib.h>

typedef struct stack
{
  int data;
  struct stack *next;
}s;

s *new,*top;

int main(void)
{
  int ch;
  top=NULL;
  printf("Stack using linked list.\n");
  do {
    printf("\nOptions available : ");
    printf("\n1.Push. \n2.Pop. \n3.Display. \n4.Exit ");
    printf("\nEnter Your choice : ");
    scanf("%d",&ch);

    switch(ch)
    {
      case 1:push();
      break;
      case 2:pop();
      break;
      case 3:display();
      break;
      default: exit(0);
    }
  } while(1);
}

push()
{
  new=(s*)malloc(sizeof(s));

  if(new==NULL)
  {
    printf("Memory not Allocated.");
    exit(1);
  }
  printf("\nEnter data : ");
  scanf("%d",&new->data);

  new->next=top;
  top=new;
}

display()
{
  s *temp;
  temp=top;

  if (top==NULL)
   {
     printf("Stack EMPTY.");
   }
   else
   {
     printf("\nData in stack is :");
     while(temp!=NULL)
     {
       printf("%d",temp->data);
       temp=temp->next;
     }
   }
   printf("\n");
}

pop()
{
  s *temp;
  temp=top;

  if(top==NULL)
  printf("STACK UNDERFLOW. ");
  else
  {
    printf("\nElement popped is : %d",top->data);
    top=top->next;
    free(temp);
  }
  printf("\n");
}
