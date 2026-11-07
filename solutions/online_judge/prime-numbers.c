#include <stdio.h>
int isPrime(long long n){if(n<2)return 0; for(long long i=2;i<=n/i;i++)if(n%i==0)return 0; return 1;}
int main(void){int t; scanf("%d",&t); while(t--){long long n;scanf("%lld",&n);puts(isPrime(n)?"YES":"NO");}return 0;}
