// read kwh
// tagihan ← kwh * 1500
// if kwh > 50 then tagihan ← tagihan + 10000
// print tagihan

#include <stdio.h>

int main() {
    int kwh, tagihan;

    printf("Masukan pengguaan kwh : ");
    scanf("%d", &kwh);

    tagihan = kwh * 1500;

    if (kwh > 50) {
        tagihan += 10000;
    }

    printf("Total Tagihan listrik anda adalah : Rp %d", tagihan);

    return 0;
}