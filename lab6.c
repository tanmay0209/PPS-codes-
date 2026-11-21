#include <stdio.h>


long long int factorialWithoutRecursion(int n)
{
    long long int fact = 1;

    for(int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}


long long int factorialWithRecursion(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorialWithRecursion(n - 1);
    }
}

int main()

{ int is_invalid(int *x);
 if (is_invalid(&num)){
        printf("Invalid Input!\n");
        return 0;
    }
    
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);
  
    if(num < 0)
    {
        printf("Factorial of a negative number isn't defined.\n");
    }
    else if(num > 20)
    {
        printf("Number larger than expected ! Enter a number between 0 and 20.\n");
    }
    else
    {
        printf("Factorial without recursion = %lld\n",
               factorialWithoutRecursion(num));

        printf("Factorial with recursion = %lld\n",
               factorialWithRecursion(num));
    }

    return 0;
}
