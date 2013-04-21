#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
  freopen("488", "r", stdin);

  int n,i,a,f;
  char wave[65];
  scanf("%d", &n);

  int j,k,m;
  for(i = 0;i < n; i++) {
    scanf("%d %d", &a, &f);

    k=0;
    for(j=1;j<=a;j++){
      //print j number j
      for(m=0;m<j;m++)
	wave[k++] = j+'0';
      
      wave[k++] = '\n';
    }
    j-=2;
    for(;j>0;j--){
      for(m=0;m<j;m++)
	wave[k++] = j+'0';

      wave[k++] = '\n';
    }

    wave[k]=0;

    for(j=0;j<f;j++){

      if(j==f-1 && i==n-1){
	//last line in last input
	printf("%s", wave);
      }
      else
	printf("%s\n", wave);

    }

  }

  exit( 0);
}
