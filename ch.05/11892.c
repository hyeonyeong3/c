#include <stdio.h>

int main() {
    while(1) {
        int a;
        scanf("%d", &a);

        if (a>0) {
            printf("positive number\n");
        }
        else if (a<0) {
            printf("negative number\n");
        }
        else {
            break;
        }
    }
    return 0;
}