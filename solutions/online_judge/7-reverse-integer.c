int reverse(int x) { long long r=0; while(x){r=r*10+x%10; x/=10; if(r>2147483647LL || r< -2147483648LL) return 0;} return (int)r; }
