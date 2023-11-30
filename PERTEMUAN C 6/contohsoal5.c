#include <stdio.h>

int main() {
    // Jumlah uang awal
    double jumlah_uang = 1000000.0;

    // Persentase bunga per bulan
    double bunga_per_bulan = 0.02;

    // Menghitung jumlah uang setelah 10 bulan
    for (int bulan = 1; bulan <= 10; bulan++) {
        // Menghitung bunga untuk bulan ini
        double bunga = jumlah_uang * bunga_per_bulan;

        // Menambahkan bunga ke jumlah uang
        jumlah_uang += bunga;

        // Menampilkan jumlah uang setelah bulan ini
        printf("Bulan %d: Rp. %.2f\n", bulan, jumlah_uang);
    }

    return 0;
}
