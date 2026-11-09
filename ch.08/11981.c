#include <stdio.h>

int main() {
    int arr[100];
    int n;
    int min;
    int max;

    for(int i=0; i<100; i++) {
        scanf("%d", &n);
        arr[i] = n;
        if (n==0) {
            break;
        }
        if (i==0) {
            min = n;
            max = n;
        }
        else {
            if (max < n) {
                max = n;
            }
            if (min > n) {
                min = n;
            }
        }
    }
    printf("%d", max+min);
    return 0;
}