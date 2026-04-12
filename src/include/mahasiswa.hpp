#ifndef MAHASISWA_HPP
#define MAHASISWA_HPP

#include "orang.hpp"
#include <string>

namespace sim {

class Mahasiswa : public Orang {
private:
    std::string nrp;

public:
    Mahasiswa(std::string nama, int umur, std::string nrp);

    void setNRP(std::string nrp);
    std::string getNRP();

    void tampilkan();
};

}

#endif