#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

int main() {
    char chuoi[] = "chung toi don gian la gau we bare bears ";
    int i;
    
    if (chuoi[0] != '\0') {
        chuoi[0] = toupper(chuoi[0]);
    }
    
    for (i = 1; i < strlen(chuoi); i++) {
        if (chuoi[i-1] == ' ' && chuoi[i] != ' ') {
            chuoi[i] = toupper(chuoi[i]);
        }
    }
    
    printf("Chuoi sau khi viet hoa chu cai dau: %s\n", chuoi);
    
    return 0;
}

