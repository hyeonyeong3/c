#include <stdio.h>

struct Student {
    char name[20];
    int score[3];
    int total;   // 총점
};

void input(struct Student arr[], int n){
    for (int i = 0; i < n; i++) {
        scanf("%s %d %d %d", arr[i].name, &arr[i].score[0], &arr[i].score[1], &arr[i].score[2]);
        arr[i].total = arr[i].score[0] + arr[i].score[1] + arr[i].score[2];
    }
}

void sort(struct Student arr[], int n){
    struct Student temp;
    for (int i = 0; i < n - 1; i++) {
        int max = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j].total > arr[max].total) {
                max = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[max];
        arr[max] = temp;
    }
}

void output(struct Student arr[], int n){
    for (int i = 0; i < n; i++) {
        printf("%s %d %d %d %d\n", arr[i].name, arr[i].score[0], arr[i].score[1], arr[i].score[2], arr[i].total);
    }
}