#include <stdio.h>

int main() {
    int count = 0;
    int n;
    
    while (1) {
        scanf("%d", &n);
        
        if (n == 0) {
            break;
        }
        
        if (n % 3 != 0 && n % 5 != 0) {
            count++;
        }
    }
    
    printf("%d\n", count);
    
    return 0;
}