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
    
    printf("Please enter a value:");
    scanf("%f",&x);
    
    sum =(3 * pow(x,5) + 2 * pow(x,4) - 5 * pow(x,3) - pow(x,2) + 7 * x - 6);
    
    printf("The total sum of the number is : %f", sum);

    return 0;
}

