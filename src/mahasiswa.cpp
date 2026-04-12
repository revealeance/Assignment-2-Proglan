#include "include/mahasiswa.hpp"
#include <iostream>

using namespace std;

namespace sim {

Mahasiswa::Mahasiswa(string nama, int umur, string nrp)
    : Orang(nama, umur) {
    this->nrp = nrp;
}

void Mahasiswa::setNRP(string nrp) {
    this->nrp = nrp;
}

string Mahasiswa::getNRP() {
    return nrp;
}

void Mahasiswa::tampilkan() {
    cout << "Data Mahasiswa" << endl;
    Orang::tampilkan();
    cout << "NRP  : " << nrp << endl;
}

}