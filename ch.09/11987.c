#include <stdio.h>

int main() {
    int arr[10] = {0};
    int n;

    while(1) {
        scanf("%d", &n);
        if(n==0) {
            break;
        }
        int nn = n/10;
        arr[nn]++;
    }
    for(int i=0; i<10; i++) {
        if(arr[i] > 0) {
            printf("%d : %d\n", i, arr[i]);
        }
    }
    return 0;
}