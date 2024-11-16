#include <stdio.h>
#include <stdlib.h>

// Bu program, C dilinde temel bir "Hello World" uygulamasýdýr.
// printf fonksiyonu ile bir metni ekrana yazdýrýr.
    // Kullanýlan kaçýþ dizileri (escape sequences):
    // \n -> Yeni bir satýra geçmeyi saðlar.
    // \r -> Satýr baþýna döner, ancak ayný satýrda iþlem yapar.
    /*
        Format Belirleyiciler (%):
    1. %d -> Decimal (ondalýk) tamsayýyý yazdýrýr.
    2. %u -> Unsigned (iþaretsiz) tamsayýyý yazdýrýr.
    3. %f -> Ondalýklý bir sayýyý (float veya double) yazdýrýr.
    4. %c -> Bir karakter yazdýrýr.
    5. %s -> Bir karakter dizisini (string) yazdýrýr.
    6. %x veya %X -> Ondalýk bir sayýyý küçük (%x) veya büyük (%X) harflerle onaltýlýk (hexadecimal) olarak yazdýrýr.
    7. %o -> Ondalýk bir sayýyý sekizlik (octal) olarak yazdýrýr.
    8. %p -> Bir pointer adresini yazdýrýr.
    9. %% -> Ekrana % iþareti yazdýrýr.
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


    // Programýn sorunsuz çalýþtýðýný belirtmek için 0 deðeri döndürülür.
    return 0;
}

/*
Ek Bilgiler:
1. #include <stdio.h> -> Standart giriþ/çýkýþ kütüphanesini içerir.
2. #include <stdlib.h> -> Genel amaçlý yardýmcý fonksiyonlarý içerir (malloc, free, atoi, vb.).
3. main() -> C programlarýnýn baþlangýç fonksiyonudur.
4. return 0; -> Programýn baþarýyla tamamlandýðýný belirtir.
*/
