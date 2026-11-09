#include <stdio.h>

int main() {
    int arr[100];
    int n=0;
    int cnt =0;

    for(int i=0; i<100; i++) {
        scanf("%d ", &n);
        if(n==0) {
            break;
        }
        else {
            arr[i] = n;
            cnt++;
        }
    }
    for(int i=1; i<cnt; i+=2) {
        printf("%d ", arr[i]);
    }
    return 0;
}