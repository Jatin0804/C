#include<stdio.h>
#include<conio.h>

int main()
{
    int r1,c1,r2,c2,sum=0;
    printf("Multiplication of matrices.\n\n");
    printf("Enter Values of 1st matrix.\n");
    printf("Enter Number of Rows :");
    scanf("%d",&r1);
    printf("Enter Number of Columns :");
    scanf("%d",&c1);
    int m1[r1][c1];
    for(int i=0;i<r1;i++)
        for(int j=0;j<c1;j++)
    {
        printf("Enter value of Element [%d][%d] :",i+1,j+1);
        scanf("%d",&m1[i][j]);
    }

    printf("\nEnter Values of 2nd matrix.\n");
    printf("Enter Number of Rows :");
    scanf("%d",&r2);
    printf("Enter Number of Columns :");
    scanf("%d",&c2);
    int m2[r2][c2],mul[r1][c2];
    if(c1!=r2)
        printf("\nSORRY!!, But the multiplication is not possible.");
        else
    {
        for(int i=0;i<r2;i++)
            for(int j=0;j<c2;j++)
        {
            printf("Enter Values of Element [%d][%d] :",i+1,j+1);
            scanf("%d",&m2[i][j]);
        }
        printf("\nMultiplication of the matrices is :\n");
        for(int i=0;i<r1;i++)
            {
            for(int j=0;j<c2;j++)
        {
            for(int k=0;k<r2;k++)
                sum=sum + m1[i][k]*m2[k][j];

        mul[i][j]=sum;
        sum=0;
        }
            }
            for(int i=0;i<r1;i++)
              {
                for(int j=0;j<c2;j++)
                printf("%d\t",mul[i][j]);
            printf("\n");
              }
    }

    return 0;
}
