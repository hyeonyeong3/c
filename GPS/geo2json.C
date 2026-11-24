#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *in = fopen("gps.csv", "r");
    FILE *out = fopen("output.json", "w");

    if (in == NULL || out == NULL) {
        printf("파일 열기 실패!\n");
        return 1;
    }

    char line[256];
    double latitude, longitude;
    int speed;
    int first = 1;

    fprintf(out, "[\n");

    while (fgets(line, sizeof(line), in)) {

        if (sscanf(line, "%lf,%lf,Speed = %d",
                   &latitude, &longitude, &speed) == 3) {

            if (!first) {
                fprintf(out, ",\n");
            }

            fprintf(out,
                "  {\"latitude\": %.6f, "
                "\"longitude\": %.6f, "
                "\"info\": \"Speed = %d\"}",
                latitude, longitude, speed);

            first = 0;
        }
    }

    fprintf(out, "\n]\n");

    fclose(in);
    fclose(out);

    printf("JSON 변환 완료!\n");

    return 0;
}