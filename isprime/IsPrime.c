#include<stdio.h>
#include<stdlib.h>


int main(void)
{
    int sum = 0;
    int i, j;
    for (i = 1; i <= 100; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (j == i)
        {
            sum += i;
        }
    }
    printf("%d\n", sum);

    return 0;
}