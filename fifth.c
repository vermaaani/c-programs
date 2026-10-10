#include <stdio.h>

int main()
{
    int binary, digit;
    int decimal = 0, base = 1;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    while (binary > 0)
    {
        digit = binary % 10;
        decimal = decimal + digit * base;
        binary = binary / 10;
        base = base * 2;
    }

    printf("Decimal number = %d", decimal);

    return 0;
}