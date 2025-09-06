// read masuk, keluar
// durasi ← keluar - masuk
// if durasi <= 2 then biaya ← 3000
// else biaya ← 3000 + (durasi - 2) * 1000
// print biaya

#include <stdio.h>

int main() {
    int masuk, keluar;
    printf("Masukan jam masuk dan keluar dengan format int Contoh (8 10) : ");
    if (scanf("%d %d", &masuk, &keluar) != 2) {puts("Input tidak valid"); return 1; }

    if (keluar < masuk) {puts("Jam Keluar harus lebih kecil daripada jam masuk"); return 1;}

    int durasi = keluar - masuk;

    int biaya = (durasi <= 2) ? 3000 : 3000 + (durasi - 2 ) * 1000;
    // if (durasi <= 2) {
    //     biaya = 3000;
    // }else {
    //     biaya = 3000 + (durasi - 2) * 1000;
    // }
    printf("Biaya Parkir anda adalah : Rp. %d\n", biaya);
    return 0;
}