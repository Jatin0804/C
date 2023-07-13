#define max 3
#include<stdio.h>

int top=-1,stack[max],element;

int main(void)
{
  int ch;
  do{
    printf("\n 1.Push");
    printf("\n 2.Pop");
    printf("\n 3.Display");
    printf("\n 4.Exit");
    printf("\n Enter Your choice : ");
    scanf("%d",&ch);

    switch (ch)
    {
      case 1:push();
      break;
      case 2:pop();
      break;
      case 3:display();
      break;
      default: exit(0);
    }
  }while(1);
}

push()
{
  if(top<max-1)
  {
    printf("Enter data : ");
    top++;
    scanf("%d",&element);
    stack[top]=element;
  }
  else
  {
    printf("Stack Overflow.");
  }
}

display()
{
  int i;
  if(top==-1)
  printf("Stack Empty.");
  else
  {
    for(i=top;i>-1;i--)
    printf("%d",stack[i]);
  }
}

pop()
{
  if(top==-1)
  printf("Stack Underflow.");
  else
  {
    element=stack[top];
    printf("Element popped is : %d",element);
    top--;
  }
}
