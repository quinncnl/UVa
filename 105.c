#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
  freopen("105", "r", stdin);

  short H[10000];
  memset(H, 0, sizeof(H));

  int l, r, h, i;

  while(scanf("%d %d %d",&l, &h, &r) == 3) {

    for (i = l; i < r; i++) 
      if (h > H[i]) H[i] = h;

  }

  int last = 0, first = 1;
  for(i = 0; i < 10000; i++) {
    if (H[i] == last) continue;
    else {
      last = H[i];
      if (first) {
	printf("%d %d", i, H[i]);
	first = 0;
      }
      else
	printf(" %d %d", i, H[i]);
    }
  }

  printf("\n");

  exit( 0);
}
