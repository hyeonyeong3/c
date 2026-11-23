#include <stdio.h>
#include <string.h>

struct Score {
    char name[20];
    int kor;
    int eng;
};

struct Score plus(struct Score x, struct Score y){
    struct Score total;
    strcpy(total.name, "Total");
    total.kor = x.kor + y.kor;
    total.eng = x.eng + y.eng;
    return total;
}