#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[100];
    printf ("nhap chuoi: ");
    scanf ("%s",&chuoi);
    int count[256] = {0}; 
    
    for (int i = 0; i < strlen(chuoi); i++) {
        count[chuoi[i]]++;
    }
    for (int i = 0; i < 256; i++) {
        if (count[i] > 0) {
            printf("%c: %d\n", i, count[i]);
        }
    }

    return 0;
}

