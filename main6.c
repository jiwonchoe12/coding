#include <stdio.h>

int main(void)
{
  int n;
  scanf("%d", &n);

  for (int x = 1; x<=n; x++)
  {
    for (int t=1; t<=x; t++)
    {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
