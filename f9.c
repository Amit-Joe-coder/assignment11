// 9. Write a program in C to find the square of any number using the function//
#include <stdio.h>
int square(int);
int main()
{
    int x;
    printf("enter any number: ");
    scanf("%d", &x);
    printf("%d is a square of %d", square(x), x);
    return 0;
}
int square(int a)
{
    int k = a * a;
    return k;
}
