#include <stdio.h>

int main(void) {
    int a[3] = {10,20,30};
    int *p =a;

    printf("[main 함수]\n");

    printf("a[0] = %d\n", a[0]);
    printf("p[0] = %d\n", p[0]);

    p++;    //가능: 포인터가 다른 요소를 가리킴
    //a++;  //오류: 배열 이름은 변경 불가능

    printf("p++ 이후: %d\n", p[0]); //*(p) *(p+1)
    printf("a[0] =%d\n", a[0]);

    //p를 다시 배열 시작 주소로 변경
    p=a;

    test(a,p);

    printf("\n[함수 호출 이후]\n");
    printf("a[0] = %d\n", a[0]);
    printf("p[0] = %d\n", p[0]);

    return 0;
}