#pragma warning(disable:4996)
#include <string.h>
#include <stdio.h>

int main() {
    char str1[20] = "Back";
    char str2[20] = "Space";
    char str3[20];

    char ch = 'p';
    int n = 3;

    // str1의 길이를 계산하기 위한 strlen
    int len = strlen(str1);
    printf("str1의 길이: %d\n", len);

    // str1의 내용을 str3에 복사하기 위한 strcpy
    strcpy(str3, str1);
    printf("str1을 str3에 복사: %s\n", str3);

    // str2의 첫 n개(3개) 문자를 str3에 복사하기 위한 strncpy
    strncpy(str3, str2, n);
    str3[n] = '\0'; // 널 문자 추가
    printf("str2의 첫 %d 문자를 str3에 복사: %s\n", n, str3);

    // str1과 str2의 문자열을 전체 비교
    printf("str1과 str2 비교: %d\n", strcmp(str1, str2));

    // str1과 str2의 앞에서 3개의 문자만 비교 (strncmp 사용)
    printf("str1과 str2의 첫 %d 문자 비교: %d\n", n, strncmp(str1, str2, n));

    // str2의 내용을 str1의 뒤에 이어 붙이기
    strcat(str1, str2);
    printf("str2를 str1에 연결: %s\n", str1);

    // str1의 앞에서 3개의 문자를 str3의 뒤에 추가 (strncat 사용)
    strncat(str3, str1, n);
    printf("str1의 첫 %d 문자를 str3에 연결: %s\n", n, str3);

    // str1에서 문자 'p'가 처음 나타나는 위치 찾기 (strchr 사용)
    char* ptr_ch = strchr(str1, ch);
    printf("str1에서 '%c'의 첫 번째 출현: %s\n", ch, ptr_ch ? ptr_ch : "찾을 수 없음");

    // str1에서 str2의 문자열이 처음 나타나는 위치 알기 (이미 선언된 ptr_str 재사용)
    char* ptr_str = strstr(str1, str2);
    printf("str1에서 str2의 첫 번째 출현: %s\n", ptr_str ? ptr_str : "찾을 수 없음");

    return 0;
}