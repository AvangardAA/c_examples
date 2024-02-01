#include <stdio.h>
#include <stdint.h>

int main()
{
    // works for any uint size
    uint32_t num1 = 2147483648; // works, +1 wont work

    if (num1 & (num1 - 1)) printf("%s", "no"); // https://uk.wikipedia.org/wiki/%D0%A1%D1%82%D0%B5%D0%BF%D0%B5%D0%BD%D1%96_2
    else printf("%s", "yes");

    return 0;
}