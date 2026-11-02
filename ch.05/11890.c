#include <stdio.h>

int main() {
    int a;
    int one = 1;
    int num = 0;
    
    scanf("%d", &a);
    
    while (one <= a) {
        num += one;  // num = num + one 과 동일 (누적 합)
        one++;       // one을 1씩 증가시킴
    }
    
    printf("%d\n", num);
    
    return 0;
}