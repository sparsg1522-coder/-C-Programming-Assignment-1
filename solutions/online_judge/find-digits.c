#include <stdio.h>
int main(void) { int t; scanf("%d",&t); while(t--){int n,x,count=0; scanf("%d",&n); x=n; while(x){int d=x%10; if(d && n%d==0)count++; x/=10;} printf("%d\n",count);} return 0; }
