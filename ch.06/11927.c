#include <stdio.h>

int main() {
    int n, even = 0, odd = 0;
    
    for (int i = 0; i < 10; i++) {
        scanf("%d", &n);
        if (n % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
    
    printf("even : %d \nodd : %d\n", even, odd);
    
    return 0;
}