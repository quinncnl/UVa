#include <stdio.h>

struct point {
  float x,y;
};

int main(int argc, char *argv[])
{
  int m,n;
  int i;
  struct point A[100], B[100];
  for (i=0;i<100;i++)
    A[i].x=A[i].y=B[i].x=B[i].y=0;

  float a,b;
  freopen("972", "r", stdin);
  while(scanf("%d", &m) == 1) {
    for (i=0;i<m;i++){
      scanf("%f %f", &a, &b);
      A[i].y=a;

      if (i==0)
	A[i].x=b;
      else
	A[i].x=A[i-1].x+b;

    }

    scanf("%d", &n);

    for (i=0;i<n;i++){
      scanf("%f %f", &a, &b);
      B[i].y=a;
      if (i ==0)
	B[i].x=b;
      else
	B[i].x=B[i-1].x+b;

    }

    int pa=0,pb=0;
    float min =100;
    while (pa<m && pb<n) {

      if (A[pa].y < B[pb].y){

	if(B[pb].y<min) min=B[pb].y;
      }   else{

	if(A[pa].y<min) min=A[pa].y;
      }

      if (B[pb].x < A[pa].x)
	pb++;
      else
	pa++;

    }
      printf("%.3f\n", min);

  }
  exit (0);
}
