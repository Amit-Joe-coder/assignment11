// 6. Write a function to print all Prime numbers between two given numbers. (TSRN)//
#include <stdio.h>
void to_printPrime(int, int);
int main()
{
    int a, b;
    printf("Enter any two number:");
    scanf("%d %d", &a, &b);
    to_printPrime(a, b);
}
void to_printPrime(int x, int y)
{
    int i, k, m;
    for (x; x < y; x++)
    {
        for (i = 2; i <= x - 1; i++)
        {
            if (x % i == 0)
            {
                break;
            }
        }
        if (i == x)
        {
            printf("%d", x);
        }
    }
}
