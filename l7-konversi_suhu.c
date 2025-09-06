// read C
// F ← (9.0/5.0) * C + 32
// K ← C + 273.15
// print F (2 desimal), K (2 desimal)

#include <stdio.h>

int main() {
    float c, f, k;

    printf("Masukan Suhu Celcius : ");
    scanf("%f", &c);

    f = (9.0/5.0) * c + 32;
    k = c + 273.15;

    printf("Hasil konversi Suhu %.2f C adalah:\nFahrenheit : %.2f\nKelvin : %.2f", c, f, k);
}