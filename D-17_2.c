// Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/

#include <stdio.h>

int main() {
    int n =10;

    if (n==0||n==1)
    {
        printf("%d is not prime",n);
        return 0;
    }

    for ( int i=2; i<n; i++)
    {
        if (n%i==0)
        {
           printf("%d is a not a prime no.\n",n);
           return 0;
        }
    }
            printf("%d is a prime no.\n",n);

     return 0;
}