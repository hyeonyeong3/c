#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int num = 1;
    char ch = 'A';

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n + 1 - i; j++) {
            if (j > 1) printf(" ");
            printf("%d", num);
            num++;
        }
        for (int j = 1; j <= i; j++) {
            printf(" %c", ch);
            ch++;
        }
        printf("\n");
    }

    return 0;
}