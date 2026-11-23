#include <stdio.h>

int main() {
    FILE*filePtr;
    char filename[] = "example.txt";
    char buffer[100];  //파일 내용을 읽기 위한 버퍼

    filePtr = fopen(filename, "r");

    if (filePtr==NULL) {
        printf("파일을 열 수 없습니다: %s\n", filename);
        return 1;
    }
    //파일에서 문자열 읽기
    if(fgets(buffer,100,filePtr) != NULL) {     //fgets()함수를 사용하여 파일에서 최대 100자를 읽어 buffer에 저장
        printf("example.txt 파일에서 읽은 내용: %s", buffer);
    }
    else {
        printf("파일에서 읽기 실패.\n");
    }

    fclose(filePtr);

    return 0;
}   