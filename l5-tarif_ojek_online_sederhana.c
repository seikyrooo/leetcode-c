// read biaya_awal, biaya_per_km, jarak
// total ← biaya_awal + (biaya_per_km * jarak)
// total_bulat ← ceil(total)   // boleh dengan trik (int)(total + 0.9999)
// print total_bulat

#include <math.h>
#include <stdio.h>

int main() {
    int biaya_awal, biaya_per_km;
    float jarak_km;

    printf("Masukan Biaya awal, biaya per km dan jarak km : ");
    if (scanf("%d %d %f", &biaya_awal, &biaya_per_km, &jarak_km) != 3) {puts("Input tidak valid"); return 1; }

    double total = biaya_awal + biaya_per_km * jarak_km;
    int total_bulat = (int)ceil(total);

    printf("Total Harga adalah : Rp. %d", total_bulat);

    return 0;
}