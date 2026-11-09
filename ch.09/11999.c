#include <stdio.h>

int main() {
    int arr[11] = {0};
    int n=0;
    while(1) {
        scanf("%d ", &n);
        if (n==0) {
            break;
        }
        n= n/10;
        arr[n]++;
    }

    for(int i=10; i>=0; i--) {
        if(arr[i]>0 && i!=0) {
            printf("%d0 : %d\n", i, arr[i]);
        }
        if(i==0 && arr[i>0]) {
            printf("%d : %d\n", i, arr[i]);
        }
    }
    return 0;
}