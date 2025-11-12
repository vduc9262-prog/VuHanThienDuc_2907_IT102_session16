#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
    char chuoi[] = "Xin chao cac ban";

    for (int i = 0; i < strlen(chuoi); i++) {
        printf("%c ", chuoi[i]);
    }
    printf("\n");

    return 0;
}

