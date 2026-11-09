#include <stdio.h>

int main() {
    int arr[5][5] = {
        {1, 1, 1, 1, 1},
        {1, 2, 3, 4, 5},
        {1, 3, 6, 10, 15},
        {1, 4, 10, 20, 35},
        {1, 5, 15, 35, 70}
    };

    for(int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}