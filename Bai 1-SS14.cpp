#include <stdio.h>
#include <string.h>

int main() {
    char input[1000];
    printf("Nhap vao mot chuoi bat ki: ");
    fgets(input, sizeof(input), stdin);
    printf("Chuoi ban vua nhap: %s\n", input);
    printf("Ðo dai cua chuoi: %d\n",strlen(input)-1);
    return 0;
}
