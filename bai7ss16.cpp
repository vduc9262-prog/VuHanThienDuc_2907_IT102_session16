#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

int main() {
    char chuoi[] = "to truong to toi 18 tuoi ngay nao toi cung phai xe di hoc cay that @@";
    int chu_cai = 0, chu_so = 0, ky_tu_dac_biet = 0;
    
    for (int i = 0; i < strlen(chuoi); i++) {
        if (isalpha(chuoi[i])) {
            chu_cai++;
        }
        else if (isdigit(chuoi[i])) {
            chu_so++;
        }
        else if (chuoi[i] != ' ') {
            ky_tu_dac_biet++;
        }
    }
    
    printf("So ky tu la chu cai: %d\n", chu_cai);
    printf("So ky tu la chu so: %d\n", chu_so);
    printf("So ky tu dac biet: %d\n", ky_tu_dac_biet);
    
    return 0;
}

