#include <stdio.h>

int main()
{
    int a, b, temp;
    int *p = &a, *q = &b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    temp = *p;
    *p = *q;
    *q = temp;

    printf("After swapping: a = %d, b = %d", a, b);

    return 0;
}
