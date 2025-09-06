// read subtotal, orang
// total ← subtotal + (0.05 * subtotal)
// per ← total / orang
// per_bulat ← ceil(per)
// print per_bulat

#include <math.h>
#include <stdio.h>

int main() {
    int subtotal, orang, split_bill_bulat;
    float split_bill;

    printf("Masukan subtotal dan jumlah orang : ");
    scanf("%d %d", &subtotal, &orang);

    float total = (float)subtotal + (0.05 * subtotal);
    split_bill = total / orang;
    split_bill_bulat = ceil(split_bill);

    printf("Hasil perhitungan split bill perorang membayar : Rp. %d", split_bill_bulat);
}