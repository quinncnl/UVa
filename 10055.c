#include <stdio.h>

int main(int argc, char *argv[])
{
  long a,b;
  while (scanf("%ld %ld", &a, &b) == 2) {
    if (a>b)
      printf("%ld\n", a-b);
    else
      printf("%ld\n", b-a);
  }

  exit(0);
}
