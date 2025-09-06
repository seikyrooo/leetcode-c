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
    float berat_kg, tinggi_cm, tinggi_m, bmi;
    char status[20];

    printf("Masukan Berat Badan Anda (KG) : ");
    scanf("%f", &berat_kg);

    printf("Masukan Tinggi Badan Anda (CM) : ");
    scanf("%f", &tinggi_cm);

    tinggi_m = (float)tinggi_cm / 100;
    bmi = (float)berat_kg / (tinggi_m * tinggi_m);


    if (bmi < 18.5) {
        strcpy(status, "Kurus");
    }else if (bmi <= 24.9) {
        strcpy(status, "Normal");
    } else {
        strcpy(status, "Gemuk");
    }

    printf("Skor BMI Anda adalah %.2f, dengan Status %s", bmi, status);

    return 0;
}
