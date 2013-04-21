#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  freopen("10167", "r", stdin);

  int A, B;
  int n,i;
  int ax[200];
  int sum,det;
  while (scanf("%d", &n) == 1) {
    if (n == 0) break;
    for (i=0; i<2*n;i++) 
      scanf("%d %d", &ax[2*i], &ax[2*i+1]);
    
    for(A=-500; A<=500;A++)
      for(B=-500; B<=500;B++) {
	sum = 0;

	for(i=0;i<2*n;i++) {
	  det=A*ax[2*i]+B*ax[2*i+1];
	  if (det == 0) break;
	  else if (det>0)
	    sum++;
	  else
	    sum--;
	}
	if (det==0) continue;
	if (sum==0) {
	  printf("%d %d\n", A, B);
	  goto end;
	}
      }
  end:
    continue;
  }
  exit (0);
}
