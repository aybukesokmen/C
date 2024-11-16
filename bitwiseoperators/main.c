#include <stdio.h>

// Bit Kontrolü
#define BIT_POSITION 3

// Bit kontrol fonksiyonu
int checkBit(int value) {
    return (value & (1 << BIT_POSITION)) != 0;
}

// Bit Ayarlama (Set Bit) fonksiyonu
void setBit(int *value, int position) {
    *value |= (1 << position);
}

// Bit Temizleme (Clear Bit) fonksiyonu
void clearBit(int *value, int position) {
    *value &= ~(1 << position);
}

void toggleBit(int *value, int position) {
    *value ^= (1 << position);
}


int main() {
    int checkbitValue = 8;       // Bit kontrolü yapýlacak deðer
    int setbitValue = 5;         // Bit ayarlanacak deðer
    int clearbitValue = 12;      // Bit temizlenecek deðer

    // Bit kontrolü sonucunu yazdýr
    printf("checkBit (%d, bit %d): %d\n", checkbitValue, BIT_POSITION, checkBit(checkbitValue));

    // Bit ayarlama iþlemini yap ve sonucu yazdýr
    setBit(&setbitValue, 1);
    printf("setBit (bit 1): %d\n", setbitValue);

    // Bit temizleme iþlemini yap ve sonucu yazdýr
    clearBit(&clearbitValue, 2);
    printf("clearBit (bit 1): %d\n", clearbitValue);

    return 0;
}
