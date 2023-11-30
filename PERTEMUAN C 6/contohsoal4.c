#include <stdio.h>

int main() {
    // Kecepatan sepeda dalam meter per detik
    int kecepatan = 2;

    // Waktu dalam detik
    int waktu = 100;

    // Menghitung jarak yang ditempuh
    int jarak = kecepatan * waktu;

    // Menampilkan hasil
    printf("Jarak yang ditempuh setelah %d detik adalah %d meter.\n", waktu, jarak);

    return 0;
}

