#include <stdio.h>
int main(void) { int t; scanf("%d",&t); while(t--){int n; unsigned long long f=1; scanf("%d",&n); for(int i=2;i<=n;i++)f*=i; printf("%llu\n",f);} return 0; }
