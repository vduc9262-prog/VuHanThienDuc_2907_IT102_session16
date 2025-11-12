#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
    char chuoi[] = "tinh hinh la hom nay oai qua cha hoc dc nhieu haizzz";
    int da_xuat_hien[256] = {0};
    int i;
    
    printf("Chuoi: %s\n\n", chuoi);
    printf("Ky tu - So lan xuat hien\n");
    
    for (i = 0; i < strlen(chuoi); i++) {
        unsigned char kytu = chuoi[i];
        da_xuat_hien[kytu]++;
    }
    
    for (i = 0; i < 256; i++) {
        if (da_xuat_hien[i] > 0) {
            if (i == ' ') {
                printf("' '   - %d\n", da_xuat_hien[i]);
            } else {
                printf("'%c'   - %d\n", i, da_xuat_hien[i]);
            }
        }
    }
    
    return 0;
}

