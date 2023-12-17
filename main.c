#include <stdio.h>

char* greater_less(int x, int y)
{
  if (x > y)
  {
    return "x is greater then y\n";
  }
  else if (x < y)
  {
    return "x is less then y\n";
  }
  else
  {
    return "x is equal y\n";
  }
}

int main(void)
{
  int x;
  int y;

  printf("X: ");
  scanf("%d", &x);
  printf("Y: ");
  scanf("%d", &y);

  char* answer = greater_less(x, y);

  printf(answer);

  return 0;
}
