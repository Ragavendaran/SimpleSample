//Not efficient
//Serial Bruteforce
#include <stdio.h>

//babylonian method to find square root
unsigned long long isqrt(unsigned long long S) {
    unsigned long long nextx, x; //first approximate of square
    x = S;
    nextx = x;

    do {
        x = nextx;
        nextx = 0.5 * (x + S / x);
    } while (nextx - x > 1);

    return x;
}

void main()
{
    unsigned long long N, sqN; //64-bit integer
    int i;
    printf("Enter Number to check: ");
    scanf("%llu", &N);

    //unknown cases
    if (N == 1 || N == 0)
    {
        printf("Neither");
        return;
    }

    if (N == 2 || N == 3 || N == 5)
    {
        printf("%llu is a prime", N);
        return;
    }

    //we check the first three to debloat the loop
    
    int knowncheck[3] = {2, 3, 5};
    for(i = 0; i < 3; i++) {
        if(N % knowncheck[i] == 0) { 
            printf("Not a prime, %llu divisible by %i", N, knowncheck[i]);
            return;
        }
    }

    sqN = isqrt(N);
    printf("Square root : %llu\n", sqN);

    unsigned long long test = 7;

    //only 7, 11, 13, 17, 19, 23, 29, 31, 37, ... is checked
    int skipcycle[8] = {4, 2, 4, 2, 4, 6, 2, 6};
    i=0;

cont:
    while (test <= sqN)
    {
        if (N % test == 0)
        {
            printf("Not a prime, %llu divisible by %llu",N, test);
            return;
        }
        
        // skip checking with numbers divisible by 2,3,5
        test += skipcycle[i++]; i %= 8;
    }

    printf("%llu is a prime", N);
}