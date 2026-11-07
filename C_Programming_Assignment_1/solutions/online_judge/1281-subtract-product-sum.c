int subtractProductAndSum(int n) { int sum=0, product=1; do { int d=n%10; sum+=d; product*=d; n/=10; } while(n); return product-sum; }
