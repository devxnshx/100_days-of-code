// Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/


#include <stdio.h>

int main() {
    int n =0,product=1;
    printf("enter any num: ");
    scanf("%d",&n);

for (int i = 1; i <=n; i++)
{
    product*=i;
}
printf("the sum of first n odd numbers is %d",product);
     return 0;
}