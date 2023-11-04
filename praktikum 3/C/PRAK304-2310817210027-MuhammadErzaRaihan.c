#include <stdio.h>

int main() {
    int nilai;
    char *hasil = NULL;

    
    scanf("%d", &nilai);

    if (nilai >= 100) {
        hasil = "Anda Menginput Melebihi Limit Bilangan";
    } else if (nilai <= 100 && nilai >= 20) {
        hasil = "Puluhan";
    } else if (nilai < 20 && nilai >= 10) {
        hasil = "Belasan";
    } else if (nilai <= 9 && nilai >= 1) {
        hasil = "Satuan";
    } else if (nilai == 0) {
        hasil = "Nol";
    } else {
        printf("Tidak terdefinisi\n");
        return 0;
    }

    printf("%d = %s\n", nilai, hasil);

    return 0;
}
