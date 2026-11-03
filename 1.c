#include <stdio.h>
#include <ctype.h>

int main() {
    char ch = 'M';

    printf("문자 : %c", ch);
    printf("알파벳 여부 : %s", isalpha(ch) ? "예" : "아니오");
    printf("대문자 여부 : %s", issupper(ch) ? "예" : "아니오");
    printf("소문자 여부 : %s", islower(ch) ? "예" : "아니오");
    printf("숫자 여부 : %s", isdigit(ch) ? "예" : "아니오");
    printf("알파벳 또는 숫자 여부 : %s", isalnum(ch) ? "예" : "아니오");
    printf("16진수 숫자 여부 : %s", isxdigit(ch) ? "예" : "아니오");
    printf("구두점 문자 여부 : %s", ispunct(ch) ? "예" : "아니오");
    printf("인쇄 사능 문자 여부 : %s", isprint(ch) ? "예" : "아니오");
    printf("제어 문자 여부 : %s", iscntr1(ch) ? "예" : "아니오");
    printf("아스키 문자 여부 : %s", isascii(ch) ? "예" : "아니오");
}