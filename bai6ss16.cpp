#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

int main() {
    char chuoi[] = "Lap trinh C khong kho chi do ta chx du cham chi !";
    int dem = 0;
    
    for (int i = 0; i < strlen(chuoi); i++) {
        if (isalpha(chuoi[i])) {
            dem++;
        }
    }
    
    printf("So ky tu la chu cai: %d\n", dem);
    
    return 0;
}

