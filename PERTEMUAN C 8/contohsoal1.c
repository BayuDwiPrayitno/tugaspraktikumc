#include <stdio.h>

int main() {
    // Mendefinisikan array dengan ukuran 11
    int A[11];
    int n = 0; // Jumlah elemen yang sudah diisi

    // Data dalam dokumen
    int data_dokumen[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35, 28, 14, 11, 999};

    // Menginput data dan menyimpannya ke dalam array A
    for (int i = 0; i < sizeof(data_dokumen) / sizeof(data_dokumen[0]); i++) {
        A[n] = data_dokumen[i];
        n++;
        if (data_dokumen[i] == 999) {
            break; // Menghentikan input jika bertemu dengan nilai 999
        }
    }

    // Menampilkan isi array A
    printf("Isi array A:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}
