#include <stdio.h>

int main() {
    int small=0;
    int large=0;
    while(1) {
        int a;
        scanf("%d",&a);
        

        if (a>0 && a<100) {
            if (a>=50) {
                large += 1;
            }
            else {
                small += 1;
            }
        }
        else {
            large +=1;
            break;
        }
    }
    printf("small : %d\n", small);
    printf("large : %d\n", large);

    return 0;
}