#include <stdio.h>
int a = 10;
void print_int()
{
    printf("%d ", a);
}
int main()
{
    printf("%d ", a);
    char a = 'c';
    printf("%c ", a);
    print_int();
    printf("%c ", a);
    a = 5;
    printf("%d ", a);
    print_int();
    return 0;
}
