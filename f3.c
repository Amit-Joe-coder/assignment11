// 3. Write a function to check whether a given number is Prime or not. (TSRS)//
#include <stdio.h>
#include <stdbool.h>
int p_Num(int);
int main()
{
    int x, k;
    printf("Enter any number: ");
    scanf("%d", &x);
    k = p_Num(x);
    if (k == 1)
    {
        printf("Number is prime");
    }
    else
        printf("Number is not prime");
}
int p_Num(int a)
{
    int i;
    for (i = 2; i <= (a - 1); i++)
    {
        if (a % i == 0)
        {
            break;
        }
    }
    if (i == a)
        return true;
    else
        return false;
}
