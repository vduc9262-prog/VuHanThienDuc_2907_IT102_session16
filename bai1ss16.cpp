#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
    char chuoi[100];
    
    printf("Nhap vao mot chuoi bat ky: ");
    scanf("%100[^\n]", chuoi);
    
    printf("Chuoi vua nhap: %s\n", chuoi);
    printf("Do dai chuoi: %d\n", strlen(chuoi));
    
    return 0;
}

