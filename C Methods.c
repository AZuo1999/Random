#include <stdio.h>
#include <math.h>

void printMenu();
int add(int *x, int *y);
int subtract(int *x, int *y);
int multiply(int *x, int *y);
int divide(int *x, int *y);
int remainder(int *x, int *y);
double power(int *b, int *p);
int factorial(int *n);

/* printMenu: print the menu */
void printMenu()
{
   printf("Choose one of the following: \n");
   printf("1. Add \n"); 
   printf("2. Subtract \n");
   printf("3. Multiply \n");
   printf("4. Divide \n");
   printf("5. Power \n");
   printf("6. Factorial \n\n");
}
/* add: add function */
int add(int *x, int *y)
{   
    int sum = *x + *y;
    return sum;
}
/* subtract: subtract function */
int subtract(int *x, int *y)
{
    int diff = *x - *y;
    return diff;
}
/* multiply: multiply function */
int multiply(int *x, int *y)
{
    int product = *x * *y;
    return product;
}
/* divide: division function */
int divide(int *x, int *y)
{
    int quotient = *x / *y;
    return product;
}
/* remainder: modulus function */
int remainder(int *x, int *y)
{
    if(*x < *y) return *x;
    else return 1 + remainder(*x - *y, *y);
}
/* power: pow function */
double power(int *b, int *p)
{
    if(*p == 0) return 1;
    else if(*p > 0) return *b * power(*b, *p - 1);
    else return 1 / (double)(*b) * power(*b, *p + 1);
}
/* factorial: factorial function */
int factorial(int *n)
{
    if(*n == 1) return 1;
    else return *n * factorial(*n - 1);
}

/* main method, also driver for the program */
int main()
{
     int m, n, *x, *y;
     printf("Enter two numbers: \n");
     scanf("%d%d",&m,&n);
     *x = &m;
     *y = &n;
     
     return 0;
}
