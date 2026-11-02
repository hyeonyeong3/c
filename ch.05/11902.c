#include <stdio.h>

int main() {
    int a;
    int odd=0;
    int even=0;
    while(1) {
        scanf("%d", &a);
        if (a%2==0 && a!=0) {
            even++;
        }
        if (a%2 !=0) {
            odd++;
        }
        if (a==0) {
            break;
        }
    }
    printf("odd : %d \n", odd);
    printf("even : %d", even);
}