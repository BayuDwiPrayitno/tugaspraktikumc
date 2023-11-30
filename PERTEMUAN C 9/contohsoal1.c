#include <stdio.h>

int main() {
    // Mendefinisikan array dengan ukuran 11
    int A[11] = {12, 17, 10, 5, 15, 25, 11, 7, 25, 16, 19};

    // Menginput nilai N
    int N;
    printf("Masukkan nilai integer N: ");
    scanf("%d", &N);

    // Mencari nilai N dalam array
    int index = -1; // Inisialisasi indeks dengan -1 (tidak ditemukan)
    for (int i = 0; i < 11; i++) {
        if (A[i] == N) {
            index = i; // Menyimpan indeks jika nilai ditemukan
            break;     // Keluar dari loop setelah nilai ditemukan
        }
    }

    // Menampilkan hasil pencarian
    if (index != -1) {
        printf("ADA, ditemukan pada indeks %d\n", index);
    } else {
        printf("TIDAK ADA\n");
    }

    return 0;
}
