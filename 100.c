#include <stdio.h>

int M(int n)
{
  int l=1;
  while(n>1) {
    if( (n%2) == 0 ) n/=2;
    else n=n*3+1;
    l++;
  }
  return l;
}

int main()
{

  freopen("100", "r", stdin);

  int i, j, k, l, m;
  while(scanf("%d %d",&i,&j)==2) {
    printf("%d %d ", i, j);
    m=0;
    if(i>j) {
      k=i;
      i=j;
      j=k;
    }
    for(k=i; k<=j; k++) {
      l=M(k);
      if(l>m) m=l;
    }
    printf("%d\n", m);
  }

  exit(0);
}
