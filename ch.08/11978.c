#include <stdio.h>

int main() {
    int arr[5];
    int n;
    int num;

    for(int i=0; i<5; i++) {
        scanf("%d ", &n);
        arr[i] = n;
    }

    for(int i=0; i<5; i+=2) {
        num += arr[i];
    }

    printf("%d", num);
    return 0;
}