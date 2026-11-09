#include <stdio.h>

int main(void) {
    int n;
    int arr[10][10] = {0};   

    scanf("%d", &n);

    arr[0][0] = 1;

    // 파스칼 삼각형 만들기
    for (int i = 1; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0)
                arr[i][j] = arr[i-1][j];
            else
                arr[i][j] = arr[i-1][j] + arr[i-1][j-1];
        }
    }
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}