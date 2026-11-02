#include <stdio.h>

int main() {
    int max = 0;   // 최댓값을 저장할 변수 (1~100 사이의 값이므로 0으로 초기화)
    int min = 101; // 최솟값을 저장할 변수 (1~100 사이의 값이므로 101로 초기화)
    
    while (1) {
        int n;
        scanf("%d", &n);
        
        // 입력값이 0이면 반복 종료
        if (n == 0) {
            break;
        }
        
        // 1부터 100 사이의 값만 처리
        if (n >= 1 && n <= 100) {
            if (n > max) {
                max = n;
            }
            if (n < min) {
                min = n;
            }
        }
    }
    
    printf("MAX = %d\n", max);
    printf("MIN = %d\n", min);
    
    return 0;
}