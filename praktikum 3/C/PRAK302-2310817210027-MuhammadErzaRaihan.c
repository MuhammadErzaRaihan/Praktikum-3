#include <stdio.h>

int main() {
    int nilai;
    char hasil;

    printf(" ");
    scanf("%d", &nilai);

    if (nilai > 80) {
        hasil = 'A';
    } else if (nilai <= 79 & nilai > 70) {
        hasil = 'B';
    } else if (nilai <= 69 & nilai > 60) {
        hasil = 'C';
    } else if (nilai <= 59 & nilai >= 50) {
        hasil = 'D';
    } else if (nilai < 50 & nilai > 0) {
        hasil = 'E';
    } else {
        printf("Tidak Terdefinisi\n");
        return 0;
    }

    printf(" %d = %c\n", nilai, hasil);

    return 0;
}
