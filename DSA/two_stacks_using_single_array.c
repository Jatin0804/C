#include<stdio.h>
#define size 20

int array[size], top1=-1,top2=size;

void push1(int data)
{
  if(top1<top2-1)
  {
    top1++;
    array[top1]=data;
  }
  else
    printf("Stack is full.\n");
}

void push2(int data)
{
  if(top1<top2-1)
  {
    top2--;
    array[top2]=data;
  }
  else
    printf("Stack is full.\n");
}

void pop1()
{
  if(top1>=0)
  {
    int pop_element=array[top1];
    top1--;

    printf("Element popped from Stack-1 is : %d\n",pop_element);
  }
  else
    printf("Stack is Empty.\n");
}

void pop2()
{
  if(top2<size)
  {
    int pop_element=array[top2];
    top2--;

    printf("Element popped from Stack-2 is : %d\n",pop_element);
  }
  else
    printf("Stack is Empty. \n");
}

void display1()
{
  for(int i=top1;i>=0;i--)
    printf("%d ",array[i]);

  printf("\n");
}

void display2()
{
  for(int i=top2;i<size;i++)
    printf("%d ",array[i]);

  printf("\n");
}

int main()
{
int ar[size],i,num_ele;

printf("We Can push a total of 20 values.\n");

for(i=1;i<=10;i++)
{
  push1(i);
  printf("Value pushed in Stack-1 is %d\n",i);
}

for(i=11;i<=20;i++)
{
  push2(i);
  printf("Value pushed in Stack-2 is %d\n",i);
}

display1();
display2();

printf("Pushing value in Stack-1 is 11\n");
push1(11);

num_ele=top1+1;
while(num_ele)
{
  pop1();
  --num_ele;
}

pop1();

return 0;
}
