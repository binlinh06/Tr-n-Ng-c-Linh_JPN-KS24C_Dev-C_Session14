#include <stdio.h>
#include <string.h>

int main() {
    char input[] = "hello world";
    int word_count = 0;
    int in_word = 0;

    printf("Chuoi da khai bao: %s\n", input);

    for (int i = 0; i < strlen(input); i++) {
        if (input[i] != ' ' && input[i] != '\t' && input[i] != '\n') {
            if (!in_word) {
                in_word = 1;
                word_count++;
            }
        } else {
            in_word = 0;
        }
    }

    printf("So tu trong chuoi: %d\n", word_count);

    return 0;
}
