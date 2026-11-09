#include <stdio.h>

int main() {
    int arr[10];
    int n; 
    int min=1000;

    for(int i=0; i<10; i++) {
        scanf("%d ", &n);
        if (min > n) {
            min = n;
        }
    }
    printf("%d", min);
    return 0;
}