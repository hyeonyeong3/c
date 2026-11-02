#include <stdio.h>

int main() {
    while(1) {
        int a;
        scanf("%d", &a);
        if (0<=a && a<=100) {
            if (a>=80) {
                printf("Pass\n");
            }
            else {
                printf("Fail\n");
            }
        }
        else {
            break;
        }
    }
    return 0;
}