// read subtotal, orang
// total ← subtotal + (0.05 * subtotal)
// per ← total / orang
// per_bulat ← ceil(per)
// print per_bulat

#include <math.h>
#include <stdio.h>

int main() {
    int subtotal, orang;

    printf("Masukan subtotal dan jumlah orang : ");
    if (scanf("%d %d", &subtotal, &orang) != 2) {puts("Input tidak valid"); return 1; }\
    if (orang <= 0) {puts("Jumlah orang harus > 0"); return 1; }

    double total = subtotal * 1.05;
    double per = total / orang;
    int per_bulat = (int)ceil(per);

    printf("Setiap orang membayar : Rp. %d\n", per_bulat);
}