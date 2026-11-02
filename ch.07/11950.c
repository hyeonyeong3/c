#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    char ch = 'A';
    int num = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n + 1 - i; j++) {
            if (j > 1) printf(" ");
            printf("%c", ch);
            ch++;
        }
        for (int j = 1; j <= i - 1; j++) {
            printf(" %d", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}