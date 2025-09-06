// read total
// if total >= 100000 then bayar ← total * 0.9
// else bayar ← total
// print bayar (dibulatkan ke int)

#include <stdio.h>

int main() {
    int total;
    printf("Masukan Total Belanja : ");
    scanf("%d", &total);

    if (total >= 100000) {
        total = total * 0.9;
    }
    printf("Total Yang harus anda bayar adalah : Rp. %d", total);
}