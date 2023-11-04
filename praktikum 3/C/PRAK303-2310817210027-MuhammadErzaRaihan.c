#include <stdio.h>

int main() {
    int nilai;
    char *hasil = NULL;

    scanf("%d", &nilai);

    if (nilai > 0) {
        hasil = "positif";
    } else if (nilai < 0) {
        hasil = "negatif";
    } else if (nilai == 0) {
        hasil = "nol";
    } else {
        printf("Errawrr :(\n");
    
    }

    printf("%s\n", hasil);

    return 0;
}
