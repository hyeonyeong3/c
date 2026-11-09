#include <stdio.h>

int main() {
    int arr[7] = {0};
    int n;
    for(int i=0; i<10; i++) {
        scanf("%d ", &n);
        arr[n]++;
    }

    for (int i=1; i<7; i++) {
        printf("%d : %d\n", i, arr[i]);
    }

    return 0;
}