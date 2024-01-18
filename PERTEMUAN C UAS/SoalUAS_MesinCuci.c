#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

// Isi Fungsi
int TurbiditiAcak();
int MenghitungRataTurbiditi(int levelKekeruhan);
void JalankanMesin(int rpm);
void MesinBerhenti();
void MengisiAir();
void BuangAirKotor();
void MengeringkanBaju();

int kekeruhanAir[] = {6, 8, 12, 18, 24, 30, 36, 42, 49};

int main() {
    srand(time(0));

    MengisiAir();
    sleep(10);

    int levelKekeruhanAir = TurbiditiAcak();
    printf("Sensor turbidimeter mendeteksi level kekeruhan air: %d NTU\n", levelKekeruhanAir);
    sleep(4);

    int rataRataKekeruhanAir = MenghitungRataTurbiditi(levelKekeruhanAir);
    printf("Rata-rata kekeruhan air: %d NTU\n", rataRataKekeruhanAir);
    sleep(4);

    JalankanMesin(rataRataKekeruhanAir);
    sleep(4);

    MesinBerhenti();
    sleep(4);

    BuangAirKotor();
    sleep(10);

    MengeringkanBaju();
    sleep(10);

    MengisiAir();
    sleep(10);

    JalankanMesin(rataRataKekeruhanAir);
    sleep(4);

    BuangAirKotor();
    sleep(10);

    MengeringkanBaju();
    sleep(10);

    printf("Selesai...\n");
    sleep(4);

    return 0;
}

int TurbiditiAcak() {
    return kekeruhanAir[rand() % 9];
}

int MenghitungRataTurbiditi(int levelKekeruhan) {
    for (int i = 0; i < 9; i++) {
        if (levelKekeruhan <= kekeruhanAir[i]) {
            return kekeruhanAir[i];
        }
    }
    return 1000;
}

void JalankanMesin(int rpm) {
    printf("Motor listrik utama berputar dengan kecepatan %d rpm\n", rpm);
}

void MesinBerhenti() {
    printf("Motor listrik utama berhenti pada setiap pertengahan waktu\n");
}

void MengisiAir() {
    printf("Pembuka klep pengisian air aktif selama 2 menit sampai air penuh\nTunggu... \n");
}

void BuangAirKotor() {
    printf("Pembuka klep pembuangan air kotor aktif selama 2 menit sampai air kotor habis\nTunggu... \n");
}

void MengeringkanBaju() {
    printf("Motor listrik utama berputar dengan kecepatan 1000 rpm untuk mengeringkan cucian selama 3 menit\nTunggu... \n");
}
