#include <stdio.h>

int main() {
    int arr[10];
    int n;
    int odd=0;
    int even=0;

    for(int i=0; i<10; i++) {
        scanf("%d ", &n);
        arr[i] = n;
    }
    for(int i=0; i<10; i+=2) {
        odd += arr[i];
    }
    for(int i=1; i<10; i+=2) {
        even += arr[i];
    }

    printf("odd : %d \neven : %d", odd, even);

    return 0;
}