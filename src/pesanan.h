#ifndef PESANAN_H
#define PESANAN_H

#include <iostream>
using namespace std;

struct infotypePesanan {
    string nomorPesanan;
    int nomorMeja;

    // true = lunas, //false = belum bayar
    bool statusBayar; 
};

typedef struct elmPesanan *adrPesanan;

struct elmPesanan {
    infotypePesanan info;
    adrPesanan next;
};

struct ListPesanan {
    adrPesanan first;
};

#endif