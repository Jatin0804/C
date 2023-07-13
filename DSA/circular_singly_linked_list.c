#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct circular
{
  int data;
  struct circular *next;
}cll;

cll *start,*new,*link;

int main(void)
{
  int ch;
  start=NULL;

  printf("Program for Circular  Singly linked list.\n");

  do{
    printf("1.Create.\n");
    printf("2.Display.\n");
    printf("3.Exit.\n");

    printf("Enter Your choice : ");
    scanf("%d",&ch);

    switch(ch) {
      case 1:create();
      break;
      case 2:display();
      break;
      default : exit(0);
    }
  }while(1);
}

create()
{
  int n=0;
  char choice='y';
  while(choice=='y' || choice == 'Y')
  {
    n++;
    new=(cll*)malloc(sizeof(cll));

    if(new==NULL)
    {
      printf("Memory not allocated.");
      exit(1);
    }

    printf("Enter data for node[%d] : ",n);
    scanf("%d",&new->data);

    new->next=NULL;

    if(start==NULL)
    {
      start=new;
      link=new;
    }
    else
    {
      link->next=new;
      link=new;
    }
    new->next=start;

    printf("Do you want to continue(Y/N) : ");
    choice=getche();
  }
  printf("\n");
}

display()
{
  link=start;
  printf("Print list : ");

  while(1)
  {
    printf("%d",link->data);
    if(link==start)
        break;
    link=link->next;
  }
  printf("\n");
}
