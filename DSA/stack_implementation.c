#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define max 10

int count =0;

typedef struct stack
{
  int item[max];
  int top;
}st;

void createEmptyStack(st *s)
{
  s->top=-1;
}

int isFull(st *s)
{
  if (s->top==max-1)
  return 1;
  else
  return 0;
}

int isEmpty(st *s)
{
  if (s->top==-1)
  return 1;
  else
  return 0;
}

void push(st *s,int newItem)
{
  if(isFull(s))
  printf("Stack Full");
  else
  {
    s->top++;
    s->item[s->top]=newItem;
  }
  count++;
}

void pop(st *s)
{
  if(isEmpty(s))
  printf("\n Stack Empyt \n");
  else
  {
    printf("Item popped=%d",s->item[s->top]);
    s->top--;
  }
  count--;
  printf("\n");
}

void printStack(st *s)
{
  printf("Stack : ");
  for(int i=0;i<count;i++)
  {
    printf("%d",s->item[i]);
  }
  printf("\n");
}

int main(void)
{
  int ch;
  st *s=(st *)malloc(sizeof(st));

  createEmptyStack(s);

  push(s,1);
  push(s,2);
  push(s,3);
  push(s,4);

  printStack(s);

  pop(s);

  printf("\nAfter popping out \n");
  printStack(s);
}
