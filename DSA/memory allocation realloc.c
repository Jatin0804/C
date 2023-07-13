#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n1,*ptr,n2;
    printf("Enter Size : ");
    scanf("%d",&n1);

    ptr=(int*)calloc(n1,sizeof(int));

    printf("Address of previously allocated memory : \n");
    for(int i=0;i<n1;++i)
        printf("%p\n",ptr + i);

    printf("\nEnter the new size : ");
    scanf("%d",&n2);

    ptr=realloc(ptr,n2*sizeof(int));

    printf("Address of new allocated memory : \n");
    for(int i=0;i<n2;++i)
            printf("%p\n",ptr + i);

    free(ptr);

    return 0;
}
