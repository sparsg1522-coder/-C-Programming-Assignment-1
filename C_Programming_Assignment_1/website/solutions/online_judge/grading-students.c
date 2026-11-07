#include <stdio.h>
int main(void) { int n, g; scanf("%d", &n); while (n--) { scanf("%d", &g); if (g >= 38 && g % 5 >= 3) g += 5 - g % 5; printf("%d\n", g); } return 0; }
