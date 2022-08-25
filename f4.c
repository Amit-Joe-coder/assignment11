// 4. Write a function to find the next prime number of a given number. (TSRS)//
#include <stdio.h>
#include <stdbool.h>
int next_P(int);
int main()
{
    int x, k;
    printf("Enter any number: ");
    scanf("%d", &x);
    printf("%d", next_P(x));
}
int next_P(int a)
{
    int m, i, k;
    for (i = 1; i <= a; i++)
    {
        m = a + i;
        for (k = 2; k <= (m - 1); k++)
        {
            if (m % k == 0)
            {
                break;
            }
        }
        if (k == m)
        {
            return m;
        }
    }
}
