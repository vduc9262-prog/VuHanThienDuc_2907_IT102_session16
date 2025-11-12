#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
    char chuoi[] = "Lap trinh C rat thu vi va bo ich khi ta dam me no ";
    int dem = 0;
    int i;
    
    if (strlen(chuoi) > 0 && chuoi[0] != ' ') {
        dem = 1;
    }
    
    for (i = 0; i < strlen(chuoi); i++) {
        if (chuoi[i] == ' ' && chuoi[i+1] != ' ' && chuoi[i+1] != \0) {
            dem++;
        }
    }
    
    printf("So tu trong chuoi: %d\n", dem);
    
    return 0;
}

