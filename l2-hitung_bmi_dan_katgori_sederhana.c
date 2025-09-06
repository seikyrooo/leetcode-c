// read berat, tinggi_cm
// tinggi_m ← tinggi_cm / 100
// bmi ← berat / (tinggi_m * tinggi_m)
// if bmi < 18.5 then status ← "Kurus"
// else if bmi <= 24.9 then status ← "Normal"
// else status ← "Gemuk"
// print bmi (2 desimal), status

#include <stdio.h>
#include <math.h>
#include <string.h>


int main () {
    double berat_kg, tinggi_cm;

    printf("Masukan Berat Badan Anda (KG) : ");
    if (scanf("%lf", &berat_kg) != 1) {puts("Input tidak valid"); return 1; }

    printf("Masukan Tinggi Badan Anda (CM) : ");
    if (scanf("%lf", &tinggi_cm)!= 1){puts("Input tidak valid"); return 1; }

    double tinggi_m = tinggi_cm / 100.0;
    if (tinggi_m <= 0) {puts("Tinggi tidak boleh nol/negatif"); return 1; }

    double bmi = berat_kg / (tinggi_m * tinggi_m);

    const char *status;
    if (bmi < 18.5)  status = "Kurus";
    else if (bmi <= 24.9) status = "Normal";
    else status = "Gemuk";

    printf("Skor BMI Anda = %.2f (%s)\n", bmi, status);

    return 0;
}
