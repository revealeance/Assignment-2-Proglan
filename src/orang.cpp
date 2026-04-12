#include "include/orang.hpp"
#include <iostream>

using namespace std;

namespace sim {

Orang::Orang(string nama, int umur) {
    this->nama = nama;
    this->umur = umur;
}

void Orang::setNama(string nama) {
    this->nama = nama;
}

void Orang::setUmur(int umur) {
    this->umur = umur;
}

string Orang::getNama() {
    return nama;
}

int Orang::getUmur() {
    return umur;
}

void Orang::tampilkan() {
    cout << "Nama : " << nama << endl;
    cout << "Umur : " << umur << endl;
}

}