#include<stdio.h>

unsigned long long raise(short times) {
    unsigned long long res = 1;
    for(int i = times; i > 0; i--) {
        res*=10;
    }
    return res;
}

void main() {
    unsigned long long N, tN;
    printf("Enter Number to Reverse: ");
    scanf("%llu", &N);

    tN = N;
    int i = 0, j=0;
    while(tN) {
        tN /= 10;
        i++;
    }
    i--;
    while(i >= 0) {
        tN += N/raise(i)*raise(j);
        N -= (N/raise(i))*raise(i);
        i--; j++;
    }
    printf("%llu", tN);
}