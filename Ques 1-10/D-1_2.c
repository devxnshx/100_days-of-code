// Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
#include <stdio.h>

int main()
{
    int n1, n2;
    scanf("%d %d",&n1,&n2);
    int s=n1+n2,d=n1-n2,p=n1*n2;
    float q=n1/n2;
    printf("sum=%d, diff=%d, product=%d, quotient=%.2f", s,d,p,q);
    return 0;
}