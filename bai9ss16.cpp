#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
    char chuoi[] = "an nhau khong o cai hoc thuc, an nhau o nhung pha can hai ";
    char kytu;
    int i, j;
    
    printf("Chuoi ban dau: %s\n", chuoi);
    printf("Nhap ky tu can xoa: ");
    scanf("%c", &kytu);
    
    for (i = 0; i < strlen(chuoi); i++) {
        if (chuoi[i] == kytu) {
            for (j = i; j < strlen(chuoi); j++) {
                chuoi[j] = chuoi[j + 1];
            }
            chuoi[j - 1] = '\0';
            i--;
        }
    }
    
    printf("Chuoi sau khi xoa: %s\n", chuoi);
    
    return 0;
}

