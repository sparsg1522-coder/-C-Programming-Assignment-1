#include <stdio.h>
int main(void) { int L, N, W, H; scanf("%d%d", &L, &N); while (N--) { scanf("%d%d", &W, &H); if (W < L || H < L) puts("UPLOAD ANOTHER"); else if (W == H) puts("ACCEPTED"); else puts("CROP IT"); } return 0; }
