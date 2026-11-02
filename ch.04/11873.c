#include <stdio.h>

int main() {
    int a, b, c;
    int max=a;
    scanf("%d %d %d", &a, &b, &c);

    if (max<b) {
        max = b;
    }
    if (max<c) {
        max = c;
    }

    printf("max = %d", max);

    return 0;
}