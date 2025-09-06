// read masuk, keluar
// durasi ← keluar - masuk
// if durasi <= 2 then biaya ← 3000
// else biaya ← 3000 + (durasi - 2) * 1000
// print biaya

#include <stdio.h>
#include <time.h>

int main() {
    int masuk, keluar, durasi;
    long biaya;
    printf("Masukan jam masuk dan keluar dengan format int Contoh (8 10) : ");
    scanf("%d %d", &masuk, &keluar);
    durasi = keluar - masuk;
    if (durasi <= 2) {
        biaya = 3000;
    }else {
        biaya = 3000 + (durasi - 2) * 1000;
    }
    printf("Biaya Parkir anda adalah : Rp. %ld", biaya);
    return 0;
}