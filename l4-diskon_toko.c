// read total
// if total >= 100000 then bayar ← total * 0.9
// else bayar ← total
// print bayar (dibulatkan ke int)

#include <stdio.h>

int main() {
    int total;
    printf("Masukan Total Belanja : ");
    if (scanf("%d", &total) != 1) {puts("Input tidak valid"); return 1; }

    total = (total >= 100000) ? total * 0.9 : total;

    printf("Total Yang harus anda bayar adalah : Rp. %d", total);
}