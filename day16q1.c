Q31: Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>

int main()
{
    int n, binary = 0, rem, i = 1;

    scanf("%d", &n);

    while(n > 0)
    {
        rem = n % 2;
        binary = binary + rem * i;
        i = i * 10;
        n = n / 2;
    }

    printf("%d", binary);

    return 0;
}
