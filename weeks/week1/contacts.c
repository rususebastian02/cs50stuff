#include <stdio.h>
#include <cs50.h>

int main (void)
{
  string name = get_string("What's your name? ");
  int age = get_int("What's your age? ");
  string number  = get_string("What's you phone numbeer? ");

  printf("Age is %i. Name is %s. Phone number is %s.", age, name, number);
}
