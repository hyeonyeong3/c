#include <stdio.h>

int main() {
    int c;
    scanf("%d", &c);

    int arr[c];
    int num;
    int max=0;

    for(int i=0; i<c; i++) {
        scanf("%d", &num);
        if (max<num) {
            max = num;
        }
    }

    printf("%d", max);
    return 0;
}