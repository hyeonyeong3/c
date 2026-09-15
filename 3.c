#pragma warning(disable:4996)
#include <stdio.h>>

int main()
{
    int num;

    printf("정수를 입력하세요: ");
    scanf("%d", &num);

  // printf("%s", (num%2==0)?"Even": "Odd");
    (num %2 == 0) ? printf("Even\n") : printf("Odd\n");
    return 0;
}