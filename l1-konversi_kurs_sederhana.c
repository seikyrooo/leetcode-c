// Pseudocode
// read rupiah, kurs
// usd ← rupiah / kurs
// print usd (2 desimal)

#include <stdio.h>

int main() {
    long rupiah;

    // kurs usd saat ini = 16.462,00
    float kurs_usd = 16462;

    printf("Masukan Rupiah : ");
    scanf("%ld", &rupiah);

    float hasil_usd = (float) rupiah / kurs_usd;
    printf("Hasil konversi Rp. %ld ke USD dengan kurs %.2f adalah %.2f USD", rupiah,kurs_usd, hasil_usd);
}