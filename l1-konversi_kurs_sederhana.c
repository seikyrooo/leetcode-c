// Pseudocode
// read rupiah, kurs
// usd ← rupiah / kurs
// print usd (2 desimal)

#include <stdio.h>

int main() {
    unsigned long rupiah;

    // kurs usd saat ini = 16.462,00
    const double kurs_usd = 16462.0;

    printf("Masukan Rupiah : ");
    if (scanf("%ld", &rupiah) != 1) {
        puts("Input tidak valid");
        return 1;
    }

    if (kurs_usd <= 0.0) {
        puts("Kurs tidak valid");
        return 1;
    }

    double usd = (double) rupiah / kurs_usd;
    printf("Hasil konversi Rp. %lu ke USD (kurs %.2f) = %.2f USD\n", rupiah, kurs_usd, usd);
}