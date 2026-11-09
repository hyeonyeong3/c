#include <stdio.h>

int main() {
    int arr[11] = {0};
    int n;

    while(1) {
        scanf("%d ", &n);
        if (n==0 || n==11) {
            break;
        }
        arr[n]++;
    }

    for(int i=0; i<11; i++) {
        if(arr[i]>0) {
            printf("%d : %d\n", i, arr[i]);
        }
    }
    return 0;
}