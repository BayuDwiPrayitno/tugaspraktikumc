#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

// Array yang berisi level kekeruhan air
int kekeruhanAir[] = {6, 8, 12, 18, 24, 30, 36, 42, 49};

void putarMotorUtama(int rpm) {
    printf("Motor listrik utama berputar dengan kecepatan %d rpm\n", rpm);
}

void bukaKlepPengisianAir() {
    printf("Pembuka klep pengisian air aktif selama 2 menit sampai air penuh\nTunggu... \n");
}

void bukaKlepPembuanganAirKotor() {
    printf("Pembuka klep pembuangan air kotor aktif selama 2 menit sampai air kotor habis\nTunggu... \n");
}

void keringkanCucian() {
    printf("Motor listrik utama berputar dengan kecepatan 2000 rpm untuk mengeringkan cucian selama 3 menit\nTunggu... \n");
}

int main() {
    int levelKekeruhanAir;
    int i;

    srand(time(0));
    levelKekeruhanAir = kekeruhanAir[rand() % 9];

    printf("Sensor turbidimeter mendeteksi level kekeruhan air: %d NTU\n", levelKekeruhanAir);
    sleep(2);

    int rataRataKekeruhanAir = 1000;

    for (i = 0; i < 9; i++) {
        if (levelKekeruhanAir <= kekeruhanAir[i]) {
            rataRataKekeruhanAir = kekeruhanAir[i];
            break;
        }
    }

    printf("Rata-rata kekeruhan air: %d NTU\n", rataRataKekeruhanAir);
    sleep(2);

    putarMotorUtama(rataRataKekeruhanAir);
    sleep(2);

    printf("Motor listrik utama berhenti pada setiap pertengahan waktu\n");
    sleep(2);

    bukaKlepPembuanganAirKotor();
    sleep(10);

    keringkanCucian();
    sleep(10);

    bukaKlepPengisianAir();
    sleep(10);

    printf("Motor listrik utama berputar selama sisa waktu mencuci\n");
    sleep(2);

    bukaKlepPembuanganAirKotor();
    sleep(10);

    keringkanCucian();
    sleep(10);

    printf("Selesai...\n");
    sleep(2);

    return 0;
}
