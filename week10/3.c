#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int start = 0;      //시작 위치를 0으로 설정
    int end = size -1;  //끝위치를 배열크기 -1로 설정

    while (start <= end) {  //시작 위치가 끝 위치보다 작거나 같은 동안 반복
        int mid = start + (end - start) /2;     //중간 위치 계산

        if (arr[mid] == target) {   //중간 위치의 값이 찾을 값과 같다면
            return mid;             // 중간 위피를 반환하고 탐색 종료
        }
        else if (arr[mid] < target) {   // 중간 위치의 값이 찾을 ㄱ밧보다 작다면
            start = mid +1;             //시작 위치를 중간 위치 +1로 변경
        }
        else {                        //그렇지 않다면
            end = mid -1;             // 끝 위치를 중간 위치 -1로 변경
        }
    }
    return -1;                      //반복이 끝날 때까지 못 찾았다면 -1 반환
}

int main() {
    int arr[] = {2,5,8,12,16,23,38,56,72,91}; // 반드시 정렬된 배열
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 23;

    int result = binarySearch(arr, size, target);

    if(result != -1) {
        printf("원소 %d는 인덱스 %d에 존재랍니다. \n", target, result);
    }
    else {
        printf("원소를 찾지 못했습니다. \n");
    }
    return 0;
}