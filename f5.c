// 5. Write a function to print first N prime numbers (TSRN)//
#include <stdio.h>
void N_prime(int);
int main()
{
    int a;
    printf("enter any number: ");
    scanf("%d", &a);
    N_prime(a);
    return 0;
}
void N_prime(int x)
{

    int k, i;
    for (k = 1; k <= x; k++)
    {
        for (i = 2; i <= (x - 1); i++)
        {
            if (k % i == 0)
            {
                break;
            }
        }
        if (i == k)
        {
            printf("%d", k);
        }
    }

    return;
}
