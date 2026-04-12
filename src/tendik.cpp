#include "include/tendik.hpp"
#include <iostream>

using namespace std;

namespace sim {

Tendik::Tendik(string nama, int umur, string jabatan)
    : Orang(nama, umur) {
    this->jabatan = jabatan;
}

void Tendik::setJabatan(string jabatan) {
    this->jabatan = jabatan;
}

string Tendik::getJabatan() {
    return jabatan;
}

void Tendik::tampilkan() {
    cout << "Data Tendik" << endl;
    Orang::tampilkan();
    cout << "Jabatan : " << jabatan << endl;
}

}