#include <stdio.h>

struct Person {
    char name[21];
    int tall;
};

int main() {
    struct Person p[5];
    int min = 0;
    for(int i=0; i<5; i++){
        scanf("%s %d", p[i].name, &p[i].tall);
        if (p[i].tall<p[min].tall){
            min = i;
        }
    }

    printf("%s %d", p[min].name, p[min].tall);
    return 0;
}