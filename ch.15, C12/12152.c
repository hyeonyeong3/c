#include <stdio.h>

struct Person {
    char name[21];
    int score;
};

int main() {
    struct Person p[5];
    int max = 0;

    for(int i=0; i<5; i++){
        scanf("%s %d\n", p[i].name, &p[i].score);
        if (p[i].score > p[max].score){
            max = i;
        }
    }
    printf("%s %d", p[max].name, p[max].score);
    return 0;
}