// Program to calculate the sum of n numbers entered by the user

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i, *ptr,sum=0;

    printf("Enter number of elements :");
    scanf("%d",&n);

    ptr = (int*)malloc(n * sizeof(int));

    //if memory cannot be allocated.
    if(ptr == NULL)
    {
        printf("Error ! memory not allocated.");
        exit(1);
    }

    printf("Enter Elements : \n");
    for(int i=0;i<n;++i)
    {
      printf("Enter element [%d] :",i+1);
        scanf("%d",ptr+i);
        sum += *(ptr+i);
    }

    printf("Sum = %d",sum);

    //deallocating the memory location.
    free(ptr);

    return 0;
}
