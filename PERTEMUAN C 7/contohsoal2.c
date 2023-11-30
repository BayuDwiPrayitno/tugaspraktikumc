#include <stdio.h>

int main() {
    // Mendefinisikan array dengan ukuran 11
    int A[11];

    // Data yang ada dalam dokumen
    int data_dokumen[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35};

    // Menginput data dan menyimpannya ke dalam array A
    int j = 0; // Indeks array A
    for (int i = 0; i < sizeof(data_dokumen) / sizeof(data_dokumen[0]); i++) {
        if (data_dokumen[i] % 5 == 0 || data_dokumen[i] % 3 == 0) {
            A[j] = data_dokumen[i];
            j++;
        }
    }

    // Mencetak isi array A
    printf("Isi array A:\n");
    for (int i = 0; i < j; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}
