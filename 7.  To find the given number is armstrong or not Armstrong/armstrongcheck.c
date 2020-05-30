#include<stdio.h>
#include <stdio.h>

unsigned long long braise(unsigned long long base, short times)
{
    unsigned long long res = 1;
    for (int i = times; i >= 0; i--)
    {
        res *= base;
    }
    return res;
}

unsigned long long raise(short times) 
{
    return braise(10, times);
}

void main()
{
    unsigned long long N, tN;
    printf("Enter Number: ");
    scanf("%llu", &N);

    tN = N;
    int i = 0, j = 0;
    while (tN)
    {
        tN /= 10;
        i++;
    }

    int h = i-1;
    while(i >= 0) {
        tN += braise((N % raise(i)) / raise(i-1), h);
        i--;
        printf("\n%llu | %llu\n", tN, N);
    }
    if(tN == N) {
        printf("This is an Armstrong Number");
    } else {
        printf("This is not Armstrong Number");
    }
    printf("\n%llu | %llu\n", tN, N);
}