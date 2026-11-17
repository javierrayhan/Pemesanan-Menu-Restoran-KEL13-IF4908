#ifndef MENU_H
#define MENU_H

#include <iostream>
using namespace std;

struct infotypeMenu {
    string kode;
    string nama;
    string kategori;
    int harga;
};

typedef struct elmMenu *adrMenu;

struct elmMenu {
    infotypeMenu info;
    adrMenu next;
};

struct ListMenu {
    adrMenu first;
};

// I.S. Belum terbentuk ListMenu kosong
// F.S. Terbentuk ListMenu kosong (first = nullptr)
void createListMenu(ListMenu &L);

// I.S. Terdefinisi Data menu x 
// F.S. Mengembalikan alamat elm menu baru
adrMenu alokasiMenu(infotypeMenu x);

// I.S. Terdefinisi adrMenu p 
// F.S. Memori yang ditunjuk p dihapus
void dealokasiMenu(adrMenu p);

// I.S. Terdefinisi ListMenu L
// F.S. Mengembalikan true jika ListMenu kosong (first == nullptr), false jika tidak
bool isEmptyMenu(ListMenu L);

// I.S. Terdefinisi ListMenu L (memungkinkan kosong), dan adrMenu p 
// F.S. p ditambahkan sebagai elemen terakhir pada ListMenu L
void insertLastMenu(ListMenu &L, adrMenu p);

// I.S. ListMenu L tidak kosong
// F.S. Elemen pertama dihapus dan disimpan di p
void deleteFirstMenu(ListMenu &L, adrMenu &p);

// I.S. ListMenu L tidak kosong
// F.S. Elemen terakhir dihapus dan disimpan di p
void deleteLastMenu(ListMenu &L, adrMenu &p);

// I.S. ListMenu L tidak kosong, prec adalah elemen sebelum elemen yang dihapus
// F.S. Elemen setelah prec dihapus dan disimpan di p
void deleteAfterMenu(ListMenu &L, adrMenu prec, adrMenu &p);

// I.S. Terdefinisi ListMenu L, dan string kodeMenu
// F.S. Mengembalikan alamat node menu jika ditemukan, nullptr jika tidak ditemukan
adrMenu findMenu(ListMenu L, string kodeMenu);

// I.S. Terdefinisi ListMenu L
// F.S. Menampilkan seluruh data menu ke layar
void showAllMenu(ListMenu L);

#endif