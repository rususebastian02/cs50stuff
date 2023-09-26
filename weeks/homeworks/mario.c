#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //create a variable called height
    int height;
    do
    {
        //ask the user witch height use between 1 and 8
        height = get_int("Height (between 1-8): ");
    }
    //if the value it's between 1 and 8 it will prompt otherwise it will ask until the requirement are settle
    while (height < 1 || height > 8);

    //setting the height of the pyramid, starting with a value (x) of 0 and until the value reach the height add 1
    for (int x = 0; x < height; x++)
    {

        //setting the spaces of the text, the variable (y) will be the height - 1, so if we input a 7, in the top of pyramid there will be 6 spaces and 1 hash
        for (int y = height - 1; y>x; y--)
        {
            printf(" ");
        }

        //setting the hashes of the pyramid, the value (y) if equal or minus the value (i) then add 1 until all the spaces will be full
        for (int y = 0; y<=x; y++)
             {
                 printf("#");
             }

        printf("\n");
    }

}
