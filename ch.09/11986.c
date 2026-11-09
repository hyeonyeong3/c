#include <stdio.h>

int main() {
    int arr[26] = {0};
    int ch;

    while(1) {
        ch = getchar();

        if(ch >= 'A' && ch <= 'Z') {
            arr[ch - 'A']++;
        }
        else if (ch == ' ') {
            continue;
        }
        else {
            break;
        }
    }

    for(int i=0; i<26; i++) {
        if(arr[i] > 0) {
            printf("%c : %d\n", i + 'A', arr[i]);
        }
    }

    return 0;
}

