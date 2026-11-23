#include <stdio.h>

struct Point{
    double x; 
    double y;
};

int main() {
    struct Point p1, p2, center;

    scanf("%lf %lf", &p1.x, &p1.y);
    scanf("%lf %lf", &p2.x, &p2.y);

    center.x = (p1.x+p2.x) / 2;
    center.y = (p1.y+p2.y) / 2;

    printf("Center point = (%.1lf, %.1lf)", center.x, center.y);
}