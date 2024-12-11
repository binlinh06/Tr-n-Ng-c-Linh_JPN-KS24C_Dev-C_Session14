#include <stdio.h>
#include <string.h>

int main() {
    char input[] = "HelloWorld";
    char character;
    int count = 0;

    printf("Chuoi da khai bao: %s\n", input);

    printf("Nhap vao mot ky tu bat ky: ");
    scanf(" %c", &character);

    for (int i = 0; i < strlen(input); i++) {
        if (input[i] == character) {
            count++;
        }
    }

    printf("Ky tu '%c' xuat hien %d lan trong chuoi.\n", character, count);

    return 0;
}
