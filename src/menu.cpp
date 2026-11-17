#include "menu.h"

void createListMenu(ListMenu &L) {
    // I.S. Belum terbentuk ListMenu kosong
    // F.S. Terbentuk ListMenu kosong (first = nullptr)

    L.first = nullptr;
}

adrMenu alokasiMenu(infotypeMenu x) {
    // I.S. Terdefinisi Data menu x 
    // F.S. Mengembalikan alamat elm menu baru

    adrMenu p = new elmMenu;

    p->info = x;
    p->next = nullptr;

    return p;
}

void dealokasiMenu(adrMenu p) {
    // I.S. Terdefinisi adrMenu p 
    // F.S. Memori yang ditunjuk p dihapus

    delete p;
    p = nullptr;
}

bool isEmptyMenu(ListMenu L) {
    // I.S. Terdefinisi ListMenu L
    // F.S. Mengembalikan true jika ListMenu kosong (first == nullptr), false jika tidak

    return L.first == nullptr;
}

void insertLastMenu(ListMenu &L, adrMenu p) {
    // I.S. Terdefinisi ListMenu L (memungkinkan kosong), dan adrMenu p 
    // F.S. p ditambahkan sebagai elemen terakhir pada ListMenu L
    
    if (isEmptyMenu(L)) {
        L.first = p;
    } else {
        adrMenu q = L.first;

        while (q->next != nullptr) {
            q = q->next;
        }

        q = q->next;
    }
}


void deleteFirstMenu(ListMenu &L, adrMenu &p) {
    // I.S. ListMenu L tidak kosong
    // F.S. Elemen pertama dihapus dan disimpan di p

    if (!isEmptyMenu(L)) {
        p = L.first;
        L.first = p->next;
        p->next = nullptr;
    } else {
        p = nullptr;
    }
}


void deleteLastMenu(ListMenu &L, adrMenu &p) {
    // I.S. ListMenu L tidak kosong
    // F.S. Elemen terakhir dihapus dan disimpan di p  
    
    if (!isEmptyMenu(L)) {
        adrMenu q = L.first;
        
        if (q->next == nullptr) {
            p = L.first;
            L.first = nullptr;
        } else {
            while ((q->next)->next != nullptr) {
                q = q->next;
            }

            p = q->next;
            q->next = nullptr;
        }
    } else {
        p = nullptr;
    }
}

void deleteAfterMenu(ListMenu &L, adrMenu prec, adrMenu &p){
    // I.S. ListMenu L tidak kosong, prec adalah elemen sebelum elemen yang dihapus
    // F.S. Elemen setelah prec dihapus dan disimpan di p

}

adrMenu findMenu(ListMenu L, string kodeMenu){
    // I.S. Terdefinisi ListMenu L, dan string kodeMenu
    // F.S. Mengembalikan alamat node menu jika ditemukan, nullptr jika tidak ditemukan

}

void showAllMenu(ListMenu L){
    // I.S. Terdefinisi ListMenu L
    // F.S. Menampilkan seluruh data menu ke layar
}