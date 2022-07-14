#include <stdio.h>
int factorial(unsigned int n)
{
        if (n == 0)
        return 1;
   return n * factorial(n - 1);
}

int fact()
{
        int num;
        printf("\nEnter the number to find the factorial: ");
        scanf("%d", &num);
        printf("Factorial of %d is %d", num, factorial(num));
        printf("\n");
        return 0;
}
