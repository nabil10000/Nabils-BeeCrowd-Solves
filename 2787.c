#include <stdio.h>

int main()
{
    long long int l, c;

    scanf("%lld %lld", &l, &c);

    if ((l % 2 == 0 && c % 2 == 0) || (l % 2 == 1 && c % 2 == 1))
        printf("1\n");
    else
        printf("0\n");

    return 0;
}
