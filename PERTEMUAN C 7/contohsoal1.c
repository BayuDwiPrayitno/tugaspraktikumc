#include <stdio.h>

int main() {
    // Mendefinisikan array untuk menyimpan nilai mahasiswa
    int nilai_mahasiswa[10];

    // Menginput nilai mahasiswa
    printf("Masukkan 10 nilai mahasiswa:\n");
    for (int i = 0; i < 10; i++) {
        printf("Nilai mahasiswa ke-%d: ", i + 1);
        scanf("%d", &nilai_mahasiswa[i]);
    }

    // Mencetak daftar nilai mahasiswa yang lulus
    printf("\nDaftar nilai mahasiswa yang lulus:\n");
    for (int i = 0; i < 10; i++) {
        if (nilai_mahasiswa[i] >= 60) {
            printf("Nilai mahasiswa ke-%d: %d\n", i + 1, nilai_mahasiswa[i]);
        }
    }

    return 0;
}
