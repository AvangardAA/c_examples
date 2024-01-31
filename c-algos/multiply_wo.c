#include <stdint.h>
#include <inttypes.h>
#include <stdio.h>

int main(void)
{
    uint32_t num1 = 50, num2 = 70, res = 0;

    while (num2 > 0) 
    {
        if (num2 & 1) // lsb
        {
            res += num1;
        }

        num1 <<= 1;
        num2 >>= 1;
    }

    printf("%"PRIu32, res);

    return 0;
}