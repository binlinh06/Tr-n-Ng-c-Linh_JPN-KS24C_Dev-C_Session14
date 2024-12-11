#include <stdio.h>
#include <string.h>

int main() {
    char input[] = "HelloWorld";

    printf("Chuoi da khai bao: %s\n", input);
    printf("Cac ky tu trong chuoi:\n");

    for (size_t i = 0; i < strlen(input); i++) {
        printf("%c", input[i]);
        if (i < strlen(input) - 1) {
            printf(" ");
        }
    }

    printf("\n");

    return 0;
}
