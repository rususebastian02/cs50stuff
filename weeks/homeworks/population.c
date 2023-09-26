#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int start;
    do
    {
        start = get_int("Start size: ");
    }
    //starting size need to be atleast 9 or it will prompt the command until your input is >= 9
    while (start < 9);
    // TODO: Prompt for end size
    int end;
    do
    {
        end = get_int("End size: ");
    }
    while (end < start);

    // TODO: Calculate number of years until we reach threshold
    int years = 0;
    while (start < end)
    {
        //each year 1/3 of llamas born and 1/4 dies, so if we do math basically every ear there will be alwasy 1/12 more llamas
        start += start / 12;
        years++;
    }

    // TODO: Print number of years
    printf("Years: %i\n", years);
}
