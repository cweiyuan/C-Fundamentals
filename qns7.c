/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int dollar, twentyDollar, tenDollar, oneDollar, fiveDollar, leftOvers, leftOvers1, leftOvers2;
    
    printf("Please input a value: ");
    scanf("%d", &dollar);
   
    twentyDollar = dollar / 20; 
    printf("$20 bills : %d\n", twentyDollar);
    leftOvers = dollar - (twentyDollar * 20);
    
   
    tenDollar = leftOvers / 10;
    printf("$10 bills : %d\n", tenDollar);
    leftOvers1 = leftOvers - ( tenDollar * 10);
    
   

    fiveDollar = leftOvers1 / 5;
    printf("$5 bills ; %d\n", fiveDollar);
    leftOvers2 = leftOvers1 - (fiveDollar * 5);
      
    oneDollar = leftOvers2 / 1;
    printf("$1 bills : %d", oneDollar);
      
    return 0;
}

