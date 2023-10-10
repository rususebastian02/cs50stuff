#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = get_string("WHat is your name?\n");
    printf("Hello, %s\n", name);
}
