#include <stdio.h>

int main() {
    int height, weight, obesity;
    
    // 키와 몸무게를 순서대로 입력받음
    scanf("%d %d", &height, &weight);
    
    // 비만수치 공식: 몸무게 + 100 - 키
    obesity = weight + 100 - height;
    
    // 첫 번째 줄에 비만수치 출력
    printf("%d\n", obesity);
    
    // 비만수치가 0보다 크면 추가 메시지 출력
    if (obesity > 0) {
        printf("Obesity\n");
        printf("Need control\n");
    }
    
    return 0;
}