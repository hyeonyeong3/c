#include <stdio.h>
#include <string.h>

struct Person{
    char name[21];
    int height;
    double weight;
};

int main() {
    struct Person p[5];
    struct Person temp;

    for(int i=0; i<5; i++){
        scanf("%s %d %lf", p[i].name, &p[i].height, &p[i].weight);
    }
    for(int i=0; i<4; i++){
        int min = i;
        for(int j=i+1; j<5; j++){
            if(strcmp(p[j].name, p[min].name) < 0){
                min = j;
            }
        }
        temp = p[i];
        p[i] = p[min];
        p[min] = temp;
    }
    for(int i=0; i<5; i++){
        printf("%s %d %.1lf\n", p[i].name, p[i].height, p[i].weight);
    }
    return 0;
}