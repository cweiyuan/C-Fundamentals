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

    float radius;
  
    printf("Please input a value: ");
    scanf("%f", &radius);
   
    printf("The radius is: %f\n" , radius);
  
    float volume = (4/(3 * M_PI * pow(radius, 3)));
  
    printf("The volume of the sphere is:%f", volume);

    return 0;
}

