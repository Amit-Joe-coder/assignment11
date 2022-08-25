// 1. Write a function to calculate LCM of two numbers. (TSRS)//
#include <stdio.h>
int Lcm(int, int);
int main()
{
    int x, y;
    printf("Enter any number: ");
    scanf("%d %d", &x, &y);
    int k = Lcm(x, y);
    printf("%d", k);
}
int Lcm(int a, int b)
{
    int c, m;
    for (c = 1; c < (a * b); c++)
    {
        if (a * c % b == 0)
        {
            for (c = 1; c < (a * b); c++)
            {
                if (b * c % a == 0)
                {
                    m = (b * c);
                    return m;
                }
            }
        }
    }
}
