#include <stdio.h>

int main() {
    int arr[100];
    int n;
    int cnt=0;
    int sum=0;
    float avg;

    for (int i=0; i<100; i++) {
        scanf("%d", &n);
        arr[i] = n;
        if (n==0) {
            break;
        }
        if (n%5==0) {
            sum += n;
            cnt++;
        }
    }
    avg = (float)sum/cnt;
    printf("Multiples of 5 : %d\nsum : %d\navg : %.1f", cnt, sum, avg);
    return 0;
}