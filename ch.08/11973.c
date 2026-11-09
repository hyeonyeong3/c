#include <stdio.h>

int main() {
    int arr[10];
    int n;
    int max =0;
    int min;

    for(int i=0; i<10; i++) {
        scanf("%d", &n);
        arr[i] = n;
        if (max < n) {
            max = n;
        }
        if (min > n) {
            min =n;
        }
    }
    printf("%d %d", max, min);
    return 0;
}