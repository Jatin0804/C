#include<stdio.h>
#include<conio.h>

int main()
{
    int mat1[10][10],mat2[10][10],sum[10][10];
    printf("Addition of 3*3 Matrix.\n\n");
    printf("Enter values of 1st matrix.\n");
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
    {
        printf("Enter Value of place [%d][%d] :",i+1,j+1);
        scanf("%d",&mat1[i][j]);
    }
    printf("\nEnter values of 2nd matrix.\n");
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
    {
        printf("Enter Value of place [%d][%d] :",i+1,j+1);
        scanf("%d",&mat2[i][j]);
    }
   /* for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
    {
     sum[i][j]=mat1[i][j]+mat2[i][j];
    }*/

    printf("\nAddition of matrices is:\n");
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
    {
        sum[i][j]=mat1[i][j]+mat2[i][j];
        printf("%d\t",sum[i][j]);
        if(j==2)
            printf("\n");
    }
    return 0;
}
