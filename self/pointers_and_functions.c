#include<stdio.h>

main()
{
    int x=20;
    printf("x = %d",x);
    printf("\nCALL BY VALUE.\n");
    change(x);
    printf("x = %d",x);
    printf("\nCALL BY FUNCTION.\n");
    change1(&x);
    printf("x = %d",x);
}
change(int p)
{
    p=p+10;
}
change1(int *p)
{
    *p=*p+10;
}
