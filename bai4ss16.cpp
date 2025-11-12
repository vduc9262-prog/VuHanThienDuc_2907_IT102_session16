#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
    char chuoi[] = "Hoc lap trinh la phai cham chi ";
    char kytu;
    int dem = 0;
    
    printf("Nhap ky tu can dem: ");
    scanf("%c", &kytu);
    
    for (int i = 0; i < strlen(chuoi); i++) {
        if (chuoi[i] == kytu) {
            dem++;
        }
    }
    
    printf("So lan xuat hien: %d\n", dem);
    
    return 0;
}

