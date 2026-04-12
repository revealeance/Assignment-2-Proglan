#ifndef ORANG_HPP // ini agar header file tidak di include lebih dari sekali, agar menghindari error
#define ORANG_HPP

#include <string>

namespace sim {

class Orang {
protected:
    std::string nama;
    int umur;

public:
    Orang(std::string nama, int umur);

    void setNama(std::string nama);
    void setUmur(int umur);

    std::string getNama();
    int getUmur();

    void tampilkan();
};

}

#endif // ini penutup untuk syntax ifndef di atas