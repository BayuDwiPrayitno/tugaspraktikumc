#include <stdio.h>

int main() {
    // Mendefinisikan array dengan ukuran 10
    char A[10] = {'S', 'T', 'T', 'M', 'A', 'N', 'D', 'A', 'L', 'A'};

    // Menginput karakter C
    char C;
    printf("Masukkan karakter C: ");
    scanf(" %c", &C);  // Spasi sebelum %c untuk mengabaikan whitespace dan newline sebelumnya

    // Mencari karakter C dalam array
    int count = 0; // Inisialisasi hitungan karakter dengan 0
    for (int i = 0; i < 10; i++) {
        if (A[i] == C) {
            count++; // Meningkatkan hitungan karakter jika karakter ditemukan
        }
    }

    // Menampilkan hasil pencarian
    if (count > 0) {
        printf("ADA, karakter '%c' ditemukan sebanyak %d kali.\n", C, count);
    } else {
        printf("TIDAK ADA\n");
    }

    return 0;
}
