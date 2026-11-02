#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int num = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 2 * (i - 1); j++) {
            printf(" ");
        }
        for (int j = 1; j <= n + 1 - i; j++) {
            if (j > 1) printf(" ");
            printf("%d", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}