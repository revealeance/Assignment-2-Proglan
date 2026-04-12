#include "include/dosen.hpp"
#include <iostream>

using namespace std;

namespace sim {

Dosen::Dosen(string nama, int umur, string nip)
    : Orang(nama, umur) {
    this->nip = nip;
}

void Dosen::setNIP(string nip) {
    this->nip = nip;
}

string Dosen::getNIP() {
    return nip;
}

void Dosen::tampilkan() {
    cout << "Data Dosen" << endl;
    Orang::tampilkan();
    cout << "NIP  : " << nip << endl;
}

}