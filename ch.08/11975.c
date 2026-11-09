#include <stdio.h>

int main() {
    int arr[10];
    int score;
    int sum=0;
    float avg=0;

    for (int i=0; i<10; i++) {
        scanf("%d", &score);
        arr[i] = score;
        sum += score;
    }
    avg = sum/10;

    printf("sum = %d \navg = %.1f", sum, avg);

    return 0;
}