#include<stdio.h>

int main()
{
    int i=3;
    int *j;
    int **k;
    j= &i;
    k= &j;

    printf("Address of i = %u",&i);
    printf("\nAddress of i = %u",j);
    printf("\nAddress of i = %u",*k);
    printf("\nAddress of j = %u",&j);
    printf("\nValue of j = %u",k);
    printf("\nAddress of k = %u",&k);
    printf("\nAddress of j = %u",j);
    printf("\nAddress of k = %u",k);
    printf("\nValue of i = %d",i);
    printf("\nValue of i = %d",*(&i));
    printf("\nValue of i = %d",*j);
    printf("\nValue of i = %d",**k);

    return 0;
}
