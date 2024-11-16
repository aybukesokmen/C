#include <stdio.h>

// Bit Kontrol�
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
    int checkbitValue = 8;       // Bit kontrol� yap�lacak de�er
    int setbitValue = 5;         // Bit ayarlanacak de�er
    int clearbitValue = 12;      // Bit temizlenecek de�er

    // Bit kontrol� sonucunu yazd�r
    printf("checkBit (%d, bit %d): %d\n", checkbitValue, BIT_POSITION, checkBit(checkbitValue));

    // Bit ayarlama i�lemini yap ve sonucu yazd�r
    setBit(&setbitValue, 1);
    printf("setBit (bit 1): %d\n", setbitValue);

    // Bit temizleme i�lemini yap ve sonucu yazd�r
    clearBit(&clearbitValue, 2);
    printf("clearBit (bit 1): %d\n", clearbitValue);

    return 0;
}
