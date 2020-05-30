#include<stdio.h>
void main() {
    //descending order required
    int atoms[10] = {2000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    unsigned long long N;
    printf("Enter Amount: ");
    scanf("%llu", &N);

    printf("Amount: %llu\n", N);
    for(int i = 0; i < 10; i++) {
        if(N/atoms[i]){
            printf("[%d] x%llu\n", atoms[i], N/atoms[i]);
        }
        N%=atoms[i];
    }   
}