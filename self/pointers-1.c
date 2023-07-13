#include<stdio.h>

main()
{
    int i=0,sum=0;
    int arr[5]={20,10,30,60,5},*ptr;
    ptr = arr;
    while(i<5)
    {
        printf("%d \t %u\n",*ptr,&arr[i]);
        sum=sum+*ptr;
        i++;
        ptr++;
    }
    printf("\nSum is %d",sum);
}
