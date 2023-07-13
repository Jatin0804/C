#include<stdio.h>
#include<stdlib.h>

struct person
{
    int age;
    float weight;
    char name[50];
};

int main(void)
{
    struct person *ptr;
    int n;

    printf("Enter the number of persons : ");
    scanf("%d",&n);

    ptr=(struct person*)malloc(n*sizeof(struct person));

    for(int i=0;i<n;++i)
    {
        printf("Enter first name and age respectively : ");

        //To Access members of 1st struct person
        //ptr->name and ptr->age is used

        //To access members of 2nd struct person
        //(ptr+1)->name and (ptr+1)->age is used.

        scanf("%s %d",(ptr+i)->name,&(ptr+i)->age);
    }

    printf("\nDisplaying Information : \n");
    for(int i=0;i<n;++i)
        printf("Name is : %s \t Age is : %d\n",(ptr+i)->name,(ptr+i)->age);
}
