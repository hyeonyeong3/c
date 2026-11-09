#include <stdio.h>

int main() {
    int n;
    int arr[100];
    arr[0] = 100;
    scanf("%d", &n);
    arr[1] = n;
    int last_index = 1;

    for (int i=2; i<100; i++) {
        arr[i] = arr[i-2] - arr[i-1];
        last_index = i;
        if(arr[i] < 0) {
            break;
        }
    }
    for (int i=0; i<=last_index; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}