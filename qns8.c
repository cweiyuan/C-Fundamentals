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
    float loan, interest, monthlyPayment, intCal, intCal2, intcal3, amtInt, amtInt1, amtInt2, 
    firstPayment, secondPayment, thirdPayment;
    
    printf("Enter amount of loan:");
    scanf("%f", &loan);
    printf("Enter interest rate:");
    scanf("%f", &interest);
    printf("Enter monthly payment :");
    scanf("%f", &monthlyPayment);
   
    intCal = loan * ((interest/100) / 12);
    amtInt = intCal + loan;
    firstPayment = amtInt - monthlyPayment;
   
    intCal2 = firstPayment * ((interest / 100) / 12);
    amtInt1 = firstPayment + intCal2;
    secondPayment = amtInt1 - monthlyPayment;
   
    intcal3 = secondPayment * ((interest / 100) / 12);
    amtInt2 = secondPayment + intcal3;
    thirdPayment = amtInt2 - monthlyPayment;
   
    printf("Balance remaining after first payment : %.2f\n", firstPayment);
    printf("Balance remaining after second payment : %.2f\n", secondPayment);
    printf("Balance remaining after third payment : %.2f", thirdPayment);
   
    return 0;
}
