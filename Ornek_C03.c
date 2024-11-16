#include <stdio.h>


typedef struct Values
{
    int numb1;
    int numb2;
    char NameInitial;
    char NameLastLetter;
} Values;

Values value;

int main() {

    printf("Enter number1 value: ");
    scanf("%d", &value.numb1);

    printf("Enter number2 value: ");
    scanf("%d", &value.numb2);

    printf("Enter name's first initial: ");
    scanf(" %c", &value.NameInitial); // Baþýndaki boþluk önceki \n karakterini temizler.

    printf("Enter name's last letter: ");
    scanf(" %c", &value.NameLastLetter);

    printf("\n--- Entered Values ---\n");
    printf("Number 1: %d\n", value.numb1);
    printf("Number 2: %d\n", value.numb2);
    printf("Name's First Initial: %c\n", value.NameInitial);
    printf("Name's Last Letter: %c\n", value.NameLastLetter);


    //Sayilari alfabeye göre yazdirdim
    for(int i = value.NameInitial ;i<=value.NameLastLetter;i++ )
        {

          printf("%c", i);
  printf(" , ");


    }

    return 0;
}
