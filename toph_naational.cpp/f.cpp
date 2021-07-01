#include <stdio.h>

int main()

{
    int T, i, t, l, r, k, j;
    long long n, q;

    scanf("%d", &T);

    while (T--) {
        scanf("%lld %lld", &n, &q);

        long long orders1[n];
        long long orders2[n];

        for (i = 0; i < n; i++) {
            orders1[i] = 0;
            orders2[i] = 0;
        }

        while (q--) {
            scanf("%d %d %d %d", &t, &l, &r, &k);

            for (j = (l-1); j < r; j++) {
                if (t == 1) {
                    orders1[j] += k;
                } else {
                    orders2[j] = orders2 [j] + (orders1[j] * k);
                }
            }
        }

        for (i = 0; i < n; i++) {
            printf("%lld ", orders2[i]);
        }
    }

    return 0;
}