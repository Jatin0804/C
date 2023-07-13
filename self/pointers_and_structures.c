#include<stdio.h>

struct s
{
    char ch;
    int i;
    float a;
};
main()
{
    struct s var={'C',100,12.55};
    fun1(var);
    fun2(&var);
}

fun1(struct s v)
{
    printf("Printing with dot operator.\n");
    printf("%c %d %.1f",v.ch,v.i,v.a);
}

fun2(struct s *v)
{
    printf("\nPrinting with arrow operator.\n");
    printf("%c %d %.1f",v->ch,v->i,v->a);
}
