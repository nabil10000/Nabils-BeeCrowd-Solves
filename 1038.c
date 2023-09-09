#include<stdio.h>
int main()
{
    int X, Y;
    float price = 0;

    scanf("%d %d", &X, &Y);
    if (X == 1)
    {
        price  =(4.00 * Y);
    }
    else if (X == 2)
    {
        price  = (4.50 * Y);
    }
    else if (X == 3)
    {
        price  = (5.00 * Y);
    }
    else if (X == 4)
    {
        price  =(2.00 * Y);
    }
    else if (X == 5)
    {
        price  = (1.50 * Y);
    }

    printf("Total: R$ %.2f\n",price);

}
