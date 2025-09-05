#include <stdio.h>

int main()
{
    int n, r = 0;
    printf("give a number:  ");
    scanf("%d", &n);

    while(1)
    {
        r = n % 2;
        n = n / 2;
        printf("%d", r);
        if (n == 0)
            break;
    }
    return 0;
}