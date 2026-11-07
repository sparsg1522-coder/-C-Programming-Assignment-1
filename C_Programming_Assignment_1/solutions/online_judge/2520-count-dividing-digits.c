int countDigits(int num) { int x=num, count=0; while(x){int d=x%10; if(d && num%d==0)count++; x/=10;} return count; }
