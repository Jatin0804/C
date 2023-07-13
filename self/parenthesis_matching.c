#include<stdio.h>
#include<string.h>

void main()
{
  int top=-1,i,k;
  char stack[100];

  printf("Enter a string : ");
  scanf("%s",stack);

  k=strlen(stack);

  for(i=0;i<k;i++)
  {
    if(stack[i]=='(')
    top++;
    else if(stack[i]==')')
    top--;
  }

  if(top==-1)
  printf("Parenthesis Matched.");
  else
  printf("Parenthesis not Matched.");
}
