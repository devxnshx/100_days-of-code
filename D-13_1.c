// Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/
#include <stdio.h>
#include<stdlib.h>

int main() {
    int a,b;
    char c ;

    printf("Enter num1 num2 and what operation u want to execute\n");
    printf("example:3 4 + :\n\n");
    scanf(" %d%d %c",&a,&b,&c);
// if (c=='/'&&b==0)
// {
//     printf("0 is invaild in division\n");
//     return 0;

// }

    switch (c)
    {
    case '+':
        printf("%d",a+b);
        break;
    case '-':
        printf("%d",a-b);
        break;
    case '*':
        printf("%d",a*b);
        break;
    case '/':
        if (a==3)
        {
            printf("%d",a/b);
            /* code */
        }
        
        break;
    case '%':
        printf("%d",a%b);
        break;
    
    default:
        break;
    }

     return 0;
}