#include<stdio.h>

int main(void)
{
    int n,sum1=0,sum2=0;
    printf("Enter the matrix size : ");
    scanf("%d",&n);
    int mat[n][n];
    printf("Enter The Matrix.\n");
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<n;++j)
        {
            printf("Enter element [%d][%d] : ",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    }
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<n;++j)
        {
            if(i==j)
                sum1=sum1+mat[i][j];
           // if((i==0 && j==2)||(i==2 && j==0)||(i==1 && j==1))
             //   sum2=sum2+mat[i][j];
        }
        sum2=sum2+mat[i][n-i-1];
    }
    printf("Sum of diagonal 1 is : %d\n",sum1);
    printf("Sum of diagonal 2 is : %d",sum2);
}
