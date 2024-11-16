#include <stdio.h>

int main() {
    // De�i�ken tan�mlamalar�
    int num;
    float decimal;
    double bigDecimal;
    char letter;
    char name[50];  // String i�in karakter dizisi

    // Kullan�c�dan int veri alma
    printf("Enter an integer value: ");
    scanf("%d", &num); // %d format belirleyici, int t�r� i�in

    // Kullan�c�dan float veri alma
    printf("Enter a float value: ");
    scanf("%f", &decimal); // %f format belirleyici, float t�r� i�in

    // Kullan�c�dan double veri alma
    printf("Enter a double value: ");
    scanf("%lf", &bigDecimal); // %lf format belirleyici, double t�r� i�in

    // Kullan�c�dan char veri alma
    printf("Enter a character: ");
    scanf(" %c", &letter); // %c format belirleyici, char t�r� i�in
    // Bo�luk (" ") kullan�lmas� �nceki girdilerin etkisini �nler.

    // Kullan�c�dan string veri alma
    printf("Enter your name: ");
    scanf("%s", name); // %s format belirleyici, string i�in
    // %s bo�luk karakterine kadar olan k�sm� al�r.

    // Girilen verileri ekrana yazd�rma
    printf("\nYou entered:\n");
    printf("Integer: %d\n", num);
    printf("Float: %.2f\n", decimal);
    printf("Double: %lf\n", bigDecimal);
    printf("Character: %c\n", letter);
    printf("Name: %s\n", name);

    return 0;
}
