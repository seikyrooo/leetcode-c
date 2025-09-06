// read C
// F ← (9.0/5.0) * C + 32
// K ← C + 273.15
// print F (2 desimal), K (2 desimal)

#include <stdio.h>

int main() {
    double c;

    printf("Masukan Suhu Celcius : ");
    if (scanf("%lf", &c) != 1) {puts("Input tidak valid"); return 1; }

    double f = (9.0/5.0) * c + 32;
    double k = c + 273.15;

    printf("Hasil konversi Suhu %.2f C adalah:\nFahrenheit : %.2f\nKelvin : %.2f", c, f, k);
}