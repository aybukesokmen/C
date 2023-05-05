#include <stdio.h>
#include <string.h>

// Dictionary (sözlük) elemanı
struct DictEntry {
    char key[20]; // Key (anahtar), 20 karakter uzunluğunda bir karakter dizisidir
    char value[50]; // Value (değer), 50 karakter uzunluğunda bir karakter dizisidir
};

// Dictionary (sözlük)
struct Dictionary {
    struct DictEntry entries[100]; // Sözlükteki tüm elemanların depolanacağı dizi
    int count; // Sözlükteki eleman sayısı
    char keys[100][20]; // Anahtarlar için bir dizi, anahtarların depolanacağı boyutu 20 olan bir karakter dizisi
};

// Yeni eleman ekle
void addEntry(struct Dictionary* dict, char key[], char value[]) {
    struct DictEntry newEntry; // Yeni bir `DictEntry` öğesi oluşturulur
    strcpy(newEntry.key, key); // `key` öğesi yeni `DictEntry` öğesine atanır
    strcpy(newEntry.value, value); // `value` öğesi yeni `DictEntry` öğesine atanır
    dict->entries[dict->count] = newEntry; // Yeni `DictEntry` öğesi, `Dictionary` öğesindeki uygun indekse atanır
    strcpy(dict->keys[dict->count], key); // Anahtar dizisindeki uygun indekse, yeni anahtar atanır
    dict->count++; // Sözlükteki eleman sayısı bir artırılır
}

// Anahtar değere karşılık gelen değeri döndürür
char* getValue(struct Dictionary* dict, char key[]) {
    for (int i = 0; i < dict->count; i++) { // Sözlükteki tüm öğeler için bir döngü başlatılır
        if (strcmp(dict->entries[i].key, key) == 0) { // Anahtar, `DictEntry` öğesinin `key` üyesi ile karşılaştırılır
            return dict->entries[i].value; // Anahtar, `DictEntry` öğesinin `value` üyesi ile eşleşirse, değer döndürülür
        }
    }
    return ""; // Eşleşen anahtar yoksa boş bir karakter dizisi döndürülür
}

int main() {
    struct Dictionary colors; // Yeni bir `Dictionary` öğesi oluşturulur
    colors.count = 0; // Başlangıçta, sözlükte hiç eleman olmadığı için `count` değeri sıfır atanır

    // Renkleri ekleyin
    addEntry(&colors, "Kırmızı", "#FF0000");
    addEntry(&colors, "Mavi", "#0000FF");
    addEntry(&colors, "Yeşil", "#00FF00");
    addEntry(&colors, "Sarı", "#FFFF00");
    addEntry(&colors, "Mor", "#800080");

    // Renkleri yazdırın
    for (int i = 0; i < colors.count; i++) { // Sözl
