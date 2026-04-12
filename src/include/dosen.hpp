#ifndef DOSEN_HPP
#define DOSEN_HPP

#include "orang.hpp"
#include <string>

namespace sim {

class Dosen : public Orang {
private:
    std::string nip;

public:
    Dosen(std::string nama, int umur, std::string nip);

    void setNIP(std::string nip);
    std::string getNIP();

    void tampilkan();
};

}

#endif