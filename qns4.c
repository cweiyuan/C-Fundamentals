/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

#define TAX_MONEY (5.0f/100.0f)

int main()
{
    float money,afterTax;
    
    printf("Please enter an amount:");
    scanf("%f",&money);
    
    afterTax = money / TAX_MONEY;
    printf("The total amount after tax is: %.2f", afterTax);
    
    return 0;
}

