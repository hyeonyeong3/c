#include <stdio.h>

int main() {
    while (1) {
        int n;
        scanf("%d", &n);
        
        // -1이 입력되면 반복 종료
        if (n == -1) {
            break;
        }
        
        // 3의 배수인 경우 3으로 나눈 몫 출력
        if (n % 3 == 0) {
            printf("%d\n", n / 3);
        }
    }
    
    return 0;
}