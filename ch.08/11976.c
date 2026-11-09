#include <stdio.h>

int main() {
    int arr[10];
    int score;
    int sum=0;
    float avg=0;
    float num=0;
    int cnt =0;

    for(int i=0; i<10; i++) {
        scanf("%d", &score);
        arr[i] = score;
        if (i%2==0) {
            num += score;
            cnt++;
        }
        else {
            sum += score;
        }
    }
    avg = num/cnt;
    printf("sum : %d \navg : %.1f", sum, avg);
}