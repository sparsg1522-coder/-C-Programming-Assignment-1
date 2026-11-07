#include <stdio.h>
int main(void){int n;scanf("%d",&n);int len=2*n-1;for(int i=0;i<len;i++){for(int j=0;j<len;j++){int d=i;if(j<d)d=j;if(len-1-i<d)d=len-1-i;if(len-1-j<d)d=len-1-j;printf("%d",n-d);}putchar('\n');}return 0;}
