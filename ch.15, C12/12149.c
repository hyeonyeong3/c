#include <stdio.h>

struct School {
    char scname[31];
    int grade;
};

int main() {
    struct School s = {"Jejuelementary", 6};
    struct School sc;

    scanf("%s %d", sc.scname, &sc.grade);

    printf("%d grade in %s School\n", s.grade, s.scname);
    printf("%d grade in %s School\n", sc.grade, sc.scname);
}