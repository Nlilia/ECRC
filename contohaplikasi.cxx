#include <stdio.h>

float tambah(float a, float b) {
    return a + b; //bentuk operasi
} //ini merupakan fungsi 

float kurang(float a, float b) {
    return a - b;
}

float kali(float a, float b) {
    return a * b;
}

float bagi(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        printf(" Pembagi tidak boleh nol.\n");
        return 0;
    }
}

int main() {
    int pilihan; //variabel bertipe data int
    float angka1, angka2; //variabel bertipe data float
    char lanjutkan = 'y'; //variabel bertipe data char

    while (lanjutkan == 'y' || lanjutkan == 'Y') { //merupakan looping
        printf("Pilih operasi:\n");
        printf("1. Tambah\n");
        printf("2. Kurang\n");
        printf("3. Kali\n");
        printf("4. Bagi\n");
        printf("Masukkan pilihan (1-4): ");
        scanf("%d", &pilihan);

        
        printf("Masukkan angka pertama: "); //bentuk output
        scanf("%f", &angka1); //bentuk input
        printf("Masukkan angka kedua: ");
        scanf("%f", &angka2);

        // Switch-case 
        switch (pilihan) {
            case 1:
                printf("%.2f + %.2f = %.2f\n", angka1, angka2, tambah(angka1, angka2));
                break;
            case 2:
                printf("%.2f - %.2f = %.2f\n", angka1, angka2, kurang(angka1, angka2));
                break;
            case 3:
                printf("%.2f * %.2f = %.2f\n", angka1, angka2, kali(angka1, angka2));
                break;
            case 4:
                printf("%.2f / %.2f = %.2f\n", angka1, angka2, bagi(angka1, angka2));
                break;
            default:
                printf("Pilihan tidak valid!\n");
        }

        printf("Apakah Anda ingin melanjutkan? (y/n): ");
        scanf(" %c", &lanjutkan);
    }

    printf("Terima kasih telah menggunakan kalkulator!\n");
    return 0;
}