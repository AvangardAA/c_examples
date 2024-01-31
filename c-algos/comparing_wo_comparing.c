#include <stdint.h>
#include <stdio.h>

int main(void)
{
    uint16_t num1 = 0b1100000000000000, num2 = 0b1011111111111111;

    if ((((num1 >> 14) & 0b11) ^ ((num2 >> 14) & 0b11)) & ((num1 >> 14) & 0b11))
    {
        printf("%s", "first larger");
    }

    else
    {
        printf("%s", "second larger");
    }

    return 0;
}