#include <stdio.h>

int main() {
    int bilangan, n;
    float hasil, hasil2;

    // Input bilangan bulat positif
    printf("Masukkan sebuah bilangan bulat positif: ");
    scanf("%d", &bilangan);

    // Periksa apakah bilangan adalah ganjil atau genap

     if (bilangan > 50) {
        hasil = bilangan - 25;
        printf("Bilangan lebih besar: %f", hasil);
    } else {
        hasil = bilangan + 10;
        printf("Bilangan lebih kecil: %f", hasil);
    }

    return 0;
}
