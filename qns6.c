/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    float x, sum;
    
    printf("Please input a value: ");
    scanf("%f",&x);
    
    sum = ((((3 * x + 2)* x- 5)* x - 1) * x + 7) * x - 6;
    printf("The total sum is : %f", sum);

    return 0;
}

