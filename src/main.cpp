#include <iostream>
#include <string>

#include "include/orang.hpp"
#include "include/dosen.hpp"
#include "include/mahasiswa.hpp"
#include "include/tendik.hpp"

using namespace std;
using namespace sim;

int main() {

    Mahasiswa m1("Budi", 20, "5025231001");
    Mahasiswa m2("Siti", 19, "5025231002");

    Dosen d1("Pak Andi", 45, "198765");
    Tendik t1("Bu Rina", 35, "Keuangan");

    cout << "===== TEST DATA =====" << endl;

    cout << endl;
    m1.tampilkan();

    cout << endl;
    m2.tampilkan();

    cout << endl;
    d1.tampilkan();

    cout << endl;
    t1.tampilkan();

    cout << endl;
    cout << "TEST UBAH DATA (DISINI ADA PROSES PERUBAHAN UMUR)" << endl;

    m1.setNama("Budi Santoso");
    m1.setUmur(21);

    cout << endl;
    m1.tampilkan();

    return 0;
}