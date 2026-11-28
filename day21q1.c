Q41: Write a program to swap the first and last digit of a number.

#include <stdio.h>

int main()
{
    int n, temp, first, last, digits = 0, power = 1, result;

    scanf("%d", &n);

    temp = n;
    last = n % 10;

    while(temp >= 10)
    {
        temp = temp / 10;
        digits++;
    }

    first = temp;

    while(digits > 0)
    {
        power = power * 10;
        digits--;
    }

    result = last * power + (n % power) / 10 * 10 + first;

    printf("%d", result);

    return 0;
}
