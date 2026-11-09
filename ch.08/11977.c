#include <stdio.h>

int main() {
    char arr[10];
    char ch;

    for (int i=0; i<10; i++) {
        scanf(" %c ", &ch);
        arr[i] = ch;
    }
    for (int i=9; i>=0; i--) {
        printf("%c", arr[i]);
    }

    return 0;
}