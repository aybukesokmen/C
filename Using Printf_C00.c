#include <stdio.h>
#include <stdlib.h>

// Bu program, C dilinde temel bir "Hello World" uygulamas�d�r.
// printf fonksiyonu ile bir metni ekrana yazd�r�r.
    // Kullan�lan ka��� dizileri (escape sequences):
    // \n -> Yeni bir sat�ra ge�meyi sa�lar.
    // \r -> Sat�r ba��na d�ner, ancak ayn� sat�rda i�lem yapar.
    /*
        Format Belirleyiciler (%):
    1. %d -> Decimal (ondal�k) tamsay�y� yazd�r�r.
    2. %u -> Unsigned (i�aretsiz) tamsay�y� yazd�r�r.
    3. %f -> Ondal�kl� bir say�y� (float veya double) yazd�r�r.
    4. %c -> Bir karakter yazd�r�r.
    5. %s -> Bir karakter dizisini (string) yazd�r�r.
    6. %x veya %X -> Ondal�k bir say�y� k���k (%x) veya b�y�k (%X) harflerle onalt�l�k (hexadecimal) olarak yazd�r�r.
    7. %o -> Ondal�k bir say�y� sekizlik (octal) olarak yazd�r�r.
    8. %p -> Bir pointer adresini yazd�r�r.
    9. %% -> Ekrana % i�areti yazd�r�r.
    */
int main()
{
    // Prints "Hello world!" to the screen.
    printf("Hello world!\n");

    // Example of format specifiers:
    int decimal = -123;
    unsigned int unsigned_num = 123;
    float pi = 3.14159;
    char ch = 'A';
    char str[] = "Hello";

    printf("Signed decimal (%%d): %d\n", decimal);            // %d prints a signed integer.
    printf("Unsigned integer (%%u): %u\n", unsigned_num);    // %u prints an unsigned integer.
    printf("Floating-point number (%%f): %f\n", pi);         // %f prints a floating-point number.
    printf("Character (%%c): %c\n", ch);                     // %c prints a single character.
    printf("String (%%s): %s\n", str);                       // %s prints a string.
    printf("Hexadecimal (%%x): %x\n", unsigned_num);         // %x prints a number in hexadecimal format.
    printf("Octal (%%o): %o\n", unsigned_num);               // %o prints a number in octal format.


    // Program�n sorunsuz �al��t���n� belirtmek i�in 0 de�eri d�nd�r�l�r.
    return 0;
}

/*
Ek Bilgiler:
1. #include <stdio.h> -> Standart giri�/��k�� k�t�phanesini i�erir.
2. #include <stdlib.h> -> Genel ama�l� yard�mc� fonksiyonlar� i�erir (malloc, free, atoi, vb.).
3. main() -> C programlar�n�n ba�lang�� fonksiyonudur.
4. return 0; -> Program�n ba�ar�yla tamamland���n� belirtir.
*/
