// Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/


#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int binary[32];  // store binary digits (for 32-bit int)
    int i = 0;

    // Conversion: divide by 2, store remainders
    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    // Print in reverse (since we stored backwards)
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }

    return 0;
}
