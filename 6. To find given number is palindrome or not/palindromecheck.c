#include <stdio.h>

unsigned long long raise(short times)
{
    unsigned long long res = 1;
    for (int i = times; i > 0; i--)
    {
        res *= 10;
    }
    return res;
}

void main()
{
    unsigned long long N, tN;
    printf("Enter Number to check for Palindrome: ");
    scanf("%llu", &N);

    tN = N;
    int i = 0, j = 0;
    while (tN)
    {
        tN /= 10;
        i++;
    }
    i--;

    int h = i;
    while (i > h / 2)
    {
        if ((N % raise(i+1)) / raise(i) != (N % raise(h-i+1)) / raise(h-i)) {
            printf("Not Palindrome");
            return;
        }
        i--;
    }

    printf("It is Palindrome");
}