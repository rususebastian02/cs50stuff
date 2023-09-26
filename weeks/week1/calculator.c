#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long x = get_long("x: ");      //we used long instead of int for the 32 bit overflow
    long y = get_long("y: ");

    printf("%li\n", x + y);
}
