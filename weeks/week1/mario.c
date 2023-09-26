#include <stdio.h>

int main(void)
{
  const int n = 5;
  for (int a = 0; a < n; a++)
  {
     for (int b = 0; b < n; b++)
     {
        printf("O");
     }
     printf("\n");
  }
}
