// Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/

#include <stdio.h>
#include <math.h>

int main() {
    /*quadratic equation => ax^2+bx+c*/

    int a,b,c,D;
    scanf(" %d%d%d",&a,&b,&c);
      D=(b*b)-4*a*c;

    if (D>=0)
    {
        int r1=((-b)+sqrt(D))/2*a;
        int r2=((-b)-sqrt(D))/2*a;
        
        if (D>0)
        {
            printf("Roots are real and different : %d %d",r1,r2);
        }
       else if (D==0)
        {
            printf("Roots are real and same : %d",r1);
        }
        
    }
    
    else
    {
        printf("Roots are complex");
    }
    

    
     return 0;
}