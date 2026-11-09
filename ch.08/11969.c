#include <stdio.h>

int main() {
    int month=0;

    while(1) {
        scanf("%d\n", &month);
        if (month==0) {
            break;
        }
        else if (month == 4 || month==6 || month == 9 || month ==11) {
            printf("30\n");
        }
        else if (month == 2) {
            printf("28\n");
        }
        else {
            printf("31\n");
        }
    }
    return 0;
}