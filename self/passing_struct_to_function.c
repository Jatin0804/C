#include<stdio.h>

struct student
{
    char name[50];
    int age;
};

void display(struct student s);

int main(void)
{
    struct student s1;

    printf("Enter name : ");

    //read string from user until \n is entered and \n is discarded.
    scanf("%[^\n]%*c",s1.name);
    //scanf("%[^a]%",s1.name);

    printf("Enter age : ");
    scanf("%d",&s1.age);

    display(s1);
}

void display(struct student s)
{
    printf("\nDisplaying Information.\n");
    printf("Name is %s",s.name);
    printf("\nAge is %d",s.age);
}
