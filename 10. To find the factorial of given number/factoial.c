#include<stdio.h>

void main() {
    unsigned long long N = 1; unsigned int i;
    printf("Enter number: \n");
    scanf("%ui^\n", &i); getchar();

    if(i > 20) {
        printf("something big"); return;
    }

    while (i > 0)
    {
        N *= i;
        i--;
    }
    printf("factorial is %llu", N);
}