// read kwh
// tagihan ← kwh * 1500
// if kwh > 50 then tagihan ← tagihan + 10000
// print tagihan

#include <stdio.h>

int main() {
    int kwh;

    printf("Masukan pengguaan kwh : ");
    if (scanf("%d", &kwh) != 1) {puts("Input tidak valid"); return 1; }

    double tagihan = kwh * 1500;

    if (kwh > 50) tagihan += 10000;

    printf("Total Tagihan listrik anda adalah : Rp %.2f", tagihan);

    return 0;
}