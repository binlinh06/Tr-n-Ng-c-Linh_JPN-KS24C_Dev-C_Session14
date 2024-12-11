#include <stdio.h>
#include <string.h>

int main() {
    char input[] = "hello world";
    int letter_count = 0;

    printf("Chuoi da khai bao: %s\n", input);

    for (int i = 0; i < strlen(input); i++) {
        if ((input[i] >= 'A' && input[i] <= 'Z') || (input[i] >= 'a' && input[i] <= 'z')) {
            letter_count++;
        }
    }

    printf("So ky tu la chu cai trong chuoi: %d\n", letter_count);

    return 0;
}

