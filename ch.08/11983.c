#include <stdio.h>

int main() {
    int arr[100];
    int n;
    int cnt=0;

    for(int i=0; i<100; i++) {
        scanf("%d ", &n);
        if (n==0) {
            break;
        }
        else if (n%2 ==0) {
            n = n/2;
            arr[cnt] = n;
            cnt++;
        }
        else {
            n = n*2;
            arr[cnt] = n;
            cnt++;
        }
    }
    printf("%d\n", cnt);
    for(int i=0; i<cnt; i++) {
        printf("%d ", arr[i]);
    }
}