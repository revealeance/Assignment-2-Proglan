#ifndef TENDIK_HPP
#define TENDIK_HPP

#include "orang.hpp"
#include <string>

namespace sim {

class Tendik : public Orang {
private:
    std::string jabatan;

public:
    Tendik(std::string nama, int umur, std::string jabatan);

    void setJabatan(std::string jabatan);
    std::string getJabatan();

    void tampilkan();
};

}

#endif