#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    printf("Enter Matrix Size :");
    scanf("%d",&n);
    int mat1[n][n],mat2[n][n],sum[n][n],sub[n][n];
    printf("Addition and Subtraction of %d*%d Matrix.\n\n",n,n);
    printf("Enter values of 1st matrix.\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
    {
        printf("Enter Value of place [%d][%d] :",i+1,j+1);
        scanf("%d",&mat1[i][j]);
    }
    printf("\nEnter values of 2nd matrix.\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
    {
        printf("Enter Value of place [%d][%d] :",i+1,j+1);
        scanf("%d",&mat2[i][j]);
    }

    printf("\nAddition of matrices is:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
    {
        sum[i][j]=mat1[i][j]+mat2[i][j];
        printf("%d\t",sum[i][j]);
        if(j==n-1)
            printf("\n");
    }

    printf("\nSubtraction of matrices is:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
    {
        sub[i][j]=mat1[i][j]-mat2[i][j];
        printf("%d\t",sub[i][j]);
        if(j==n-1)
            printf("\n");
    }
    return 0;
}
