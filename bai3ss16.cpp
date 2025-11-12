#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
    char chuoi[] = "Phai lam sao a Phai chiu";
    int n = strlen(chuoi);
    
    for (int i = n - 1; i >= 0; i--) {
        printf("%c", chuoi[i]);
    }
    printf("\n");
    
    return 0;
}

