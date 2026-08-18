//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
#include<stdio.h>
int main(){
    float a,b;
    printf("enter two numbers:");
    scanf("%f %f", &a,&b);
    printf("sum=%.2f\n difference=%.2f\n product=%.2f\n quotient=%.2f\n", a+b,a-b,a*b,a/b);
    return 0;
}

