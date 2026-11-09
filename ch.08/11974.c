#include <stdio.h>

int main() {
    int arr[100];
    int n;
    int cnt=0;
    int min;
    int max;

    while(1) {
        scanf("%d", &n);
        if (n==0) {
            break;
        }
        if (cnt==0) {
            min=n;
            max=n;
        }
        arr[cnt] = n;
        cnt++;

        if (max<n) {
            max = n;
        }
        if (min>n) {
            min =n;
        }
    }
    printf("%d", max-min);
}