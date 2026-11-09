#include <stdio.h>

int main() {
    int arr[4][2];
    int brr[4] = {0};   //행
    int crr[2] = {0};   //열
    int total =0;

    for(int i=0; i<4; i++) {
        for (int j=0; j<2; j++) {
            scanf("%d", &arr[i][j]);
            brr[i] += arr[i][j];
            crr[j] += arr[i][j];

            total += arr[i][j];
        }

    }
    for(int i=0; i<4; i++) {
        printf("%d ", brr[i]/2);
    }
    printf("\n");
    for (int j=0; j<2; j++) {
        printf("%d ", crr[j]/4);
    }
    printf("\n");
    printf("%d", total/8);

    return 0;
}