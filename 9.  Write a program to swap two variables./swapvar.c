#include <stdio.h>
#include <string.h>
void main()
{
    char X[20], Y[20];
    printf("Enter any two\n");
    printf("X: ");
    scanf("%s", X);
    printf("Y: ");
    scanf("%s", Y);

    int len = (strlen(X) <= strlen(Y)) ? strlen(Y) : strlen(X), i;

    printf("Before swap: | X: %s | Y: %s", X, Y);
    for (i = 0; i < len; i++)
    { //XOR swap
        X[i] = X[i] ^ Y[i];
        Y[i] = X[i] ^ Y[i];
        X[i] = X[i] ^ Y[i];
    }
    printf("\nAfter  swap: | X: %s | Y: %s", X, Y);
}