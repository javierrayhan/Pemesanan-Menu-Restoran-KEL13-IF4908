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

#endif