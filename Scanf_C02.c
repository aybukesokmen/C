#include <stdio.h>

int main() {
    // Deðiþken tanýmlamalarý
    int num;
    float decimal;
    double bigDecimal;
    char letter;
    char name[50];  // String için karakter dizisi

    // Kullanýcýdan int veri alma
    printf("Enter an integer value: ");
    scanf("%d", &num); // %d format belirleyici, int türü için

    // Kullanýcýdan float veri alma
    printf("Enter a float value: ");
    scanf("%f", &decimal); // %f format belirleyici, float türü için

    // Kullanýcýdan double veri alma
    printf("Enter a double value: ");
    scanf("%lf", &bigDecimal); // %lf format belirleyici, double türü için

    // Kullanýcýdan char veri alma
    printf("Enter a character: ");
    scanf(" %c", &letter); // %c format belirleyici, char türü için
    // Boþluk (" ") kullanýlmasý önceki girdilerin etkisini önler.

    // Kullanýcýdan string veri alma
    printf("Enter your name: ");
    scanf("%s", name); // %s format belirleyici, string için
    // %s boþluk karakterine kadar olan kýsmý alýr.

    // Girilen verileri ekrana yazdýrma
    printf("\nYou entered:\n");
    printf("Integer: %d\n", num);
    printf("Float: %.2f\n", decimal);
    printf("Double: %lf\n", bigDecimal);
    printf("Character: %c\n", letter);
    printf("Name: %s\n", name);

    return 0;
}
