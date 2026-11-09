#include <stdio.h>

int main() {
    float arr[6];
    float n;
    float num=0;
    int cnt=0;
    float avg;

    for(int i=0; i<6; i++) {
        scanf("%f ", &n);
        arr[i] = n;
        num += n;
        cnt++;
    }
    avg = num/cnt;
    printf("%.1f", avg);

    return 0;
}