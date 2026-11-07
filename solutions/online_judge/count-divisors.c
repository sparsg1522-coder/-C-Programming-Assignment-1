#include <stdio.h>
int main(void) { long long n; int count=0; scanf("%lld",&n); for(long long i=1;i<=n/i;i++) if(n%i==0) count += (i==n/i)?1:2; printf("%d\n",count); return 0; }
