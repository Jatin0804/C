#include<stdio.h>

main()
{
  int n,f;
  printf("Enter a number : ");
  scanf("%d",&n);

  f=factorial(n);

  printf("Factorial of %d is : %d",n,f);
}

factorial(int n)
{
  int fact;
  if(n==0||n==1)
  return 1;
  else
  fact=n*factorial(n-1);
  return(fact);
}
