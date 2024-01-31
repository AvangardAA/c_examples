#include <stdint.h>
#include <stdio.h>
#include <inttypes.h>

int main(void)
{
    uint32_t num = (unsigned long)1333333;
    for (int i = 31; i >= 0; i--)
    {
        printf("%"PRIu32, (num >> i) & 1);
    }

    return 0;
}
