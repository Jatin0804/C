#include<stdio.h>

int ch,n,r,i,stack[100],top=-1;

int main()
{
  do
  {
    ch=0,n=0,r=0,i=0;
  printf("Number system available : \n");
  printf("1.Binary \n");
  printf("2.Decimal \n");
  printf("3.HexaDecimal \n");
  printf("4.Octal \n");
  printf("5.Exit \n");
  printf("Take a choice : ");
  scanf("%d",&ch);
  printf("\n");
  switch(ch)
  {
    case 1:binary();
    break;
    case 2:decimal();
    break;
    case 3:hexa();
    break;
    case 4:octal();
    break;
    default:exit(0);
  }
}while(1);
  return 0;
}

power(int c,int times)
{
  int pow=1;
  for(i=0;i<times;i++)
  {
    pow=c*pow;
  }
//  printf("%d",pow);
  return pow;
}

binary()
{
  printf("Enter the BINARY number : ");
  scanf("%u",&n);
  int num1,num2=n,cond=0,c=2;
  while(num2>0)
  {
    num1=num2%10;
    if(num1>1)
    {
      printf("Number is not in BINARY form.\n");
      cond=1;
      break;
    }
    num2/=10;
  }
  if(cond==0)
  {
  printf("Convert to : \n");
  printf("1.Decimal \n");
  printf("2.Hexadecimal \n");
  printf("3.Octal \n");
  printf("Take a choice : ");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:toDec(c);
    break;
    case 2: toHex();
    break;
    case 3:toOct();
    break;
    default:exit(0);
  }
  }
  printf("\n");
}

decimal()
{
  int c=10;
  printf("Enter the DECIMAL number : ");
  scanf("%u",&n);
  printf("Convert to : \n");
  printf("1.Binary \n");
  printf("2.Hexadecimal \n");
  printf("3.Octal \n");
  printf("Take a choice : ");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:toBin(c);
    break;
    case 2: toHex();
    break;
    case 3:toOct();
    break;
    default:exit(0);
  }
  printf("\n");
}

hexa()
{
  int c=16;
  printf("Enter the HEXA-DECIMAL number : ");
  scanf("%u",&n);
  printf("Convert to : \n");
  printf("1.Decimal \n");
  printf("2.Binary \n");
  printf("3.Octal \n");
  printf("Take a choice : ");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:toDec(c);
    break;
    case 2: toBin(c);
    break;
    case 3:toOct();
    break;
    default:exit(0);
  }
  printf("\n");
}

octal()
{
  printf("Enter the OCTAL number : ");
  scanf("%u",&n);
  int num1,num2=n,cond=0,c=8;
  while(num2>0)
  {
    num1=num2%10;
    if(num1>7)
    {
      printf("Number is not in OCTAL form.\n");
      cond=1;
      break;
    }
    num2/=10;
  }
  if(cond==0)
  {
  printf("Convert to : \n");
  printf("1.Decimal \n");
  printf("2.Hexadecimal \n");
  printf("3.Binary \n");
  printf("Take a choice : ");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:toDec(c);
    break;
    case 2: toHex();
    break;
    case 3:toBin(c);
    break;
    default:exit(0);
  }
  }
  printf("\n");
}

toDec(int c)
{
  int number=0;
  if (c==2)
  {
    while(n>0)
    {
      r=n%10;
      top++;
      stack[top]=r;
      n/=10;
    }
    for(i=0;i<=top;i++)
    {
      number=number+stack[i]*power(c,i);
  //  printf("%d",stack[i]);
    }
    top=-1;
  }
  if (c==8)
  {
    while(n>0)
    {
      r=n%10;
      top++;
      stack[top]=r;
      n/=10;
    }
    for(i=0;i<=top;i++)
    {
      number=number+stack[i]*power(c,i);
  //  printf("%d",stack[i]);
    }
    top=-1;
  }
  printf("The decimal number is : %d\n",number);
}

toHex(){}

toOct(){}

toBin(int c)
{
  while(n>0)
  {
    r=n%2;
    top++;
    stack[top]=r;
    n/=2;
  }
  printf("Number in Binary is : ");
  for(i=top;i>=0;i--)
  {
    printf("%d",stack[i]);
    top--;
  }
  printf("\n");
}
