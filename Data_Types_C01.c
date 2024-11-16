#include <stdio.h>

int main() {
    // Veri t�rlerinin tan�mlanmas�
    int num = 42;                 // 4 bytes
    double bigDecimal = 3.14159265359; // 8 bytes
    float smallDecimal = 3.14f;   // 4 bytes
    char letter = 'A';            // 1 byte

    /*
    Format belirleyiciler ve veri t�rleri:
    %d -> int (4 bytes)
    %lf -> double (8 bytes)
    %f -> float (4 bytes)
    %c -> char (1 byte)
    */

    // De�i�kenlerin de�erlerini ve veri t�rlerini yazd�rma
    printf("Integer (int - 4 bytes)     | Value: %d\n", num);
    printf("Double (double - 8 bytes)   | Value: %lf\n", bigDecimal);
    printf("Float (float - 4 bytes)     | Value: %f\n", smallDecimal);
    printf("Character (char - 1 byte)   | Value: %c\n", letter);

    // Veri t�rlerinin boyutlar�n� yazd�rma
    printf("\nSize of int: %lu bytes\n", sizeof(int));
    printf("Size of double: %lu bytes\n", sizeof(double));
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Size of char: %lu byte\n", sizeof(char));

    return 0;
}
